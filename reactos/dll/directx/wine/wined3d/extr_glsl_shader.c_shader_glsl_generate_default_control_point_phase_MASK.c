
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_string_buffer {int dummy; } ;
struct wined3d_shader_signature_element {int register_idx; int mask; } ;
struct wined3d_shader_signature {unsigned int element_count; struct wined3d_shader_signature_element* elements; } ;
struct wined3d_shader_reg_maps {int dummy; } ;
struct wined3d_shader {struct wined3d_shader_signature output_signature; } ;


 int FUNC_0 (struct wined3d_string_buffer*,char*,int ,char*,int ,char*) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static void FUNC_2(const struct wined3d_shader *VAR_0,
        struct wined3d_string_buffer *VAR_1, const struct wined3d_shader_reg_maps *VAR_2)
{
    const struct wined3d_shader_signature *VAR_3 = &VAR_0->output_signature;
    char VAR_4[6];
    unsigned int VAR_5;

    for (VAR_5 = 0; VAR_5 < VAR_3->element_count; ++VAR_5)
    {
        const struct wined3d_shader_signature_element *VAR_6 = &VAR_3->elements[VAR_5];

        FUNC_1(VAR_6->mask, VAR_4);
        FUNC_0(VAR_1, "shader_out[gl_InvocationID].reg[%u]%s = shader_in[gl_InvocationID].reg[%u]%s;\n",
                VAR_6->register_idx, VAR_4, VAR_6->register_idx, VAR_4);
    }
}
