
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int font_info; } ;
struct TYPE_4__ {TYPE_1__ cid; } ;
typedef int PS_FontInfoRec ;
typedef scalar_t__ FT_Face ;
typedef int FT_Error ;
typedef TYPE_2__* CID_Face ;


 int VAR_0 ;

__attribute__((used)) static FT_Error
  FUNC_0( FT_Face VAR_1,
                        PS_FontInfoRec* VAR_2 )
  {
    *VAR_2 = ((CID_Face)VAR_1)->cid.font_info;

    return VAR_0;
  }
