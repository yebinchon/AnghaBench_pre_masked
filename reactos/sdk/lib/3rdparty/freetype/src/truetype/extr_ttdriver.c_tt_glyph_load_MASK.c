
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_14__ {scalar_t__ num_glyphs; TYPE_1__* internal; } ;
struct TYPE_13__ {TYPE_5__* face; } ;
struct TYPE_12__ {int metrics; } ;
struct TYPE_11__ {int hinted_metrics; int * metrics; } ;
struct TYPE_10__ {int incremental_interface; } ;
typedef TYPE_2__* TT_Size ;
typedef int TT_GlyphSlot ;
typedef scalar_t__ FT_UInt ;
typedef TYPE_3__* FT_Size ;
typedef int FT_Int32 ;
typedef TYPE_4__* FT_GlyphSlot ;
typedef TYPE_5__* FT_Face ;
typedef int FT_Error ;


 scalar_t__ FUNC_0 (TYPE_5__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (TYPE_2__*,int ,scalar_t__,int) ;

__attribute__((used)) static FT_Error
  FUNC_3( FT_GlyphSlot VAR_9,
                 FT_Size VAR_10,
                 FT_UInt VAR_11,
                 FT_Int32 VAR_12 )
  {
    TT_GlyphSlot VAR_13 = (TT_GlyphSlot)VAR_9;
    TT_Size VAR_14 = (TT_Size)VAR_10;
    FT_Face VAR_15 = VAR_9->face;
    FT_Error VAR_16;


    if ( !VAR_13 )
      return FUNC_1( VAR_8 );

    if ( !VAR_14 )
      return FUNC_1( VAR_7 );

    if ( !VAR_15 )
      return FUNC_1( VAR_6 );





    if ( VAR_11 >= (FT_UInt)VAR_15->num_glyphs )

      return FUNC_1( VAR_5 );

    if ( VAR_12 & VAR_2 )
    {



      if ( FUNC_0( VAR_15 ) )
        VAR_12 &= ~VAR_2;

      if ( VAR_12 & VAR_0 )
        VAR_12 |= VAR_2;
    }

    if ( VAR_12 & ( VAR_3 | VAR_4 ) )
    {
      VAR_12 |= VAR_1 | VAR_4;

      if ( !FUNC_0( VAR_15 ) )
        VAR_12 |= VAR_2;
    }


    VAR_14->metrics = ( VAR_12 & VAR_2 )
                      ? &VAR_10->metrics
                      : &VAR_14->hinted_metrics;


    VAR_16 = FUNC_2( VAR_14, VAR_13, VAR_11, VAR_12 );




    return VAR_16;
  }
