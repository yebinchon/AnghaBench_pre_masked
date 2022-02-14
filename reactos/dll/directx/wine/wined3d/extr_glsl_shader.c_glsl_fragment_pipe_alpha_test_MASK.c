
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wined3d_state {scalar_t__* render_states; } ;
struct TYPE_3__ {int (* p_glDisable ) (int ) ;int (* p_glEnable ) (int ) ;} ;
struct TYPE_4__ {TYPE_1__ gl; } ;
struct wined3d_gl_info {TYPE_2__ gl_ops; } ;
struct wined3d_context {struct wined3d_gl_info* gl_info; } ;
typedef int DWORD ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct wined3d_context *VAR_2,
        const struct wined3d_state *VAR_3, DWORD VAR_4)
{
    const struct wined3d_gl_info *VAR_5 = VAR_2->gl_info;

    if (VAR_3->render_states[VAR_1])
    {
        VAR_5->gl_ops.gl.p_glEnable(VAR_0);
        FUNC_0("glEnable(GL_ALPHA_TEST)");
    }
    else
    {
        VAR_5->gl_ops.gl.p_glDisable(VAR_0);
        FUNC_0("glDisable(GL_ALPHA_TEST)");
    }
}
