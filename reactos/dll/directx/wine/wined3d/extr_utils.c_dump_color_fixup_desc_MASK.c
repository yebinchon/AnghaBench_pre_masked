
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct color_fixup_desc {scalar_t__ w_sign_fixup; int w_source; scalar_t__ z_sign_fixup; int z_source; scalar_t__ y_sign_fixup; int y_source; scalar_t__ x_sign_fixup; int x_source; } ;


 int FUNC_0 (char*,int ,...) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct color_fixup_desc) ;
 scalar_t__ FUNC_4 (struct color_fixup_desc) ;

void FUNC_5(struct color_fixup_desc VAR_0)
{
    if (FUNC_4(VAR_0))
    {
        FUNC_0("\tComplex: %s\n", FUNC_1(FUNC_3(VAR_0)));
        return;
    }

    FUNC_0("\tX: %s%s\n", FUNC_2(VAR_0.x_source), VAR_0.x_sign_fixup ? ", SIGN_FIXUP" : "");
    FUNC_0("\tY: %s%s\n", FUNC_2(VAR_0.y_source), VAR_0.y_sign_fixup ? ", SIGN_FIXUP" : "");
    FUNC_0("\tZ: %s%s\n", FUNC_2(VAR_0.z_source), VAR_0.z_sign_fixup ? ", SIGN_FIXUP" : "");
    FUNC_0("\tW: %s%s\n", FUNC_2(VAR_0.w_source), VAR_0.w_sign_fixup ? ", SIGN_FIXUP" : "");
}
