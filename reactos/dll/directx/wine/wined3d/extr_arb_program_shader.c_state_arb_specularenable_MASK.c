
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_state {scalar_t__* render_states; } ;
struct wined3d_gl_info {int dummy; } ;
struct wined3d_device {struct shader_arb_priv* shader_priv; int * shader_backend; } ;
struct wined3d_context {struct wined3d_device* device; struct wined3d_gl_info* gl_info; } ;
struct shader_arb_priv {int* pshader_const_dirty; int highest_dirty_ps_const; } ;
typedef int DWORD ;


 size_t VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,size_t,float*) ;
 int FUNC_3 (int ,size_t) ;
 scalar_t__ FUNC_4 (struct wined3d_state const*) ;

__attribute__((used)) static void FUNC_5(struct wined3d_context *VAR_4,
        const struct wined3d_state *VAR_5, DWORD VAR_6)
{
    const struct wined3d_gl_info *VAR_7 = VAR_4->gl_info;
    struct wined3d_device *VAR_8 = VAR_4->device;
    float VAR_9[4];

    if (VAR_8->shader_backend == &VAR_3)
    {
        struct shader_arb_priv *VAR_10;




        if (FUNC_4(VAR_5))
            return;

        VAR_10 = VAR_8->shader_priv;
        VAR_10->pshader_const_dirty[VAR_0] = 1;
        VAR_10->highest_dirty_ps_const = FUNC_3(VAR_10->highest_dirty_ps_const, VAR_0 + 1);
    }

    if (VAR_5->render_states[VAR_2])
    {

        VAR_9[0] = 1.0f; VAR_9[1] = 1.0f;
        VAR_9[2] = 1.0f; VAR_9[3] = 0.0f;
    } else {
        VAR_9[0] = 0.0f; VAR_9[1] = 0.0f;
        VAR_9[2] = 0.0f; VAR_9[3] = 0.0f;
    }
    FUNC_0(FUNC_2(VAR_1, VAR_0, VAR_9));
    FUNC_1("glProgramEnvParameter4fvARB(GL_FRAGMENT_PROGRAM_ARB, ARB_FFP_CONST_SPECULAR_ENABLE, col)");
}
