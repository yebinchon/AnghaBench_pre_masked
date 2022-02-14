
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct wined3d_string_buffer {int dummy; } ;
struct TYPE_7__ {int major; } ;
struct TYPE_10__ {TYPE_2__ shader_version; } ;
struct wined3d_shader {struct arb_pshader_private* backend_data; TYPE_5__ reg_maps; int input_signature; struct wined3d_device* device; } ;
struct wined3d_gl_info {int dummy; } ;
struct wined3d_device {struct shader_arb_priv* shader_priv; TYPE_1__* adapter; } ;
struct TYPE_8__ {scalar_t__ ffp_blend_stages; } ;
struct wined3d_d3d_info {TYPE_3__ limits; int vs_clipping; } ;
struct shader_arb_priv {int dummy; } ;
struct arb_pshader_private {int clamp_consts; unsigned int input_signature_idx; unsigned int clipplane_emulation; size_t num_gl_shaders; size_t shader_array_size; struct arb_ps_compiled_shader* gl_shaders; } ;
struct TYPE_9__ {int tex_types; } ;
struct arb_ps_compile_args {TYPE_4__ super; } ;
struct arb_ps_compiled_shader {int prgId; struct arb_ps_compile_args args; } ;
typedef size_t UINT ;
struct TYPE_6__ {struct wined3d_d3d_info d3d_info; struct wined3d_gl_info gl_info; } ;
typedef int GLuint ;
typedef int DWORD ;


 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 int VAR_0 ;
 struct arb_ps_compiled_shader* FUNC_2 (int ,int ,struct arb_ps_compiled_shader*,int) ;
 int FUNC_3 (char*,...) ;
 unsigned int FUNC_4 (struct shader_arb_priv*,int *) ;
 void* FUNC_5 (int) ;
 int FUNC_6 (int,int) ;
 int FUNC_7 (struct arb_ps_compile_args*,struct arb_ps_compile_args const*,int) ;
 int FUNC_8 (struct wined3d_shader*,int ) ;
 int FUNC_9 (struct wined3d_shader*,struct wined3d_gl_info const*,struct wined3d_string_buffer*,struct arb_ps_compile_args const*,struct arb_ps_compiled_shader*) ;
 unsigned int FUNC_10 (TYPE_5__*,scalar_t__) ;
 int FUNC_11 (struct wined3d_string_buffer*) ;
 int FUNC_12 (struct wined3d_string_buffer*) ;

__attribute__((used)) static struct arb_ps_compiled_shader *FUNC_13(struct wined3d_shader *VAR_1,
        const struct arb_ps_compile_args *VAR_2)
{
    struct wined3d_device *VAR_3 = VAR_1->device;
    const struct wined3d_gl_info *VAR_4 = &VAR_3->adapter->gl_info;
    const struct wined3d_d3d_info *VAR_5 = &VAR_3->adapter->d3d_info;
    UINT VAR_6;
    DWORD VAR_7;
    struct arb_ps_compiled_shader *VAR_8;
    struct wined3d_string_buffer VAR_9;
    struct arb_pshader_private *VAR_10;
    GLuint VAR_11;

    if (!VAR_1->backend_data)
    {
        struct shader_arb_priv *VAR_12 = VAR_3->shader_priv;

        VAR_1->backend_data = FUNC_5(sizeof(*VAR_10));
        VAR_10 = VAR_1->backend_data;
        VAR_10->clamp_consts = VAR_1->reg_maps.shader_version.major == 1;

        if (VAR_1->reg_maps.shader_version.major < 3)
            VAR_10->input_signature_idx = ~0U;
        else
            VAR_10->input_signature_idx = FUNC_4(VAR_12, &VAR_1->input_signature);

        FUNC_3("Shader got assigned input signature index %u\n", VAR_10->input_signature_idx);

        if (!VAR_5->vs_clipping)
            VAR_10->clipplane_emulation = FUNC_10(&VAR_1->reg_maps,
                    VAR_5->limits.ffp_blend_stages - 1);
        else
            VAR_10->clipplane_emulation = ~0U;
    }
    VAR_10 = VAR_1->backend_data;





    for (VAR_6 = 0; VAR_6 < VAR_10->num_gl_shaders; ++VAR_6)
    {
        if (!FUNC_7(&VAR_10->gl_shaders[VAR_6].args, VAR_2, sizeof(*VAR_2)))
            return &VAR_10->gl_shaders[VAR_6];
    }

    FUNC_3("No matching GL shader found, compiling a new shader\n");
    if(VAR_10->shader_array_size == VAR_10->num_gl_shaders) {
        if (VAR_10->num_gl_shaders)
        {
            VAR_7 = VAR_10->shader_array_size + FUNC_6(1, VAR_10->shader_array_size / 2);
            VAR_8 = FUNC_2(FUNC_1(), VAR_0, VAR_10->gl_shaders,
                                    VAR_7 * sizeof(*VAR_10->gl_shaders));
        }
        else
        {
            VAR_8 = FUNC_5(sizeof(*VAR_10->gl_shaders));
            VAR_7 = 1;
        }

        if(!VAR_8) {
            FUNC_0("Out of memory\n");
            return 0;
        }
        VAR_10->gl_shaders = VAR_8;
        VAR_10->shader_array_size = VAR_7;
    }

    VAR_10->gl_shaders[VAR_10->num_gl_shaders].args = *VAR_2;

    FUNC_8(VAR_1, VAR_2->super.tex_types);

    if (!FUNC_12(&VAR_9))
    {
        FUNC_0("Failed to initialize shader buffer.\n");
        return 0;
    }

    VAR_11 = FUNC_9(VAR_1, VAR_4, &VAR_9, VAR_2,
            &VAR_10->gl_shaders[VAR_10->num_gl_shaders]);
    FUNC_11(&VAR_9);
    VAR_10->gl_shaders[VAR_10->num_gl_shaders].prgId = VAR_11;

    return &VAR_10->gl_shaders[VAR_10->num_gl_shaders++];
}
