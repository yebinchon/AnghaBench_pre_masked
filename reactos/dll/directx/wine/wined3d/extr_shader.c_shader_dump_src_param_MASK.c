
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_string_buffer {int dummy; } ;
struct wined3d_shader_version {int dummy; } ;
struct wined3d_shader_src_param {int modifiers; int swizzle; int reg; } ;
typedef enum wined3d_shader_src_modifier { ____Placeholder_wined3d_shader_src_modifier } wined3d_shader_src_modifier ;
typedef int DWORD ;
 int VAR_0 ;
 int FUNC_0 (struct wined3d_string_buffer*,char*,...) ;
 int FUNC_1 (struct wined3d_string_buffer*,int *,struct wined3d_shader_version const*) ;

__attribute__((used)) static void FUNC_2(struct wined3d_string_buffer *VAR_1,
        const struct wined3d_shader_src_param *VAR_2, const struct wined3d_shader_version *VAR_3)
{
    enum wined3d_shader_src_modifier VAR_4 = VAR_2->modifiers;
    DWORD VAR_5 = VAR_2->swizzle;

    if (VAR_4 == 134
            || VAR_4 == 138
            || VAR_4 == 130
            || VAR_4 == 128
            || VAR_4 == 140)
        FUNC_0(VAR_1, "-");
    else if (VAR_4 == 137)
        FUNC_0(VAR_1, "1-");
    else if (VAR_4 == 132)
        FUNC_0(VAR_1, "!");

    if (VAR_4 == 141 || VAR_4 == 140)
        FUNC_0(VAR_1, "abs(");

    FUNC_1(VAR_1, &VAR_2->reg, VAR_3);

    switch (VAR_4)
    {
        case 133: break;
        case 134: break;
        case 132: break;
        case 139: FUNC_0(VAR_1, "_bias"); break;
        case 138: FUNC_0(VAR_1, "_bias"); break;
        case 131: FUNC_0(VAR_1, "_bx2"); break;
        case 130: FUNC_0(VAR_1, "_bx2"); break;
        case 137: break;
        case 129: FUNC_0(VAR_1, "_x2"); break;
        case 128: FUNC_0(VAR_1, "_x2"); break;
        case 135: FUNC_0(VAR_1, "_dz"); break;
        case 136: FUNC_0(VAR_1, "_dw"); break;
        case 140: FUNC_0(VAR_1, ")"); break;
        case 141: FUNC_0(VAR_1, ")"); break;
        default: FUNC_0(VAR_1, "_unknown_modifier(%#x)", VAR_4);
    }

    if (VAR_5 != VAR_0)
    {
        static const char VAR_6[] = "xyzw";
        DWORD VAR_7 = VAR_5 & 0x03;
        DWORD VAR_8 = (VAR_5 >> 2) & 0x03;
        DWORD VAR_9 = (VAR_5 >> 4) & 0x03;
        DWORD VAR_10 = (VAR_5 >> 6) & 0x03;

        if (VAR_7 == VAR_8
                && VAR_7 == VAR_9
                && VAR_7 == VAR_10)
        {
            FUNC_0(VAR_1, ".%c", VAR_6[VAR_7]);
        }
        else
        {
            FUNC_0(VAR_1, ".%c%c%c%c", VAR_6[VAR_7], VAR_6[VAR_8],
                    VAR_6[VAR_9], VAR_6[VAR_10]);
        }
    }
}
