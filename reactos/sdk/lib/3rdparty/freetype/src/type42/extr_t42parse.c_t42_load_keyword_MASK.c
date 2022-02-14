
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_10__ ;


struct TYPE_19__ {scalar_t__ type; int location; int (* reader ) (int ,TYPE_3__*) ;} ;
struct TYPE_16__ {int font_bbox; int font_extra; int font_info; } ;
struct TYPE_18__ {TYPE_2__ type1; } ;
struct TYPE_15__ {int error; } ;
struct TYPE_14__ {TYPE_1__ root; } ;
struct TYPE_17__ {TYPE_10__ parser; } ;
typedef TYPE_3__* T42_Loader ;
typedef TYPE_4__* T42_Face ;
typedef TYPE_5__* T1_Field ;
typedef int FT_UInt ;
typedef int FT_Face ;
typedef int FT_Error ;





 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_10__*,TYPE_5__*,void**,int ,int ) ;
 int FUNC_1 (TYPE_10__*,TYPE_5__*,void**,int ,int ) ;
 int FUNC_2 (int ,TYPE_3__*) ;

__attribute__((used)) static FT_Error
  FUNC_3( T42_Face VAR_3,
                    T42_Loader VAR_4,
                    T1_Field VAR_5 )
  {
    FT_Error VAR_6;
    void* VAR_7;
    void** VAR_8;
    FT_UInt VAR_9 = 0;



    if ( VAR_5->type == VAR_0 )
    {
      VAR_5->reader( (FT_Face)VAR_3, VAR_4 );
      VAR_6 = VAR_4->parser.root.error;
      goto Exit;
    }




    switch ( VAR_5->location )
    {
    case 128:
      VAR_7 = &VAR_3->type1.font_info;
      break;

    case 129:
      VAR_7 = &VAR_3->type1.font_extra;
      break;

    case 130:
      VAR_7 = &VAR_3->type1.font_bbox;
      break;

    default:
      VAR_7 = &VAR_3->type1;
    }

    VAR_8 = &VAR_7;

    if ( VAR_5->type == VAR_2 ||
         VAR_5->type == VAR_1 )
      VAR_6 = FUNC_1( &VAR_4->parser, VAR_5,
                                   VAR_8, VAR_9, 0 );
    else
      VAR_6 = FUNC_0( &VAR_4->parser, VAR_5,
                             VAR_8, VAR_9, 0 );

   Exit:
    return VAR_6;
  }
