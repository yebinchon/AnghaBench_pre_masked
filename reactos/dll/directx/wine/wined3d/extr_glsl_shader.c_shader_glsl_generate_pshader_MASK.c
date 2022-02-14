
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct wined3d_string_buffer_list {int dummy; } ;
struct wined3d_string_buffer {int buffer; } ;
struct wined3d_shader_version {int major; int type; } ;
struct wined3d_shader_reg_maps {int bumpmat; unsigned int luminanceparams; int texcoord; struct wined3d_shader_version shader_version; scalar_t__ vpos; scalar_t__ usesdsy; scalar_t__ input_registers; TYPE_1__* resource_info; } ;
struct TYPE_11__ {scalar_t__ depth_output; scalar_t__ force_early_depth_stencil; int interpolation_mode; } ;
struct TYPE_12__ {TYPE_5__ ps; } ;
struct wined3d_shader {int input_signature; TYPE_6__ u; TYPE_2__* limits; struct wined3d_shader_reg_maps reg_maps; } ;
struct TYPE_9__ {int dual_buffers; unsigned int buffers; scalar_t__ glsl_ps_float_constants; } ;
struct wined3d_gl_info {scalar_t__* supported; TYPE_3__ limits; } ;
struct wined3d_context {TYPE_4__* d3d_info; struct wined3d_gl_info* gl_info; } ;
struct shader_glsl_ctx_priv {struct ps_np2fixup_info* cur_np2fixup_info; struct wined3d_string_buffer_list* string_buffers; struct ps_compile_args const* cur_ps_args; } ;
struct ps_np2fixup_info {unsigned int num_consts; unsigned int active; int * idx; } ;
struct ps_compile_args {int np2_fixup; scalar_t__ vp_mode; scalar_t__ alpha_test_func; unsigned int texcoords_initialized; scalar_t__ pointsprite; scalar_t__ dual_source_blend; scalar_t__ render_offscreen; scalar_t__ srgb_correction; int flatshading; } ;
typedef int priv_ctx ;
typedef int WORD ;
struct TYPE_10__ {int wined3d_creation_flags; } ;
struct TYPE_8__ {unsigned int sampler; scalar_t__ constant_float; int packed_input; } ;
struct TYPE_7__ {scalar_t__ type; } ;
typedef int GLuint ;
typedef int DWORD ;
typedef scalar_t__ BOOL ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_6 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (char*,int ) ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_4 (struct wined3d_gl_info const*,struct wined3d_string_buffer*,int ,char*,...) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (struct wined3d_shader const*,int) ;
 int FUNC_7 (struct shader_glsl_ctx_priv*,int ,int) ;
 unsigned int FUNC_8 (int ,int ) ;
 scalar_t__ FUNC_9 (struct wined3d_gl_info const*) ;
 int FUNC_10 (struct wined3d_string_buffer*,char*,...) ;
 int FUNC_11 (struct wined3d_shader const*,struct wined3d_string_buffer*,struct wined3d_shader_reg_maps const*,struct shader_glsl_ctx_priv*,int *,int *) ;
 int FUNC_12 (struct wined3d_context const*,struct wined3d_string_buffer*,struct wined3d_shader const*,struct wined3d_shader_reg_maps const*,struct shader_glsl_ctx_priv*) ;
 int FUNC_13 (struct wined3d_string_buffer*,struct wined3d_gl_info const*) ;
 int FUNC_14 (struct wined3d_string_buffer*,int ) ;
 int FUNC_15 (struct wined3d_gl_info const*,int ,int ) ;
 int FUNC_16 (struct wined3d_gl_info const*,struct wined3d_string_buffer*,unsigned int,int ,int) ;
 int FUNC_17 (struct wined3d_string_buffer*,struct wined3d_gl_info const*) ;
 int FUNC_18 (struct wined3d_gl_info const*,struct wined3d_string_buffer*,struct wined3d_shader const*,struct ps_compile_args const*) ;
 char* FUNC_19 (int ) ;
 int FUNC_20 (struct wined3d_shader const*,struct wined3d_string_buffer*,int *,struct wined3d_shader_reg_maps const*,struct ps_compile_args const*,struct wined3d_gl_info const*,int) ;
 scalar_t__ FUNC_21 (struct wined3d_gl_info const*) ;
 int FUNC_22 (int,struct wined3d_gl_info const*) ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;

__attribute__((used)) static GLuint FUNC_23(const struct wined3d_context *VAR_17,
        struct wined3d_string_buffer *VAR_18, struct wined3d_string_buffer_list *VAR_19,
        const struct wined3d_shader *VAR_20,
        const struct ps_compile_args *VAR_21, struct ps_np2fixup_info *VAR_22)
{
    const struct wined3d_shader_reg_maps *VAR_23 = &VAR_20->reg_maps;
    const struct wined3d_shader_version *VAR_24 = &VAR_23->shader_version;
    const char *VAR_25 = FUNC_19(VAR_24->type);
    const struct wined3d_gl_info *VAR_26 = VAR_17->gl_info;
    const BOOL VAR_27 = FUNC_9(VAR_26);
    unsigned int VAR_28, VAR_29 = 0;
    struct shader_glsl_ctx_priv VAR_30;
    GLuint VAR_31;
    DWORD VAR_32;

    FUNC_7(&VAR_30, 0, sizeof(VAR_30));
    VAR_30.cur_ps_args = VAR_21;
    VAR_30.cur_np2fixup_info = VAR_22;
    VAR_30.string_buffers = VAR_19;

    FUNC_13(VAR_18, VAR_26);

    FUNC_17(VAR_18, VAR_26);
    if (VAR_26->supported[VAR_0])
        FUNC_10(VAR_18, "#extension GL_ARB_conservative_depth : enable\n");
    if (VAR_26->supported[VAR_1])
        FUNC_10(VAR_18, "#extension GL_ARB_derivative_control : enable\n");
    if (FUNC_21(VAR_26))
        FUNC_10(VAR_18, "#extension GL_ARB_explicit_attrib_location : enable\n");
    if (VAR_26->supported[VAR_2])
        FUNC_10(VAR_18, "#extension GL_ARB_fragment_coord_conventions : enable\n");
    if (VAR_26->supported[VAR_3])
        FUNC_10(VAR_18, "#extension GL_ARB_fragment_layer_viewport : enable\n");
    if (VAR_26->supported[VAR_4])
        FUNC_10(VAR_18, "#extension GL_ARB_shader_texture_lod : enable\n");


    if (VAR_26->supported[VAR_5])
        FUNC_10(VAR_18, "#extension GL_ARB_texture_rectangle : enable\n");


    FUNC_12(VAR_17, VAR_18, VAR_20, VAR_23, &VAR_30);

    if (VAR_26->supported[VAR_0])
    {
        if (VAR_20->u.ps.depth_output == VAR_9)
            FUNC_10(VAR_18, "layout (depth_greater) out float gl_FragDepth;\n");
        else if (VAR_20->u.ps.depth_output == VAR_10)
            FUNC_10(VAR_18, "layout (depth_less) out float gl_FragDepth;\n");
    }






    if (VAR_21->np2_fixup)
    {
        struct ps_np2fixup_info *VAR_33 = VAR_30.cur_np2fixup_info;
        unsigned int VAR_34 = 0;






        for (VAR_28 = 0; VAR_28 < VAR_20->limits->sampler; ++VAR_28)
        {
            if (!VAR_23->resource_info[VAR_28].type || !(VAR_21->np2_fixup & (1u << VAR_28)))
                continue;

            if (VAR_23->resource_info[VAR_28].type != VAR_13)
            {
                FUNC_1("Non-2D texture is flagged for NP2 texcoord fixup.\n");
                continue;
            }

            VAR_33->idx[VAR_28] = VAR_34++;
        }

        VAR_33->num_consts = (VAR_34 + 1) >> 1;
        VAR_33->active = VAR_21->np2_fixup;
        FUNC_10(VAR_18, "uniform vec4 %s_samplerNP2Fixup[%u];\n", VAR_25, VAR_33->num_consts);
    }

    if (VAR_24->major < 3 || VAR_21->vp_mode != VAR_14)
    {
        FUNC_10(VAR_18, "uniform struct\n{\n");
        FUNC_10(VAR_18, "    vec4 color;\n");
        FUNC_10(VAR_18, "    float density;\n");
        FUNC_10(VAR_18, "    float end;\n");
        FUNC_10(VAR_18, "    float scale;\n");
        FUNC_10(VAR_18, "} ffp_fog;\n");

        if (FUNC_9(VAR_26))
        {
            if (FUNC_6(VAR_20, 0))
                FUNC_10(VAR_18, "vec4 ffp_varying_diffuse;\n");
            if (FUNC_6(VAR_20, 1))
                FUNC_10(VAR_18, "vec4 ffp_varying_specular;\n");
            FUNC_10(VAR_18, "vec4 ffp_texcoord[%u];\n", VAR_8);
            FUNC_10(VAR_18, "float ffp_varying_fogcoord;\n");
        }
        else
        {
            if (FUNC_6(VAR_20, 0))
                FUNC_4(VAR_26, VAR_18, VAR_21->flatshading, "vec4 ffp_varying_diffuse;\n");
            if (FUNC_6(VAR_20, 1))
                FUNC_4(VAR_26, VAR_18, VAR_21->flatshading, "vec4 ffp_varying_specular;\n");
            FUNC_4(VAR_26, VAR_18, VAR_6, "vec4 ffp_varying_texcoord[%u];\n", VAR_8);
            FUNC_10(VAR_18, "vec4 ffp_texcoord[%u];\n", VAR_8);
            FUNC_4(VAR_26, VAR_18, VAR_6, "float ffp_varying_fogcoord;\n");
        }
    }

    if (VAR_24->major >= 3)
    {
        unsigned int VAR_35 = FUNC_8(FUNC_22(VAR_24->major, VAR_26), VAR_20->limits->packed_input);

        if (VAR_21->vp_mode == VAR_14 && VAR_23->input_registers)
            FUNC_16(VAR_26, VAR_18, VAR_35,
                    VAR_20->u.ps.interpolation_mode, VAR_24->major >= 4);
        FUNC_10(VAR_18, "vec4 %s_in[%u];\n", VAR_25, VAR_35);
    }

    for (VAR_28 = 0, VAR_32 = VAR_23->bumpmat; VAR_32; VAR_32 >>= 1, ++VAR_28)
    {
        if (!(VAR_32 & 1))
            continue;

        FUNC_10(VAR_18, "uniform mat2 bumpenv_mat%u;\n", VAR_28);

        if (VAR_23->luminanceparams & (1u << VAR_28))
        {
            FUNC_10(VAR_18, "uniform float bumpenv_lum_scale%u;\n", VAR_28);
            FUNC_10(VAR_18, "uniform float bumpenv_lum_offset%u;\n", VAR_28);
            VAR_29++;
        }

        VAR_29++;
    }

    if (VAR_21->srgb_correction)
    {
        FUNC_10(VAR_18, "const vec4 srgb_const0 = ");
        FUNC_14(VAR_18, VAR_15);
        FUNC_10(VAR_18, ";\n");
        FUNC_10(VAR_18, "const vec4 srgb_const1 = ");
        FUNC_14(VAR_18, VAR_16);
        FUNC_10(VAR_18, ";\n");
    }
    if (VAR_23->vpos || VAR_23->usesdsy)
    {
        if (VAR_23->usesdsy || !VAR_26->supported[VAR_2])
        {
            ++VAR_29;
            FUNC_10(VAR_18, "uniform vec4 ycorrection;\n");
        }
        if (VAR_23->vpos)
        {
            if (VAR_26->supported[VAR_2])
            {
                if (VAR_17->d3d_info->wined3d_creation_flags & VAR_12)
                    FUNC_10(VAR_18, "layout(%spixel_center_integer) in vec4 gl_FragCoord;\n",
                            VAR_21->render_offscreen ? "" : "origin_upper_left, ");
                else if (!VAR_21->render_offscreen)
                    FUNC_10(VAR_18, "layout(origin_upper_left) in vec4 gl_FragCoord;\n");
            }
            FUNC_10(VAR_18, "vec4 vpos;\n");
        }
    }

    if (VAR_21->alpha_test_func + 1 != VAR_11)
        FUNC_10(VAR_18, "uniform float alpha_test_ref;\n");

    if (!FUNC_9(VAR_26))
    {
        if (VAR_21->dual_source_blend)
        {
            for (VAR_28 = 0; VAR_28 < VAR_26->limits.dual_buffers * 2; VAR_28++)
            {
                if (FUNC_21(VAR_26))
                    FUNC_10(VAR_18, "layout(location = %u, index = %u) ", VAR_28 / 2, VAR_28 % 2);
                FUNC_10(VAR_18, "out vec4 ps_out%u;\n", VAR_28);
            }
        }
        else
        {
            for (VAR_28 = 0; VAR_28 < VAR_26->limits.buffers; VAR_28++)
            {
                if (FUNC_21(VAR_26))
                    FUNC_10(VAR_18, "layout(location = %u) ", VAR_28);
                FUNC_10(VAR_18, "out vec4 ps_out%u;\n", VAR_28);
            }
        }
    }

    if (VAR_20->limits->constant_float + VAR_29 >= VAR_26->limits.glsl_ps_float_constants)
        FUNC_1("Insufficient uniforms to run this shader.\n");

    if (VAR_20->u.ps.force_early_depth_stencil)
        FUNC_10(VAR_18, "layout(early_fragment_tests) in;\n");

    FUNC_10(VAR_18, "void main()\n{\n");
    if (VAR_23->vpos)
    {
        if (VAR_26->supported[VAR_2])
            FUNC_10(VAR_18, "vpos = gl_FragCoord;\n");
        else if (VAR_17->d3d_info->wined3d_creation_flags & VAR_12)
            FUNC_10(VAR_18,
                    "vpos = floor(vec4(0, ycorrection[0], 0, 0) + gl_FragCoord * vec4(1, ycorrection[1], 1, 1));\n");
        else
            FUNC_10(VAR_18,
                    "vpos = vec4(0, ycorrection[0], 0, 0) + gl_FragCoord * vec4(1, ycorrection[1], 1, 1);\n");
    }

    if (VAR_23->shader_version.major < 3 || VAR_21->vp_mode != VAR_14)
    {
        unsigned int VAR_36;
        WORD VAR_37 = VAR_23->texcoord;

        if (VAR_27)
        {
            if (FUNC_6(VAR_20, 0))
                FUNC_10(VAR_18, "ffp_varying_diffuse = gl_Color;\n");
            if (FUNC_6(VAR_20, 1))
                FUNC_10(VAR_18, "ffp_varying_specular = gl_SecondaryColor;\n");
        }

        for (VAR_36 = 0; VAR_37; VAR_37 >>= 1, ++VAR_36)
        {
            if (VAR_37 & 1)
            {
                if (VAR_21->pointsprite)
                    FUNC_10(VAR_18, "ffp_texcoord[%u] = vec4(gl_PointCoord.xy, 0.0, 0.0);\n", VAR_36);
                else if (VAR_21->texcoords_initialized & (1u << VAR_36))
                    FUNC_10(VAR_18, "ffp_texcoord[%u] = %s[%u];\n", VAR_36,
                            VAR_27 ? "gl_TexCoord" : "ffp_varying_texcoord", VAR_36);
                else
                    FUNC_10(VAR_18, "ffp_texcoord[%u] = vec4(0.0);\n", VAR_36);
                FUNC_10(VAR_18, "vec4 T%u = ffp_texcoord[%u];\n", VAR_36, VAR_36);
            }
        }

        if (VAR_27)
            FUNC_10(VAR_18, "ffp_varying_fogcoord = gl_FogFragCoord;\n");
    }


    if (VAR_23->shader_version.major >= 3)
        FUNC_20(VAR_20, VAR_18, &VAR_20->input_signature, VAR_23, VAR_21, VAR_26,
                VAR_23->shader_version.major >= 4);


    if (FUNC_0(FUNC_11(VAR_20, VAR_18, VAR_23, &VAR_30, ((void*)0), ((void*)0))))
        return 0;


    if (VAR_23->shader_version.major < 4)
        FUNC_18(VAR_26, VAR_18, VAR_20, VAR_21);

    FUNC_10(VAR_18, "}\n");

    VAR_31 = FUNC_2(FUNC_5(VAR_7));
    FUNC_3("Compiling shader object %u.\n", VAR_31);
    FUNC_15(VAR_26, VAR_31, VAR_18->buffer);

    return VAR_31;
}
