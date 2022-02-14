
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wined3d_state {float* render_states; } ;
struct TYPE_3__ {int (* p_glAlphaFunc ) (scalar_t__,float) ;} ;
struct TYPE_4__ {TYPE_1__ gl; } ;
struct wined3d_gl_info {TYPE_2__ gl_ops; } ;
struct wined3d_context {struct wined3d_gl_info* gl_info; } ;
typedef scalar_t__ GLint ;
typedef int DWORD ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (scalar_t__,float) ;
 scalar_t__ FUNC_2 (float) ;

__attribute__((used)) static void FUNC_3(struct wined3d_context *VAR_2,
        const struct wined3d_state *VAR_3, DWORD VAR_4)
{
    const struct wined3d_gl_info *VAR_5 = VAR_2->gl_info;
    GLint VAR_6 = FUNC_2(VAR_3->render_states[VAR_0]);
    float VAR_7 = VAR_3->render_states[VAR_1] / 255.0f;

    if (VAR_6)
    {
        VAR_5->gl_ops.gl.p_glAlphaFunc(VAR_6, VAR_7);
        FUNC_0("glAlphaFunc");
    }
}
