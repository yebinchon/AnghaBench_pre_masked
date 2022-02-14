
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_state {scalar_t__ gl_primitive_type; int * render_states; } ;
struct wined3d_context {int dummy; } ;
typedef int DWORD ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 size_t VAR_1 ;

__attribute__((used)) static void FUNC_1(struct wined3d_context *VAR_2,
        const struct wined3d_state *VAR_3, DWORD VAR_4)
{
    static unsigned int VAR_5;

    if (VAR_3->gl_primitive_type == VAR_0 && !VAR_3->render_states[VAR_1] && !VAR_5++)
        FUNC_0("Non-point sprite points not supported in core profile.\n");
}
