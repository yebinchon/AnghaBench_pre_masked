
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_string_buffer {int dummy; } ;
struct wined3d_shader_signature_element {scalar_t__ register_idx; int mask; int sysval_semantic; } ;
struct wined3d_shader_signature {unsigned int element_count; struct wined3d_shader_signature_element* elements; } ;
typedef scalar_t__ BOOL ;


 unsigned int FUNC_0 (scalar_t__,unsigned int) ;
 int FUNC_1 (struct wined3d_string_buffer*,char*,...) ;
 int FUNC_2 (struct wined3d_string_buffer*,struct wined3d_shader_signature_element const*,unsigned int*,char*) ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static void FUNC_4(struct wined3d_string_buffer *VAR_0,
        const struct wined3d_shader_signature *VAR_1, BOOL VAR_2)
{
    unsigned int VAR_3, VAR_4, VAR_5, VAR_6;

    VAR_4 = VAR_6 = 0;
    for (VAR_3 = 0; VAR_3 < VAR_1->element_count; ++VAR_3)
    {
        const struct wined3d_shader_signature_element *VAR_7 = &VAR_1->elements[VAR_3];
        VAR_4 = FUNC_0(VAR_7->register_idx + 1, VAR_4);
        if (!VAR_7->sysval_semantic)
            ++VAR_6;
    }

    if (VAR_6)
        FUNC_1(VAR_0, "patch %s vec4 user_patch_constant[%u];\n",
                VAR_2 ? "in" : "out", VAR_6);
    if (VAR_2)
        FUNC_1(VAR_0, "vec4 vpc[%u];\n", VAR_4);

    FUNC_1(VAR_0, "void setup_patch_constant_%s()\n{\n", VAR_2 ? "input" : "output");
    for (VAR_3 = 0, VAR_5 = 0; VAR_3 < VAR_1->element_count; ++VAR_3)
    {
        const struct wined3d_shader_signature_element *VAR_8 = &VAR_1->elements[VAR_3];
        char VAR_9[6];

        FUNC_3(VAR_8->mask, VAR_9);

        if (VAR_2)
            FUNC_1(VAR_0, "vpc[%u]%s", VAR_8->register_idx, VAR_9);
        else
            FUNC_2(VAR_0, VAR_8, &VAR_5, VAR_9);

        FUNC_1(VAR_0, " = ");

        if (VAR_2)
            FUNC_2(VAR_0, VAR_8, &VAR_5, VAR_9);
        else
            FUNC_1(VAR_0, "hs_out[%u]%s", VAR_8->register_idx, VAR_9);

        FUNC_1(VAR_0, ";\n");
    }
    FUNC_1(VAR_0, "}\n");
}
