
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ascent; int descent; int cap_height; int stemv; int valid; int type; scalar_t__ italic_angle; scalar_t__ flags; int font_bbox; } ;
typedef int HPDF_STATUS ;
typedef TYPE_1__* HPDF_FontDef ;


 int FUNC_0 (TYPE_1__*,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*) ;
 int VAR_4 ;
 int FUNC_2 (int ,int,int,int) ;
 int VAR_5 ;

__attribute__((used)) static HPDF_STATUS
FUNC_3 (HPDF_FontDef VAR_6)
{
    HPDF_STATUS VAR_7;

    FUNC_1 ((" HPDF_FontDef_MS_Gothic_Init\n"));

    VAR_6->ascent = 859;
    VAR_6->descent = -140;
    VAR_6->cap_height = 769;
    VAR_6->font_bbox = FUNC_2(-0, -136, 1000, 859);
    VAR_6->flags = VAR_2 + VAR_1;
    VAR_6->italic_angle = 0;
    VAR_6->stemv = 78;
    if ((VAR_7 = FUNC_0 (VAR_6, VAR_5)) !=
                VAR_3) {
        return VAR_7;
    }

    VAR_6->type = VAR_0;
    VAR_6->valid = VAR_4;

    return VAR_3;
}
