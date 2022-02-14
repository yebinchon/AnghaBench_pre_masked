
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int font_extra; } ;
typedef int PS_FontExtraRec ;
typedef scalar_t__ FT_Face ;
typedef int FT_Error ;
typedef TYPE_1__* CID_Face ;


 int VAR_0 ;

__attribute__((used)) static FT_Error
  FUNC_0( FT_Face VAR_1,
                        PS_FontExtraRec* VAR_2 )
  {
    *VAR_2 = ((CID_Face)VAR_1)->font_extra;

    return VAR_0;
  }
