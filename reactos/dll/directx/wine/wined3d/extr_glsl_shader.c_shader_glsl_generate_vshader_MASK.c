
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct wined3d_string_buffer_list {int dummy; } ;
struct wined3d_string_buffer {int buffer; } ;
struct wined3d_shader_version {int major; } ;
struct wined3d_shader_signature_element {int register_idx; } ;
struct wined3d_shader_reg_maps {struct wined3d_shader_version shader_version; int input_registers; scalar_t__ input_rel_addressing; } ;
struct TYPE_6__ {unsigned int element_count; struct wined3d_shader_signature_element* elements; } ;
struct wined3d_shader {TYPE_3__ input_signature; TYPE_2__* limits; struct wined3d_shader_reg_maps reg_maps; } ;
struct TYPE_4__ {int user_clip_distances; } ;
struct wined3d_gl_info {scalar_t__* supported; TYPE_1__ limits; } ;
struct wined3d_context {struct wined3d_gl_info* gl_info; } ;
struct vs_compile_args {scalar_t__ next_shader_type; int interpolation_mode; int next_shader_input_count; int flatshading; scalar_t__ clip_enabled; int per_vertex_point_size; scalar_t__ point_size; } ;
struct shader_glsl_priv {struct wined3d_string_buffer shader_buffer; struct wined3d_string_buffer_list string_buffers; } ;
struct shader_glsl_ctx_priv {struct wined3d_string_buffer_list* string_buffers; struct vs_compile_args const* cur_vs_args; } ;
typedef int priv_ctx ;
struct TYPE_5__ {int packed_output; } ;
typedef int GLuint ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (char*,int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (struct wined3d_gl_info const*,struct wined3d_string_buffer*,int ,char*,...) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct shader_glsl_ctx_priv*,int ,int) ;
 int FUNC_6 (struct wined3d_gl_info const*) ;
 int FUNC_7 (struct wined3d_string_buffer*,char*,...) ;
 int FUNC_8 (struct wined3d_shader const*,struct wined3d_string_buffer*,struct wined3d_shader_reg_maps const*,struct shader_glsl_ctx_priv*,int *,int *) ;
 int FUNC_9 (struct wined3d_context const*,struct wined3d_string_buffer*,struct wined3d_shader const*,struct wined3d_shader_reg_maps const*,struct shader_glsl_ctx_priv*) ;
 int FUNC_10 (struct wined3d_string_buffer*,struct wined3d_gl_info const*) ;
 int FUNC_11 (struct wined3d_gl_info const*,int ,int ) ;
 int FUNC_12 (struct wined3d_string_buffer*,struct wined3d_gl_info const*,struct wined3d_shader_signature_element*) ;
 int FUNC_13 (struct wined3d_string_buffer*,struct wined3d_gl_info const*) ;
 int FUNC_14 (struct shader_glsl_priv*,struct wined3d_shader const*,int ,struct wined3d_gl_info const*,int,int ) ;
 int FUNC_15 (struct wined3d_gl_info const*,struct wined3d_string_buffer*,struct wined3d_shader const*,struct vs_compile_args const*) ;
 scalar_t__ FUNC_16 (struct wined3d_gl_info const*) ;
 unsigned int FUNC_17 (int ) ;

__attribute__((used)) static GLuint FUNC_18(const struct wined3d_context *VAR_6,
        struct shader_glsl_priv *VAR_7, const struct wined3d_shader *VAR_8, const struct vs_compile_args *VAR_9)
{
    struct wined3d_string_buffer_list *VAR_10 = &VAR_7->string_buffers;
    const struct wined3d_shader_reg_maps *VAR_11 = &VAR_8->reg_maps;
    const struct wined3d_shader_version *VAR_12 = &VAR_11->shader_version;
    struct wined3d_string_buffer *VAR_13 = &VAR_7->shader_buffer;
    const struct wined3d_gl_info *VAR_14 = VAR_6->gl_info;
    struct shader_glsl_ctx_priv VAR_15;
    GLuint VAR_16;
    unsigned int VAR_17;

    FUNC_5(&VAR_15, 0, sizeof(VAR_15));
    VAR_15.cur_vs_args = VAR_9;
    VAR_15.string_buffers = VAR_10;

    FUNC_10(VAR_13, VAR_14);

    FUNC_13(VAR_13, VAR_14);
    if (VAR_14->supported[VAR_1])
        FUNC_7(VAR_13, "#extension GL_ARB_draw_instanced : enable\n");
    if (FUNC_16(VAR_14))
        FUNC_7(VAR_13, "#extension GL_ARB_explicit_attrib_location : enable\n");


    FUNC_9(VAR_6, VAR_13, VAR_8, VAR_11, &VAR_15);

    for (VAR_17 = 0; VAR_17 < VAR_8->input_signature.element_count; ++VAR_17)
        FUNC_12(VAR_13, VAR_14, &VAR_8->input_signature.elements[VAR_17]);

    if (VAR_9->point_size && !VAR_9->per_vertex_point_size)
    {
        FUNC_7(VAR_13, "uniform struct\n{\n");
        FUNC_7(VAR_13, "    float size;\n");
        FUNC_7(VAR_13, "    float size_min;\n");
        FUNC_7(VAR_13, "    float size_max;\n");
        FUNC_7(VAR_13, "} ffp_point;\n");
    }

    if (!FUNC_6(VAR_14))
    {
        if (VAR_9->clip_enabled)
            FUNC_7(VAR_13, "uniform vec4 clip_planes[%u];\n", VAR_14->limits.user_clip_distances);

        if (VAR_12->major < 3)
        {
            FUNC_3(VAR_14, VAR_13, VAR_9->flatshading, "vec4 ffp_varying_diffuse;\n");
            FUNC_3(VAR_14, VAR_13, VAR_9->flatshading, "vec4 ffp_varying_specular;\n");
            FUNC_3(VAR_14, VAR_13, VAR_2, "vec4 ffp_varying_texcoord[%u];\n", VAR_4);
            FUNC_3(VAR_14, VAR_13, VAR_2, "float ffp_varying_fogcoord;\n");
        }
    }

    if (VAR_12->major < 4)
        FUNC_7(VAR_13, "void setup_vs_output(in vec4[%u]);\n", VAR_8->limits->packed_output);

    if (VAR_9->next_shader_type == VAR_5 && !VAR_14->supported[VAR_0])
        FUNC_7(VAR_13, "uniform vec4 pos_fixup;\n");

    if (VAR_11->shader_version.major >= 4)
        FUNC_14(VAR_7, VAR_8, VAR_9->next_shader_input_count,
                VAR_14, VAR_9->next_shader_type == VAR_5, VAR_9->interpolation_mode);

    FUNC_7(VAR_13, "void main()\n{\n");

    if (VAR_11->input_rel_addressing)
    {
        unsigned int VAR_18 = FUNC_17(VAR_11->input_registers);
        FUNC_7(VAR_13, "vec4 vs_in[%u];\n", VAR_18 + 1);
        for (VAR_17 = 0; VAR_17 < VAR_8->input_signature.element_count; ++VAR_17)
        {
            const struct wined3d_shader_signature_element *VAR_19 = &VAR_8->input_signature.elements[VAR_17];
            FUNC_7(VAR_13, "vs_in[%u] = vs_in%u;\n", VAR_19->register_idx, VAR_19->register_idx);
        }
    }

    if (FUNC_0(FUNC_8(VAR_8, VAR_13, VAR_11, &VAR_15, ((void*)0), ((void*)0))))
        return 0;


    if (VAR_11->shader_version.major < 4)
        FUNC_15(VAR_14, VAR_13, VAR_8, VAR_9);

    FUNC_7(VAR_13, "}\n");

    VAR_16 = FUNC_1(FUNC_4(VAR_3));
    FUNC_2("Compiling shader object %u.\n", VAR_16);
    FUNC_11(VAR_14, VAR_16, VAR_13->buffer);

    return VAR_16;
}
