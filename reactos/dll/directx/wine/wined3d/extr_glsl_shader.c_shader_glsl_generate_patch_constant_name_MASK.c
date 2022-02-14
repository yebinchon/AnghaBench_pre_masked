
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_string_buffer {int dummy; } ;
struct wined3d_shader_signature_element {int sysval_semantic; char const* semantic_idx; } ;


 int FUNC_0 (char*,int) ;






 int FUNC_1 (struct wined3d_string_buffer*,char*,char const*,...) ;

__attribute__((used)) static void FUNC_2(struct wined3d_string_buffer *VAR_0,
        const struct wined3d_shader_signature_element *VAR_1, unsigned int *VAR_2,
        const char *VAR_3)
{
    if (!VAR_1->sysval_semantic)
    {
        FUNC_1(VAR_0, "user_patch_constant[%u]%s", (*VAR_2)++, VAR_3);
        return;
    }

    switch (VAR_1->sysval_semantic)
    {
        case 131:
        case 129:
        case 132:
        case 133:
            FUNC_1(VAR_0, "gl_TessLevelOuter[%u]", VAR_1->semantic_idx);
            break;
        case 130:
        case 128:
            FUNC_1(VAR_0, "gl_TessLevelInner[%u]", VAR_1->semantic_idx);
            break;
        default:
            FUNC_0("Unhandled sysval semantic %#x.\n", VAR_1->sysval_semantic);
            FUNC_1(VAR_0, "vec4(0.0)%s", VAR_3);
    }
}
