
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int stemv; int italic_angle; int flags; int attr; } ;
typedef int HPDF_STATUS ;
typedef TYPE_1__* HPDF_FontDef ;
typedef scalar_t__ HPDF_BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;

HPDF_STATUS
FUNC_1 (HPDF_FontDef VAR_4,
                              HPDF_BOOL VAR_5,
                              HPDF_BOOL VAR_6)
{
    FUNC_0 ((" HPDF_CIDFontDef_ChangeStyle\n"));

    if (!VAR_4 || !VAR_4->attr)
        return VAR_2;

    if (VAR_5) {
        VAR_4->stemv *= 2;
        VAR_4->flags |= VAR_0;
    }

    if (VAR_6) {
        VAR_4->italic_angle -= 11;
        VAR_4->flags |= VAR_1;
    }

    return VAR_3;
}
