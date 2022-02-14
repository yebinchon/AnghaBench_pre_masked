
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wined3d_state {scalar_t__* render_states; } ;
struct TYPE_3__ {int (* p_glAlphaFunc ) (int,float) ;int (* p_glDisable ) (int ) ;int (* p_glEnable ) (int ) ;} ;
struct TYPE_4__ {TYPE_1__ gl; } ;
struct wined3d_gl_info {TYPE_2__ gl_ops; } ;
struct wined3d_context {struct wined3d_gl_info* gl_info; } ;
typedef int DWORD ;


 int VAR_0 ;
 int FUNC_0 (char*,struct wined3d_context*,struct wined3d_state const*,int ) ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,float) ;
 int FUNC_5 (scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct wined3d_context *VAR_4, const struct wined3d_state *VAR_5, DWORD VAR_6)
{
    const struct wined3d_gl_info *VAR_7 = VAR_4->gl_info;
    int VAR_8;
    float VAR_9;

    FUNC_0("context %p, state %p, state_id %#x.\n", VAR_4, VAR_5, VAR_6);

    if (VAR_5->render_states[VAR_3])
    {
        VAR_7->gl_ops.gl.p_glEnable(VAR_0);
        FUNC_1("glEnable GL_ALPHA_TEST");
    }
    else
    {
        VAR_7->gl_ops.gl.p_glDisable(VAR_0);
        FUNC_1("glDisable GL_ALPHA_TEST");
        return;
    }

    VAR_9 = ((float)VAR_5->render_states[VAR_2]) / 255.0f;
    VAR_8 = FUNC_5(VAR_5->render_states[VAR_1]);

    if (VAR_8)
    {
        VAR_7->gl_ops.gl.p_glAlphaFunc(VAR_8, VAR_9);
        FUNC_1("glAlphaFunc");
    }
}
