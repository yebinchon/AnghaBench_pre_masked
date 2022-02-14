
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wined3d_string_buffer {int dummy; } ;
struct wined3d_stream_output_element {unsigned int component_idx; int component_count; int register_idx; scalar_t__ stream_idx; } ;
struct wined3d_stream_output_desc {unsigned int element_count; struct wined3d_stream_output_element* elements; } ;
struct wined3d_shader {TYPE_1__* limits; } ;
struct shader_glsl_priv {struct wined3d_string_buffer shader_buffer; } ;
struct TYPE_2__ {int packed_output; } ;
typedef unsigned int DWORD ;


 int FUNC_0 (char*,scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (struct wined3d_string_buffer*,char*,...) ;
 int FUNC_2 (unsigned int,char*) ;

__attribute__((used)) static void FUNC_3(struct shader_glsl_priv *VAR_1,
        const struct wined3d_shader *VAR_2, const struct wined3d_stream_output_desc *VAR_3)
{
    struct wined3d_string_buffer *VAR_4 = &VAR_1->shader_buffer;
    unsigned int VAR_5;

    FUNC_1(VAR_4, "out shader_in_out\n{\n");
    for (VAR_5 = 0; VAR_5 < VAR_3->element_count; ++VAR_5)
    {
        const struct wined3d_stream_output_element *VAR_6 = &VAR_3->elements[VAR_5];

        if (VAR_6->stream_idx)
        {
            FUNC_0("Unhandled stream %u.\n", VAR_6->stream_idx);
            continue;
        }
        if (VAR_6->register_idx == VAR_0)
            continue;

        if (VAR_6->component_idx || VAR_6->component_count != 4)
        {
            if (VAR_6->component_count == 1)
                FUNC_1(VAR_4, "float");
            else
                FUNC_1(VAR_4, "vec%u", VAR_6->component_count);
            FUNC_1(VAR_4, " reg%u_%u_%u;\n",
                    VAR_6->register_idx, VAR_6->component_idx, VAR_6->component_idx + VAR_6->component_count - 1);
        }
        else
        {
            FUNC_1(VAR_4, "vec4 reg%u;\n", VAR_6->register_idx);
        }
    }
    FUNC_1(VAR_4, "} shader_out;\n");

    FUNC_1(VAR_4, "void setup_gs_output(in vec4 outputs[%u])\n{\n",
            VAR_2->limits->packed_output);
    for (VAR_5 = 0; VAR_5 < VAR_3->element_count; ++VAR_5)
    {
        const struct wined3d_stream_output_element *VAR_7 = &VAR_3->elements[VAR_5];

        if (VAR_7->stream_idx)
        {
            FUNC_0("Unhandled stream %u.\n", VAR_7->stream_idx);
            continue;
        }
        if (VAR_7->register_idx == VAR_0)
            continue;

        if (VAR_7->component_idx || VAR_7->component_count != 4)
        {
            DWORD VAR_8;
            char VAR_9[6];

            VAR_8 = ((1u << VAR_7->component_count) - 1) << VAR_7->component_idx;
            FUNC_2(VAR_8, VAR_9);
            FUNC_1(VAR_4, "shader_out.reg%u_%u_%u = outputs[%u]%s;\n",
                    VAR_7->register_idx, VAR_7->component_idx, VAR_7->component_idx + VAR_7->component_count - 1,
                    VAR_7->register_idx, VAR_9);
        }
        else
        {
            FUNC_1(VAR_4, "shader_out.reg%u = outputs[%u];\n",
                    VAR_7->register_idx, VAR_7->register_idx);
        }
    }
    FUNC_1(VAR_4, "}\n");
}
