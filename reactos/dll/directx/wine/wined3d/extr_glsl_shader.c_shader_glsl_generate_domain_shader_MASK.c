
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct wined3d_string_buffer_list {int dummy; } ;
struct wined3d_string_buffer {int buffer; } ;
struct wined3d_shader_reg_maps {int dummy; } ;
struct TYPE_4__ {int tessellator_domain; } ;
struct TYPE_5__ {TYPE_1__ ds; } ;
struct wined3d_shader {int patch_constant_signature; TYPE_3__* limits; TYPE_2__ u; struct wined3d_shader_reg_maps reg_maps; } ;
struct wined3d_gl_info {int * supported; } ;
struct wined3d_context {struct wined3d_gl_info* gl_info; } ;
struct shader_glsl_priv {struct wined3d_string_buffer shader_buffer; struct wined3d_string_buffer_list string_buffers; } ;
struct shader_glsl_ctx_priv {struct wined3d_string_buffer_list* string_buffers; struct ds_compile_args const* cur_ds_args; } ;
struct ds_compile_args {int tessellator_output_primitive; int tessellator_partitioning; scalar_t__ next_shader_type; int interpolation_mode; int output_count; int render_offscreen; } ;
typedef int priv_ctx ;
struct TYPE_6__ {int packed_input; } ;
typedef int GLuint ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (char*,int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct shader_glsl_ctx_priv*,int ,int) ;
 int FUNC_5 (struct wined3d_string_buffer*,char*,...) ;
 int FUNC_6 (struct wined3d_shader const*,struct wined3d_string_buffer*,struct wined3d_shader_reg_maps const*,struct shader_glsl_ctx_priv*,int *,int *) ;
 int FUNC_7 (struct wined3d_context const*,struct wined3d_string_buffer*,struct wined3d_shader const*,struct wined3d_shader_reg_maps const*,struct shader_glsl_ctx_priv*) ;
 int FUNC_8 (struct wined3d_string_buffer*,struct wined3d_gl_info const*) ;
 int FUNC_9 (struct wined3d_gl_info const*,int ,int ) ;
 int FUNC_10 (struct wined3d_string_buffer*,struct wined3d_gl_info const*) ;
 int FUNC_11 (struct wined3d_string_buffer*,int *,int ) ;
 int FUNC_12 (struct shader_glsl_priv*,struct wined3d_shader const*,int ,struct wined3d_gl_info const*,int,int ) ;

__attribute__((used)) static GLuint FUNC_13(const struct wined3d_context *VAR_4,
        struct shader_glsl_priv *VAR_5, const struct wined3d_shader *VAR_6, const struct ds_compile_args *VAR_7)
{
    struct wined3d_string_buffer_list *VAR_8 = &VAR_5->string_buffers;
    const struct wined3d_shader_reg_maps *VAR_9 = &VAR_6->reg_maps;
    struct wined3d_string_buffer *VAR_10 = &VAR_5->shader_buffer;
    const struct wined3d_gl_info *VAR_11 = VAR_4->gl_info;
    struct shader_glsl_ctx_priv VAR_12;
    GLuint VAR_13;

    FUNC_4(&VAR_12, 0, sizeof(VAR_12));
    VAR_12.cur_ds_args = VAR_7;
    VAR_12.string_buffers = VAR_8;

    FUNC_8(VAR_10, VAR_11);

    FUNC_10(VAR_10, VAR_11);
    FUNC_5(VAR_10, "#extension GL_ARB_tessellation_shader : enable\n");

    FUNC_7(VAR_4, VAR_10, VAR_6, VAR_9, &VAR_12);

    FUNC_5(VAR_10, "layout(");
    switch (VAR_6->u.ds.tessellator_domain)
    {
        case 138:
            FUNC_5(VAR_10, "isolines");
            break;
        case 137:
            FUNC_5(VAR_10, "quads");
            break;
        case 136:
            FUNC_5(VAR_10, "triangles");
            break;
    }
    switch (VAR_7->tessellator_output_primitive)
    {
        case 132:
            if (VAR_7->render_offscreen)
                FUNC_5(VAR_10, ", ccw");
            else
                FUNC_5(VAR_10, ", cw");
            break;
        case 133:
            if (VAR_7->render_offscreen)
                FUNC_5(VAR_10, ", cw");
            else
                FUNC_5(VAR_10, ", ccw");
            break;
        case 134:
            FUNC_5(VAR_10, ", point_mode");
            break;
        case 135:
            break;
    }
    switch (VAR_7->tessellator_partitioning)
    {
        case 130:
            FUNC_5(VAR_10, ", fractional_odd_spacing");
            break;
        case 131:
            FUNC_5(VAR_10, ", fractional_even_spacing");
            break;
        case 129:
        case 128:
            FUNC_5(VAR_10, ", equal_spacing");
            break;
    }
    FUNC_5(VAR_10, ") in;\n");

    FUNC_5(VAR_10, "in shader_in_out { vec4 reg[%u]; } shader_in[];\n", VAR_6->limits->packed_input);

    if (VAR_7->next_shader_type == VAR_3 && !VAR_11->supported[VAR_0])
        FUNC_5(VAR_10, "uniform vec4 pos_fixup;\n");

    FUNC_12(VAR_5, VAR_6, VAR_7->output_count, VAR_11,
            VAR_7->next_shader_type == VAR_3, VAR_7->interpolation_mode);
    FUNC_11(VAR_10, &VAR_6->patch_constant_signature, VAR_2);

    FUNC_5(VAR_10, "void main()\n{\n");
    FUNC_5(VAR_10, "setup_patch_constant_input();\n");

    if (FUNC_0(FUNC_6(VAR_6, VAR_10, VAR_9, &VAR_12, ((void*)0), ((void*)0))))
        return 0;

    FUNC_5(VAR_10, "}\n");

    VAR_13 = FUNC_1(FUNC_3(VAR_1));
    FUNC_2("Compiling shader object %u.\n", VAR_13);
    FUNC_9(VAR_11, VAR_13, VAR_10->buffer);

    return VAR_13;
}
