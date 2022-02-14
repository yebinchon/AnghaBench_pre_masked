
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int font_extra; } ;
struct TYPE_4__ {TYPE_1__ type1; } ;
typedef TYPE_2__* T42_Face ;
typedef int PS_FontExtraRec ;
typedef scalar_t__ FT_Face ;
typedef int FT_Error ;


 int VAR_0 ;

__attribute__((used)) static FT_Error
  FUNC_0( FT_Face VAR_1,
                         PS_FontExtraRec* VAR_2 )
  {
    *VAR_2 = ((T42_Face)VAR_1)->type1.font_extra;

    return VAR_0;
  }
