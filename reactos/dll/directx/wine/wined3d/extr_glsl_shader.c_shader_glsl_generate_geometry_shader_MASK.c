
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
struct TYPE_5__ {int instance_count; int so_desc; int vertices_out; int output_type; int input_type; } ;
struct TYPE_6__ {TYPE_2__ gs; } ;
struct wined3d_shader {TYPE_3__ u; TYPE_1__* limits; struct wined3d_shader_reg_maps reg_maps; } ;
struct wined3d_gl_info {int * supported; } ;
struct wined3d_context {struct wined3d_gl_info* gl_info; } ;
struct shader_glsl_priv {struct wined3d_string_buffer shader_buffer; struct wined3d_string_buffer_list string_buffers; } ;
struct shader_glsl_ctx_priv {struct wined3d_string_buffer_list* string_buffers; } ;
struct gs_compile_args {int interpolation_mode; int output_count; } ;
typedef int priv_ctx ;
struct TYPE_4__ {int packed_input; } ;
typedef int GLuint ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (char*,int ) ;
 int VAR_2 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (struct wined3d_shader const*) ;
 int FUNC_6 (struct shader_glsl_ctx_priv*,int ,int) ;
 int FUNC_7 (struct wined3d_string_buffer*,char*,...) ;
 int FUNC_8 (struct wined3d_shader const*,struct wined3d_string_buffer*,struct wined3d_shader_reg_maps const*,struct shader_glsl_ctx_priv*,int *,int *) ;
 int FUNC_9 (struct wined3d_context const*,struct wined3d_string_buffer*,struct wined3d_shader const*,struct wined3d_shader_reg_maps const*,struct shader_glsl_ctx_priv*) ;
 int FUNC_10 (struct wined3d_string_buffer*,struct wined3d_gl_info const*) ;
 int FUNC_11 (struct wined3d_gl_info const*,int ,int ) ;
 int FUNC_12 (struct wined3d_string_buffer*,struct wined3d_gl_info const*) ;
 int FUNC_13 (struct shader_glsl_priv*,struct wined3d_shader const*,int ,struct wined3d_gl_info const*,int ,int ) ;
 int FUNC_14 (struct shader_glsl_priv*,struct wined3d_shader const*,int *) ;

__attribute__((used)) static GLuint FUNC_15(const struct wined3d_context *VAR_3,
        struct shader_glsl_priv *VAR_4, const struct wined3d_shader *VAR_5, const struct gs_compile_args *VAR_6)
{
    struct wined3d_string_buffer_list *VAR_7 = &VAR_4->string_buffers;
    const struct wined3d_shader_reg_maps *VAR_8 = &VAR_5->reg_maps;
    struct wined3d_string_buffer *VAR_9 = &VAR_4->shader_buffer;
    const struct wined3d_gl_info *VAR_10 = VAR_3->gl_info;
    struct shader_glsl_ctx_priv VAR_11;
    GLuint VAR_12;

    FUNC_6(&VAR_11, 0, sizeof(VAR_11));
    VAR_11.string_buffers = VAR_7;

    FUNC_10(VAR_9, VAR_10);

    FUNC_12(VAR_9, VAR_10);

    FUNC_9(VAR_3, VAR_9, VAR_5, VAR_8, &VAR_11);

    FUNC_7(VAR_9, "layout(%s", FUNC_4(VAR_5->u.gs.input_type));
    if (VAR_5->u.gs.instance_count > 1)
        FUNC_7(VAR_9, ", invocations = %u", VAR_5->u.gs.instance_count);
    FUNC_7(VAR_9, ") in;\n");
    FUNC_7(VAR_9, "layout(%s, max_vertices = %u) out;\n",
            FUNC_4(VAR_5->u.gs.output_type), VAR_5->u.gs.vertices_out);
    FUNC_7(VAR_9, "in shader_in_out { vec4 reg[%u]; } shader_in[];\n", VAR_5->limits->packed_input);

    if (!VAR_10->supported[VAR_0])
        FUNC_7(VAR_9, "uniform vec4 pos_fixup;\n");

    if (FUNC_5(VAR_5))
    {
        FUNC_14(VAR_4, VAR_5, &VAR_5->u.gs.so_desc);
    }
    else
    {
        FUNC_13(VAR_4, VAR_5, VAR_6->output_count,
                VAR_10, VAR_2, VAR_6->interpolation_mode);
    }
    FUNC_7(VAR_9, "void main()\n{\n");
    if (FUNC_0(FUNC_8(VAR_5, VAR_9, VAR_8, &VAR_11, ((void*)0), ((void*)0))))
        return 0;
    FUNC_7(VAR_9, "}\n");

    VAR_12 = FUNC_1(FUNC_3(VAR_1));
    FUNC_2("Compiling shader object %u.\n", VAR_12);
    FUNC_11(VAR_10, VAR_12, VAR_9->buffer);

    return VAR_12;
}
