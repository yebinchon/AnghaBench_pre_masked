
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wined3d_state {int dummy; } ;
struct wined3d_gl_info {int dummy; } ;
struct wined3d_device {int * shader_backend; struct shader_arb_priv* fragment_priv; } ;
struct wined3d_context {unsigned int shader_update_mask; scalar_t__ last_was_pshader; int constant_update_mask; struct wined3d_device* device; struct wined3d_gl_info* gl_info; } ;
struct shader_arb_priv {int current_fprogram_id; int fragment_shaders; } ;
struct ffp_frag_settings {int dummy; } ;
struct TYPE_2__ {struct ffp_frag_settings settings; } ;
struct arbfp_ffp_desc {int shader; TYPE_1__ parent; } ;
typedef int DWORD ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (unsigned int,int ) ;
 int FUNC_4 (char*,...) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_5 (int *,TYPE_1__*) ;
 int VAR_12 ;
 int FUNC_6 (char*) ;
 int FUNC_7 (struct wined3d_context*,struct wined3d_state const*,int ) ;
 scalar_t__ FUNC_8 (int *,struct ffp_frag_settings*) ;
 int FUNC_9 (struct ffp_frag_settings*,struct wined3d_gl_info const*) ;
 int FUNC_10 (struct wined3d_context*,struct wined3d_state const*,struct ffp_frag_settings*,scalar_t__) ;
 int FUNC_11 (int ,int ) ;
 struct arbfp_ffp_desc* FUNC_12 (int) ;
 scalar_t__ FUNC_13 (struct wined3d_context*,int ) ;
 int FUNC_14 (struct wined3d_context*,struct wined3d_state const*,int ) ;
 int FUNC_15 (struct wined3d_context*,struct wined3d_state const*,int ) ;
 int FUNC_16 (struct wined3d_context*,struct wined3d_state const*,int ) ;
 int FUNC_17 (struct wined3d_context*,struct wined3d_state const*,int ) ;
 scalar_t__ FUNC_18 (struct wined3d_state const*) ;

__attribute__((used)) static void FUNC_19(struct wined3d_context *VAR_13, const struct wined3d_state *VAR_14, DWORD VAR_15)
{
    const struct wined3d_gl_info *VAR_16 = VAR_13->gl_info;
    const struct wined3d_device *VAR_17 = VAR_13->device;
    struct shader_arb_priv *VAR_18 = VAR_17->fragment_priv;
    BOOL VAR_19 = FUNC_18(VAR_14);
    struct ffp_frag_settings VAR_20;
    const struct arbfp_ffp_desc *VAR_21;
    unsigned int VAR_22;

    FUNC_4("context %p, state %p, state_id %#x.\n", VAR_13, VAR_14, VAR_15);

    if (FUNC_13(VAR_13, FUNC_2(VAR_5)))
    {
        if (!VAR_19 && VAR_17->shader_backend == &VAR_12 && VAR_13->last_was_pshader)
        {


            for (VAR_22 = 0; VAR_22 < VAR_2; ++VAR_22)
            {
                FUNC_14(VAR_13, VAR_14, FUNC_3(VAR_22, VAR_10));
                FUNC_17(VAR_13, VAR_14, FUNC_3(VAR_22, VAR_11));
            }
            FUNC_16(VAR_13, VAR_14, FUNC_2(VAR_7));
            FUNC_15(VAR_13, VAR_14, FUNC_2(VAR_6));
            FUNC_7(VAR_13, VAR_14, VAR_3);
        }
        else if (VAR_19)
        {
            VAR_13->shader_update_mask |= 1u << VAR_9;
        }
        return;
    }

    if (!VAR_19)
    {


        FUNC_10(VAR_13, VAR_14, &VAR_20, VAR_0);
        VAR_21 = (const struct arbfp_ffp_desc *)FUNC_8(&VAR_18->fragment_shaders, &VAR_20);
        if (!VAR_21)
        {
            struct arbfp_ffp_desc *VAR_23;

            if (!(VAR_23 = FUNC_12(sizeof(*VAR_23))))
            {
                FUNC_0("Out of memory\n");
                return;
            }

            VAR_23->parent.settings = VAR_20;
            VAR_23->shader = FUNC_9(&VAR_20, VAR_16);
            FUNC_5(&VAR_18->fragment_shaders, &VAR_23->parent);
            FUNC_4("Allocated fixed function replacement shader descriptor %p\n", VAR_23);
            VAR_21 = VAR_23;
        }





        FUNC_1(FUNC_11(VAR_1, VAR_21->shader));
        FUNC_6("glBindProgramARB(GL_FRAGMENT_PROGRAM_ARB, desc->shader)");
        VAR_18->current_fprogram_id = VAR_21->shader;

        if (VAR_17->shader_backend == &VAR_12 && VAR_13->last_was_pshader)
        {


            for (VAR_22 = 0; VAR_22 < VAR_2; ++VAR_22)
            {
                FUNC_14(VAR_13, VAR_14, FUNC_3(VAR_22, VAR_10));
                FUNC_17(VAR_13, VAR_14, FUNC_3(VAR_22, VAR_11));
            }
            FUNC_16(VAR_13, VAR_14, FUNC_2(VAR_7));
            FUNC_15(VAR_13, VAR_14, FUNC_2(VAR_6));
            FUNC_7(VAR_13, VAR_14, VAR_3);
        }
        VAR_13->last_was_pshader = VAR_0;
    }
    else if (!VAR_13->last_was_pshader)
    {
        if (VAR_17->shader_backend == &VAR_12)
            VAR_13->constant_update_mask |= VAR_8;
        VAR_13->last_was_pshader = VAR_4;
    }

    VAR_13->shader_update_mask |= 1u << VAR_9;
}
