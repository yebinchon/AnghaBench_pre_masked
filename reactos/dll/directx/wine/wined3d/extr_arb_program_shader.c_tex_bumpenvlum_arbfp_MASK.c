
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_state {int ** texture_states; } ;
struct wined3d_gl_info {int dummy; } ;
struct wined3d_device {struct shader_arb_priv* shader_priv; int * shader_backend; } ;
struct wined3d_context {int constant_update_mask; struct wined3d_device* device; struct wined3d_gl_info* gl_info; } ;
struct shader_arb_priv {int* pshader_const_dirty; int highest_dirty_ps_const; } ;
typedef int DWORD ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,int,float*) ;
 int FUNC_5 (int ,int) ;
 scalar_t__ FUNC_6 (struct wined3d_state const*) ;

__attribute__((used)) static void FUNC_7(struct wined3d_context *VAR_6,
        const struct wined3d_state *VAR_7, DWORD VAR_8)
{
    DWORD VAR_9 = (VAR_8 - FUNC_2(0, 0)) / (VAR_1 + 1);
    const struct wined3d_gl_info *VAR_10 = VAR_6->gl_info;
    struct wined3d_device *VAR_11 = VAR_6->device;
    float VAR_12[4];

    VAR_6->constant_update_mask |= VAR_2;

    if (VAR_11->shader_backend == &VAR_5)
    {
        struct shader_arb_priv *VAR_13 = VAR_11->shader_priv;


        if (FUNC_6(VAR_7))
            return;

        VAR_13->pshader_const_dirty[FUNC_0(VAR_9)] = 1;
        VAR_13->highest_dirty_ps_const = FUNC_5(VAR_13->highest_dirty_ps_const, FUNC_0(VAR_9) + 1);
    }

    VAR_12[0] = *((float *)&VAR_7->texture_states[VAR_9][VAR_4]);
    VAR_12[1] = *((float *)&VAR_7->texture_states[VAR_9][VAR_3]);
    VAR_12[2] = 0.0f;
    VAR_12[3] = 0.0f;

    FUNC_1(FUNC_4(VAR_0, FUNC_0(VAR_9), VAR_12));
    FUNC_3("glProgramEnvParameter4fvARB(GL_FRAGMENT_PROGRAM_ARB, ARB_FFP_CONST_LUMINANCE(stage), param)");
}
