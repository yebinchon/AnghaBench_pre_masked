
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int swizzle; } ;
struct shader_reg {int srcmod; TYPE_1__ u; } ;
 int FUNC_0 (struct shader_reg const*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct shader_reg const*) ;
 char const* FUNC_3 (char*,int ,int ,int ) ;

const char *FUNC_4(const struct shader_reg *VAR_0)
{
    switch (VAR_0->srcmod)
    {
        case 133:
            return FUNC_3("%s%s%s", FUNC_2(VAR_0),
                    FUNC_0(VAR_0),
                    FUNC_1(VAR_0->u.swizzle));
        case 134:
            return FUNC_3("-%s%s%s", FUNC_2(VAR_0),
                    FUNC_0(VAR_0),
                    FUNC_1(VAR_0->u.swizzle));
        case 139:
            return FUNC_3("%s%s_bias%s", FUNC_2(VAR_0),
                    FUNC_0(VAR_0),
                    FUNC_1(VAR_0->u.swizzle));
        case 138:
            return FUNC_3("-%s%s_bias%s", FUNC_2(VAR_0),
                    FUNC_0(VAR_0),
                    FUNC_1(VAR_0->u.swizzle));
        case 131:
            return FUNC_3("%s%s_bx2%s", FUNC_2(VAR_0),
                    FUNC_0(VAR_0),
                    FUNC_1(VAR_0->u.swizzle));
        case 130:
            return FUNC_3("-%s%s_bx2%s", FUNC_2(VAR_0),
                    FUNC_0(VAR_0),
                    FUNC_1(VAR_0->u.swizzle));
        case 137:
            return FUNC_3("1 - %s%s%s", FUNC_2(VAR_0),
                    FUNC_0(VAR_0),
                    FUNC_1(VAR_0->u.swizzle));
        case 129:
            return FUNC_3("%s%s_x2%s", FUNC_2(VAR_0),
                    FUNC_0(VAR_0),
                    FUNC_1(VAR_0->u.swizzle));
        case 128:
            return FUNC_3("-%s%s_x2%s", FUNC_2(VAR_0),
                    FUNC_0(VAR_0),
                    FUNC_1(VAR_0->u.swizzle));
        case 135:
            return FUNC_3("%s%s_dz%s", FUNC_2(VAR_0),
                    FUNC_0(VAR_0),
                    FUNC_1(VAR_0->u.swizzle));
        case 136:
            return FUNC_3("%s%s_dw%s", FUNC_2(VAR_0),
                    FUNC_0(VAR_0),
                    FUNC_1(VAR_0->u.swizzle));
        case 141:
            return FUNC_3("%s%s_abs%s", FUNC_2(VAR_0),
                    FUNC_0(VAR_0),
                    FUNC_1(VAR_0->u.swizzle));
        case 140:
            return FUNC_3("-%s%s_abs%s", FUNC_2(VAR_0),
                    FUNC_0(VAR_0),
                    FUNC_1(VAR_0->u.swizzle));
        case 132:
            return FUNC_3("!%s%s%s", FUNC_2(VAR_0),
                    FUNC_0(VAR_0),
                    FUNC_1(VAR_0->u.swizzle));
    }
    return "Unknown modifier";
}
