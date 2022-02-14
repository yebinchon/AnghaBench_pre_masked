
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_string_buffer {int dummy; } ;
struct wined3d_shader_signature_element {unsigned int register_idx; int mask; scalar_t__ stream_idx; } ;
struct wined3d_shader_signature {unsigned int element_count; struct wined3d_shader_signature_element* elements; } ;
struct wined3d_shader_reg_maps {unsigned int output_registers; } ;
struct shader_glsl_priv {struct wined3d_string_buffer shader_buffer; } ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (struct wined3d_string_buffer*,char*,char const*,unsigned int,char*,unsigned int,char*) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static void FUNC_2(struct shader_glsl_priv *VAR_0,
        unsigned int VAR_1, const struct wined3d_shader_signature *VAR_2,
        const struct wined3d_shader_reg_maps *VAR_3, const char *VAR_4,
        BOOL VAR_5)
{
    struct wined3d_string_buffer *VAR_6 = &VAR_0->shader_buffer;
    char VAR_7[6];
    unsigned int VAR_8;

    for (VAR_8 = 0; VAR_8 < VAR_2->element_count; ++VAR_8)
    {
        const struct wined3d_shader_signature_element *VAR_9 = &VAR_2->elements[VAR_8];

        if (!(VAR_3->output_registers & (1u << VAR_9->register_idx)))
            continue;

        if (VAR_9->stream_idx)
            continue;

        if (VAR_9->register_idx >= VAR_1)
            continue;

        FUNC_1(VAR_9->mask, VAR_7);

        FUNC_0(VAR_6,
                VAR_5 ? "%s.reg%u%s = outputs[%u]%s;\n" : "%s.reg[%u]%s = outputs[%u]%s;\n",
                VAR_4, VAR_9->register_idx, VAR_7, VAR_9->register_idx, VAR_7);
    }
}
