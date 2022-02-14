
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum wined3d_shader_src_modifier { ____Placeholder_wined3d_shader_src_modifier } wined3d_shader_src_modifier ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*,char*,char const*,char const*,...) ;

__attribute__((used)) static void FUNC_2(enum wined3d_shader_src_modifier VAR_0,
        const char *VAR_1, const char *VAR_2, char *VAR_3)
{
    switch (VAR_0)
    {
    case 135:
    case 136:
    case 133:
        FUNC_1(VAR_3, "%s%s", VAR_1, VAR_2);
        break;
    case 134:
        FUNC_1(VAR_3, "-%s%s", VAR_1, VAR_2);
        break;
    case 132:
        FUNC_1(VAR_3, "!%s%s", VAR_1, VAR_2);
        break;
    case 139:
        FUNC_1(VAR_3, "(%s%s - vec4(0.5)%s)", VAR_1, VAR_2, VAR_2);
        break;
    case 138:
        FUNC_1(VAR_3, "-(%s%s - vec4(0.5)%s)", VAR_1, VAR_2, VAR_2);
        break;
    case 131:
        FUNC_1(VAR_3, "(2.0 * (%s%s - 0.5))", VAR_1, VAR_2);
        break;
    case 130:
        FUNC_1(VAR_3, "-(2.0 * (%s%s - 0.5))", VAR_1, VAR_2);
        break;
    case 137:
        FUNC_1(VAR_3, "(1.0 - %s%s)", VAR_1, VAR_2);
        break;
    case 129:
        FUNC_1(VAR_3, "(2.0 * %s%s)", VAR_1, VAR_2);
        break;
    case 128:
        FUNC_1(VAR_3, "-(2.0 * %s%s)", VAR_1, VAR_2);
        break;
    case 141:
        FUNC_1(VAR_3, "abs(%s%s)", VAR_1, VAR_2);
        break;
    case 140:
        FUNC_1(VAR_3, "-abs(%s%s)", VAR_1, VAR_2);
        break;
    default:
        FUNC_0("Unhandled modifier %u\n", VAR_0);
        FUNC_1(VAR_3, "%s%s", VAR_1, VAR_2);
    }
}
