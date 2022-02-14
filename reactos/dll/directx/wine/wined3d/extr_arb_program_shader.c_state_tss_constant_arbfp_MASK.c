
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_state {int ** texture_states; } ;
struct wined3d_gl_info {int dummy; } ;
struct wined3d_device {struct shader_arb_priv* shader_priv; int * shader_backend; } ;
struct wined3d_context {struct wined3d_device* device; struct wined3d_gl_info* gl_info; } ;
struct wined3d_color {int r; } ;
struct shader_arb_priv {int* pshader_const_dirty; int highest_dirty_ps_const; } ;
typedef int DWORD ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int ,int ) ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,int,int *) ;
 int FUNC_5 (int ,int) ;
 scalar_t__ FUNC_6 (struct wined3d_state const*) ;
 int FUNC_7 (struct wined3d_color*,int ) ;

__attribute__((used)) static void FUNC_8(struct wined3d_context *VAR_4,
        const struct wined3d_state *VAR_5, DWORD VAR_6)
{
    DWORD VAR_7 = (VAR_6 - FUNC_2(0, 0)) / (VAR_1 + 1);
    const struct wined3d_gl_info *VAR_8 = VAR_4->gl_info;
    struct wined3d_device *VAR_9 = VAR_4->device;
    struct wined3d_color VAR_10;

    if (VAR_9->shader_backend == &VAR_3)
    {
        struct shader_arb_priv *VAR_11;




        if (FUNC_6(VAR_5))
            return;

        VAR_11 = VAR_9->shader_priv;
        VAR_11->pshader_const_dirty[FUNC_0(VAR_7)] = 1;
        VAR_11->highest_dirty_ps_const = FUNC_5(VAR_11->highest_dirty_ps_const, FUNC_0(VAR_7) + 1);
    }

    FUNC_7(&VAR_10, VAR_5->texture_states[VAR_7][VAR_2]);
    FUNC_1(FUNC_4(VAR_0, FUNC_0(VAR_7), &VAR_10.r));
    FUNC_3("glProgramEnvParameter4fvARB(GL_FRAGMENT_PROGRAM_ARB, ARB_FFP_CONST_CONSTANT(stage), &color.r)");
}
