
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct wined3d_state {struct wined3d_shader** shader; TYPE_2__* fb; } ;
struct wined3d_shader_signature {int dummy; } ;
struct wined3d_shader {scalar_t__ load_local_constsF; struct wined3d_shader_signature input_signature; scalar_t__ backend_data; } ;
struct TYPE_16__ {int (* p_glDisable ) (int ) ;int (* p_glEnable ) (int ) ;} ;
struct TYPE_17__ {TYPE_7__ gl; } ;
struct wined3d_gl_info {TYPE_8__ gl_ops; scalar_t__* supported; } ;
struct TYPE_15__ {int use_map; } ;
struct wined3d_context {int constant_update_mask; TYPE_6__ stream_info; struct wined3d_gl_info* gl_info; } ;
struct shader_arb_priv {scalar_t__ last_ps_const_clamped; int* pshader_const_dirty; scalar_t__ last_vs_color_unclamp; TYPE_9__* vertex_pipe; struct wined3d_shader* current_vprogram_id; struct arb_vs_compiled_shader* compiled_vprog; TYPE_5__* fragment_pipe; struct wined3d_shader* current_fprogram_id; int use_arbfp_fixed_func; int highest_dirty_ps_const; struct arb_ps_compiled_shader* compiled_fprog; } ;
struct arb_vs_compiled_shader {scalar_t__ need_color_unclamp; struct wined3d_shader* prgId; } ;
struct arb_vs_compile_args {unsigned int ps_signature; } ;
struct arb_pshader_private {scalar_t__ clamp_consts; } ;
struct TYPE_12__ {scalar_t__ active; } ;
struct TYPE_13__ {TYPE_3__ super; } ;
struct arb_ps_compiled_shader {TYPE_4__ np2fixup_info; struct wined3d_shader* prgId; } ;
struct arb_ps_compile_args {int dummy; } ;
typedef int UINT ;
struct TYPE_18__ {int (* vp_enable ) (struct wined3d_gl_info const*,int ) ;} ;
struct TYPE_14__ {int (* enable_extension ) (struct wined3d_gl_info const*,int ) ;} ;
struct TYPE_11__ {TYPE_1__** render_targets; } ;
struct TYPE_10__ {int height; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (char*,struct wined3d_shader*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct wined3d_state const*,struct wined3d_context*,struct wined3d_shader*,struct arb_ps_compile_args*) ;
 struct arb_ps_compiled_shader* FUNC_5 (struct wined3d_shader*,struct arb_ps_compile_args*) ;
 int FUNC_6 (struct wined3d_state const*,struct wined3d_context*,struct wined3d_shader*,struct arb_vs_compile_args*) ;
 struct arb_vs_compiled_shader* FUNC_7 (struct wined3d_shader*,struct wined3d_gl_info*,int ,struct arb_vs_compile_args*,struct wined3d_shader_signature const*) ;
 int FUNC_8 (int ,struct wined3d_shader*) ;
 int FUNC_9 (int ,int) ;
 int FUNC_10 (int ,int) ;
 int FUNC_11 (void*,struct wined3d_context*,struct wined3d_state const*,int ,int ,int ) ;
 int FUNC_12 (struct arb_ps_compiled_shader*,struct wined3d_context*,struct wined3d_state const*,int ) ;
 int FUNC_13 (struct arb_vs_compiled_shader*,struct wined3d_context*,struct wined3d_state const*) ;
 int FUNC_14 (struct wined3d_gl_info const*,int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (struct wined3d_gl_info const*,int ) ;
 int FUNC_18 (struct wined3d_gl_info const*,int ) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (int ) ;
 int FUNC_21 (struct wined3d_gl_info const*,int ) ;
 scalar_t__ FUNC_22 (struct wined3d_state const*) ;
 scalar_t__ FUNC_23 (struct wined3d_state const*) ;

__attribute__((used)) static void FUNC_24(void *VAR_13, struct wined3d_context *VAR_14,
        const struct wined3d_state *VAR_15)
{
    struct shader_arb_priv *VAR_16 = VAR_13;
    const struct wined3d_gl_info *VAR_17 = VAR_14->gl_info;
    int VAR_18;


    if (FUNC_22(VAR_15))
    {
        struct wined3d_shader *VAR_19 = VAR_15->shader[VAR_11];
        struct arb_ps_compile_args VAR_20;
        struct arb_ps_compiled_shader *VAR_21;

        FUNC_2("Using pixel shader %p.\n", VAR_19);
        FUNC_4(VAR_15, VAR_14, VAR_19, &VAR_20);
        VAR_21 = FUNC_5(VAR_19, &VAR_20);
        VAR_16->current_fprogram_id = VAR_21->prgId;
        VAR_16->compiled_fprog = VAR_21;


        FUNC_1(FUNC_8(VAR_5, VAR_16->current_fprogram_id));
        FUNC_3("glBindProgramARB(GL_FRAGMENT_PROGRAM_ARB, priv->current_fprogram_id);");

        if (!VAR_16->use_arbfp_fixed_func)
            VAR_16->fragment_pipe->enable_extension(VAR_17, VAR_3);


        VAR_17->gl_ops.gl.p_glEnable(VAR_5);
        FUNC_3("glEnable(GL_FRAGMENT_PROGRAM_ARB);");

        FUNC_2("Bound fragment program %u and enabled GL_FRAGMENT_PROGRAM_ARB\n", VAR_16->current_fprogram_id);




        if (VAR_16->last_ps_const_clamped != ((struct arb_pshader_private *)VAR_19->backend_data)->clamp_consts)
        {
            VAR_16->last_ps_const_clamped = ((struct arb_pshader_private *)VAR_19->backend_data)->clamp_consts;
            VAR_16->highest_dirty_ps_const = FUNC_10(VAR_16->highest_dirty_ps_const, 8);
            for(VAR_18 = 0; VAR_18 < 8; VAR_18++)
            {
                VAR_16->pshader_const_dirty[VAR_18] = 1;
            }

            FUNC_11(VAR_13, VAR_14, VAR_15, VAR_7, VAR_3, VAR_7);
        }
        else
        {
            UINT VAR_22 = VAR_15->fb->render_targets[0]->height;
            FUNC_12(VAR_21, VAR_14, VAR_15, VAR_22);
        }


        if (VAR_21->np2fixup_info.super.active)
            VAR_14->constant_update_mask |= VAR_9;

        if (VAR_19->load_local_constsF)
            VAR_14->constant_update_mask |= VAR_8;
    }
    else
    {
        if (VAR_17->supported[VAR_1] && !VAR_16->use_arbfp_fixed_func)
        {




            VAR_17->gl_ops.gl.p_glDisable(VAR_5);
            FUNC_3("glDisable(GL_FRAGMENT_PROGRAM_ARB)");
            VAR_16->current_fprogram_id = 0;
        }
        VAR_16->fragment_pipe->enable_extension(VAR_17, VAR_7);
    }

    if (FUNC_23(VAR_15))
    {
        struct wined3d_shader *VAR_23 = VAR_15->shader[VAR_12];
        struct arb_vs_compile_args VAR_24;
        struct arb_vs_compiled_shader *VAR_25;
        const struct wined3d_shader_signature *VAR_26;

        FUNC_2("Using vertex shader %p\n", VAR_23);
        FUNC_6(VAR_15, VAR_14, VAR_23, &VAR_24);




        if (VAR_24.ps_signature == ~0U)
            VAR_26 = ((void*)0);
        else
            VAR_26 = &VAR_15->shader[VAR_11]->input_signature;

        VAR_25 = FUNC_7(VAR_23, VAR_14->gl_info, VAR_14->stream_info.use_map,
                &VAR_24, VAR_26);
        VAR_16->current_vprogram_id = VAR_25->prgId;
        VAR_16->compiled_vprog = VAR_25;


        FUNC_1(FUNC_8(VAR_6, VAR_16->current_vprogram_id));
        FUNC_3("glBindProgramARB(GL_VERTEX_PROGRAM_ARB, priv->current_vprogram_id);");

        VAR_16->vertex_pipe->vp_enable(VAR_17, VAR_3);


        VAR_17->gl_ops.gl.p_glEnable(VAR_6);
        FUNC_3("glEnable(GL_VERTEX_PROGRAM_ARB);");
        FUNC_2("Bound vertex program %u and enabled GL_VERTEX_PROGRAM_ARB\n", VAR_16->current_vprogram_id);
        FUNC_13(VAR_25, VAR_14, VAR_15);

        if(VAR_16->last_vs_color_unclamp != VAR_25->need_color_unclamp) {
            VAR_16->last_vs_color_unclamp = VAR_25->need_color_unclamp;

            if (VAR_17->supported[VAR_0])
            {
                FUNC_1(FUNC_9(VAR_4, !VAR_25->need_color_unclamp));
                FUNC_3("glClampColorARB");
            } else {
                FUNC_0("vertex color clamp needs to be changed, but extension not supported.\n");
            }
        }

        if (VAR_23->load_local_constsF)
            VAR_14->constant_update_mask |= VAR_10;
    }
    else
    {
        if (VAR_17->supported[VAR_2])
        {
            VAR_16->current_vprogram_id = 0;
            VAR_17->gl_ops.gl.p_glDisable(VAR_6);
            FUNC_3("glDisable(GL_VERTEX_PROGRAM_ARB)");
        }
        VAR_16->vertex_pipe->vp_enable(VAR_17, VAR_7);
    }
}
