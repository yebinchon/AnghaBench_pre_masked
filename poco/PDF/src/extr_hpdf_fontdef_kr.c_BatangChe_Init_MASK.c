
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ascent; int descent; int cap_height; int stemv; int valid; int type; scalar_t__ italic_angle; scalar_t__ flags; int font_bbox; } ;
typedef int HPDF_STATUS ;
typedef TYPE_1__* HPDF_FontDef ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (char*) ;
 int VAR_6 ;
 int FUNC_2 (int ,int,int,int) ;

__attribute__((used)) static HPDF_STATUS
FUNC_3 (HPDF_FontDef VAR_7)
{
    HPDF_STATUS VAR_8;

    FUNC_1 ((" HPDF_FontDef_BatangChe_Init\n"));

    VAR_7->ascent = 858;
    VAR_7->descent = -141;
    VAR_7->cap_height = 769;
    VAR_7->font_bbox = FUNC_2(-0, -154, 1000, 861);
    VAR_7->flags = VAR_4 + VAR_2 +
                VAR_3;
    VAR_7->italic_angle = 0;
    VAR_7->stemv = 78;
    if ((VAR_8 = FUNC_0 (VAR_7, VAR_0)) !=
                VAR_5) {
        return VAR_8;
    }

    VAR_7->type = VAR_1;
    VAR_7->valid = VAR_6;

    return VAR_5;
}
