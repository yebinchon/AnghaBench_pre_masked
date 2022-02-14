
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_46__ TYPE_9__ ;
typedef struct TYPE_45__ TYPE_8__ ;
typedef struct TYPE_44__ TYPE_7__ ;
typedef struct TYPE_43__ TYPE_6__ ;
typedef struct TYPE_42__ TYPE_5__ ;
typedef struct TYPE_41__ TYPE_4__ ;
typedef struct TYPE_40__ TYPE_3__ ;
typedef struct TYPE_39__ TYPE_2__ ;
typedef struct TYPE_38__ TYPE_1__ ;
typedef struct TYPE_37__ TYPE_17__ ;
typedef struct TYPE_36__ TYPE_16__ ;
typedef struct TYPE_35__ TYPE_15__ ;
typedef struct TYPE_34__ TYPE_14__ ;
typedef struct TYPE_33__ TYPE_13__ ;
typedef struct TYPE_32__ TYPE_12__ ;
typedef struct TYPE_31__ TYPE_11__ ;
typedef struct TYPE_30__ TYPE_10__ ;


struct TYPE_45__ {int private_dict; scalar_t__* charstrings_len; scalar_t__* charstrings; int font_offset; int font_matrix; } ;
struct TYPE_39__ {TYPE_1__* internal; } ;
struct TYPE_46__ {TYPE_8__ type1; TYPE_2__ root; int psaux; } ;
struct TYPE_44__ {int hint; } ;
struct TYPE_42__ {void* y; void* x; } ;
struct TYPE_41__ {void* x; } ;
struct TYPE_43__ {TYPE_5__ advance; TYPE_4__ left_bearing; scalar_t__ glyph; scalar_t__ metrics_only; int face; } ;
struct TYPE_40__ {scalar_t__ (* get_glyph_metrics ) (int ,size_t,int ,TYPE_15__*) ;scalar_t__ (* get_glyph_data ) (int ,size_t,TYPE_17__*) ;} ;
struct TYPE_38__ {TYPE_16__* incremental_interface; } ;
struct TYPE_37__ {scalar_t__ length; scalar_t__ pointer; } ;
struct TYPE_36__ {int object; TYPE_3__* funcs; } ;
struct TYPE_35__ {void* advance_v; void* advance; void* bearing_x; scalar_t__ bearing_y; } ;
struct TYPE_34__ {int (* t1_make_subfont ) (int ,int *,int *) ;int (* ps_decoder_init ) (TYPE_13__*,TYPE_11__*,int ) ;TYPE_10__* t1_decoder_funcs; } ;
struct TYPE_33__ {int * current_subfont; } ;
struct TYPE_32__ {scalar_t__ hinting_engine; } ;
struct TYPE_31__ {TYPE_6__ builder; int font_offset; int font_matrix; } ;
struct TYPE_30__ {scalar_t__ (* parse_charstrings ) (TYPE_13__*,int *,int ) ;scalar_t__ (* parse_metrics ) (TYPE_11__*,int *,size_t) ;scalar_t__ (* parse_charstrings_old ) (TYPE_11__*,int *,size_t) ;} ;
typedef TYPE_7__* T1_GlyphSlot ;
typedef TYPE_8__* T1_Font ;
typedef TYPE_9__* T1_Face ;
typedef TYPE_10__* T1_Decoder_Funcs ;
typedef TYPE_11__* T1_Decoder ;
typedef TYPE_12__* PS_Driver ;
typedef TYPE_13__ PS_Decoder ;
typedef TYPE_14__* PSAux_Service ;
typedef int FT_ULong ;
typedef size_t FT_UInt ;
typedef scalar_t__ FT_Int ;
typedef TYPE_15__ FT_Incremental_MetricsRec ;
typedef TYPE_16__ FT_Incremental_InterfaceRec ;
typedef scalar_t__ FT_Error ;
typedef TYPE_17__ FT_Data ;
typedef int FT_Byte ;
typedef int FT_Bool ;
typedef int CFF_SubFontRec ;


 int VAR_0 ;
 void* FUNC_0 (void*) ;
 scalar_t__ FUNC_1 (scalar_t__,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (TYPE_9__*) ;
 int FUNC_3 (TYPE_9__*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 void* FUNC_4 (void*) ;
 int VAR_4 ;
 scalar_t__ FUNC_5 (int ,size_t,TYPE_17__*) ;
 scalar_t__ FUNC_6 (TYPE_11__*,int *,size_t) ;
 scalar_t__ FUNC_7 (TYPE_11__*,int *,size_t) ;
 int FUNC_8 (TYPE_13__*,TYPE_11__*,int ) ;
 int FUNC_9 (int ,int *,int *) ;
 scalar_t__ FUNC_10 (TYPE_13__*,int *,int ) ;
 scalar_t__ FUNC_11 (TYPE_13__*,int *,int ) ;
 scalar_t__ FUNC_12 (int ,size_t,int ,TYPE_15__*) ;

__attribute__((used)) static FT_Error
  FUNC_13( T1_Decoder VAR_5,
                                      FT_UInt VAR_6,
                                      FT_Data* VAR_7,
                                      FT_Bool* VAR_8 )
  {
    T1_Face VAR_9 = (T1_Face)VAR_5->builder.face;
    T1_Font VAR_10 = &VAR_9->type1;
    FT_Error VAR_11 = VAR_1;

    PSAux_Service VAR_12 = (PSAux_Service)VAR_9->psaux;
    const T1_Decoder_Funcs VAR_13 = VAR_12->t1_decoder_funcs;
    PS_Decoder VAR_14;
    VAR_5->font_matrix = VAR_10->font_matrix;
    VAR_5->font_offset = VAR_10->font_offset;
    {
      VAR_7->pointer = VAR_10->charstrings[VAR_6];
      VAR_7->length = (FT_Int)VAR_10->charstrings_len[VAR_6];
    }

    if ( !VAR_11 )
    {
      if ( VAR_5->builder.metrics_only )
        VAR_11 = VAR_13->parse_metrics(
                  VAR_5,
                  (FT_Byte*)VAR_7->pointer,
                  (FT_UInt)VAR_7->length );

      else
      {
        CFF_SubFontRec VAR_15;


        VAR_12->ps_decoder_init( &VAR_14, VAR_5, VAR_4 );

        VAR_12->t1_make_subfont( FUNC_2( VAR_9 ),
                                &VAR_9->type1.private_dict, &VAR_15 );
        VAR_14.current_subfont = &VAR_15;

        VAR_11 = VAR_13->parse_charstrings(
                  &VAR_14,
                  (FT_Byte*)VAR_7->pointer,
                  (FT_ULong)VAR_7->length );



        if ( FUNC_1( VAR_11, VAR_3 ) )
        {



          ((T1_GlyphSlot)VAR_5->builder.glyph)->hint = VAR_0;

          *VAR_8 = VAR_4;

          VAR_11 = VAR_13->parse_charstrings(
                    &VAR_14,
                    (FT_Byte*)VAR_7->pointer,
                    (FT_ULong)VAR_7->length );
        }
      }
    }
    return VAR_11;
  }
