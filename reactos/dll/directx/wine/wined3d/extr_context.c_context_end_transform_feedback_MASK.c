
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_gl_info {int dummy; } ;
struct wined3d_context {scalar_t__ transform_feedback_paused; scalar_t__ transform_feedback_active; struct wined3d_gl_info* gl_info; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 () ;

void FUNC_3(struct wined3d_context *VAR_0)
{
    const struct wined3d_gl_info *VAR_1 = VAR_0->gl_info;
    if (VAR_0->transform_feedback_active)
    {
        FUNC_0(FUNC_2());
        FUNC_1("glEndTransformFeedback");
        VAR_0->transform_feedback_active = 0;
        VAR_0->transform_feedback_paused = 0;
    }
}
