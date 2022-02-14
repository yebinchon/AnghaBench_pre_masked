
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct wined3d_string_buffer_list {int dummy; } ;
struct wined3d_string_buffer {int buffer; } ;
struct wined3d_shader_reg_maps {scalar_t__ vocp; } ;
struct wined3d_shader_phase {unsigned int temporary_count; int end; int start; } ;
struct TYPE_6__ {unsigned int fork_count; unsigned int join_count; int * join; int * fork; struct wined3d_shader_phase* control_point; } ;
struct wined3d_hull_shader {TYPE_3__ phases; int output_vertex_count; } ;
struct TYPE_4__ {struct wined3d_hull_shader hs; } ;
struct wined3d_shader {struct wined3d_shader_reg_maps reg_maps; int output_signature; TYPE_2__* limits; int patch_constant_signature; TYPE_1__ u; } ;
struct wined3d_gl_info {int dummy; } ;
struct wined3d_context {struct wined3d_gl_info* gl_info; } ;
struct shader_glsl_priv {struct wined3d_string_buffer shader_buffer; struct wined3d_string_buffer_list string_buffers; } ;
struct shader_glsl_ctx_priv {struct wined3d_string_buffer_list* string_buffers; } ;
typedef int priv_ctx ;
struct TYPE_5__ {int packed_output; int packed_input; } ;
typedef int GLuint ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct shader_glsl_ctx_priv*,int ,int) ;
 int FUNC_5 (struct wined3d_string_buffer*,char*,...) ;
 int FUNC_6 (struct wined3d_shader const*,struct wined3d_string_buffer*,struct wined3d_shader_reg_maps const*,struct shader_glsl_ctx_priv*,int ,int ) ;
 int FUNC_7 (struct wined3d_context const*,struct wined3d_string_buffer*,struct wined3d_shader const*,struct wined3d_shader_reg_maps const*,struct shader_glsl_ctx_priv*) ;
 int FUNC_8 (struct wined3d_string_buffer*,struct wined3d_gl_info const*) ;
 int FUNC_9 (struct wined3d_gl_info const*,int ,int ) ;
 int FUNC_10 (struct wined3d_string_buffer*,struct wined3d_gl_info const*) ;
 int FUNC_11 (struct wined3d_shader const*,struct wined3d_string_buffer*,struct wined3d_shader_reg_maps const*) ;
 int FUNC_12 (struct wined3d_string_buffer*,int *,int ) ;
 int FUNC_13 (struct wined3d_shader const*,struct wined3d_string_buffer*,struct wined3d_shader_reg_maps const*,struct shader_glsl_ctx_priv*,int *,char*,unsigned int) ;
 int FUNC_14 (struct wined3d_string_buffer*,int *,char*,unsigned int) ;
 int FUNC_15 (struct shader_glsl_priv*,int ,int *,struct wined3d_shader_reg_maps*,char*,int ) ;

__attribute__((used)) static GLuint FUNC_16(const struct wined3d_context *VAR_2,
        struct shader_glsl_priv *VAR_3, const struct wined3d_shader *VAR_4)
{
    struct wined3d_string_buffer_list *VAR_5 = &VAR_3->string_buffers;
    const struct wined3d_shader_reg_maps *VAR_6 = &VAR_4->reg_maps;
    struct wined3d_string_buffer *VAR_7 = &VAR_3->shader_buffer;
    const struct wined3d_gl_info *VAR_8 = VAR_2->gl_info;
    const struct wined3d_hull_shader *VAR_9 = &VAR_4->u.hs;
    const struct wined3d_shader_phase *VAR_10;
    struct shader_glsl_ctx_priv VAR_11;
    GLuint VAR_12;
    unsigned int VAR_13;

    FUNC_4(&VAR_11, 0, sizeof(VAR_11));
    VAR_11.string_buffers = VAR_5;

    FUNC_8(VAR_7, VAR_8);

    FUNC_10(VAR_7, VAR_8);
    FUNC_5(VAR_7, "#extension GL_ARB_tessellation_shader : enable\n");

    FUNC_7(VAR_2, VAR_7, VAR_4, VAR_6, &VAR_11);

    FUNC_5(VAR_7, "layout(vertices = %u) out;\n", VAR_9->output_vertex_count);

    FUNC_5(VAR_7, "in shader_in_out { vec4 reg[%u]; } shader_in[];\n", VAR_4->limits->packed_input);
    FUNC_5(VAR_7, "out shader_in_out { vec4 reg[%u]; } shader_out[];\n", VAR_4->limits->packed_output);

    FUNC_12(VAR_7, &VAR_4->patch_constant_signature, VAR_0);

    if (VAR_9->phases.control_point)
    {
        FUNC_5(VAR_7, "void setup_hs_output(in vec4 outputs[%u])\n{\n",
                VAR_4->limits->packed_output);
        FUNC_15(VAR_3, VAR_4->limits->packed_output, &VAR_4->output_signature,
                &VAR_4->reg_maps, "shader_out[gl_InvocationID]", VAR_0);
        FUNC_5(VAR_7, "}\n");
    }

    FUNC_5(VAR_7, "void hs_control_point_phase()\n{\n");
    if ((VAR_10 = VAR_9->phases.control_point))
    {
        for (VAR_13 = 0; VAR_13 < VAR_10->temporary_count; ++VAR_13)
            FUNC_5(VAR_7, "vec4 R%u;\n", VAR_13);
        if (FUNC_0(FUNC_6(VAR_4, VAR_7, VAR_6, &VAR_11, VAR_10->start, VAR_10->end)))
            return 0;
        FUNC_5(VAR_7, "setup_hs_output(hs_out);\n");
    }
    else
    {
        FUNC_11(VAR_4, VAR_7, VAR_6);
    }
    FUNC_5(VAR_7, "}\n");

    for (VAR_13 = 0; VAR_13 < VAR_9->phases.fork_count; ++VAR_13)
    {
        if (FUNC_0(FUNC_13(VAR_4, VAR_7, VAR_6, &VAR_11,
                &VAR_9->phases.fork[VAR_13], "fork", VAR_13)))
            return 0;
    }

    for (VAR_13 = 0; VAR_13 < VAR_9->phases.join_count; ++VAR_13)
    {
        if (FUNC_0(FUNC_13(VAR_4, VAR_7, VAR_6, &VAR_11,
                &VAR_9->phases.join[VAR_13], "join", VAR_13)))
            return 0;
    }

    FUNC_5(VAR_7, "void main()\n{\n");
    FUNC_5(VAR_7, "hs_control_point_phase();\n");
    if (VAR_6->vocp)
        FUNC_5(VAR_7, "barrier();\n");
    for (VAR_13 = 0; VAR_13 < VAR_9->phases.fork_count; ++VAR_13)
        FUNC_14(VAR_7, &VAR_9->phases.fork[VAR_13], "fork", VAR_13);
    for (VAR_13 = 0; VAR_13 < VAR_9->phases.join_count; ++VAR_13)
        FUNC_14(VAR_7, &VAR_9->phases.join[VAR_13], "join", VAR_13);
    FUNC_5(VAR_7, "setup_patch_constant_output();\n");
    FUNC_5(VAR_7, "}\n");

    VAR_12 = FUNC_1(FUNC_3(VAR_1));
    FUNC_2("Compiling shader object %u.\n", VAR_12);
    FUNC_9(VAR_8, VAR_12, VAR_7->buffer);

    return VAR_12;
}
