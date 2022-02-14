
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_gl_info {scalar_t__* supported; } ;
struct wined3d_context {int transform_feedback_paused; int transform_feedback_active; struct wined3d_gl_info* gl_info; } ;
typedef scalar_t__ BOOL ;


 size_t VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct wined3d_context*) ;
 int FUNC_4 () ;

__attribute__((used)) static void FUNC_5(struct wined3d_context *VAR_1, BOOL VAR_2)
{
    const struct wined3d_gl_info *VAR_3 = VAR_1->gl_info;

    if (!VAR_1->transform_feedback_active || VAR_1->transform_feedback_paused)
        return;

    if (VAR_3->supported[VAR_0])
    {
        FUNC_0(FUNC_4());
        FUNC_2("glPauseTransformFeedback");
        VAR_1->transform_feedback_paused = 1;
        return;
    }

    FUNC_1("Cannot pause transform feedback operations.\n");

    if (VAR_2)
        FUNC_3(VAR_1);
}
