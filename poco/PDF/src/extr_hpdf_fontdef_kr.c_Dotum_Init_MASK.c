
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ascent; int descent; int cap_height; int stemv; int valid; int type; scalar_t__ italic_angle; int flags; int font_bbox; } ;
typedef int HPDF_STATUS ;
typedef TYPE_1__* HPDF_FontDef ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*) ;
 int VAR_4 ;
 int FUNC_2 (int ,int,int,int) ;

__attribute__((used)) static HPDF_STATUS
FUNC_3 (HPDF_FontDef VAR_5)
{
    HPDF_STATUS VAR_6;

    FUNC_1 ((" HPDF_FontDef_Dotum_Init\n"));

    VAR_5->ascent = 858;
    VAR_5->descent = -141;
    VAR_5->cap_height = 679;
    VAR_5->font_bbox = FUNC_2(0, -150, 1000, 863);
    VAR_5->flags = VAR_2;
    VAR_5->italic_angle = 0;
    VAR_5->stemv = 78;
    if ((VAR_6 = FUNC_0 (VAR_5, VAR_0)) !=
                VAR_3) {
        return VAR_6;
    }

    VAR_5->type = VAR_1;
    VAR_5->valid = VAR_4;

    return VAR_3;
}
