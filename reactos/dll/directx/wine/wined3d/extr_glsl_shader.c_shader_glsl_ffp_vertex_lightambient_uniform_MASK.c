
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wined3d_state {int * render_states; } ;
struct wined3d_gl_info {int dummy; } ;
struct wined3d_context {struct wined3d_gl_info* gl_info; } ;
struct wined3d_color {int r; } ;
struct TYPE_2__ {int light_ambient_location; } ;
struct glsl_shader_prog_link {TYPE_1__ vs; } ;


 int FUNC_0 (int ) ;
 size_t VAR_0 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int,int *) ;
 int FUNC_3 (struct wined3d_color*,int ) ;

__attribute__((used)) static void FUNC_4(const struct wined3d_context *VAR_1,
        const struct wined3d_state *VAR_2, struct glsl_shader_prog_link *VAR_3)
{
    const struct wined3d_gl_info *VAR_4 = VAR_1->gl_info;
    struct wined3d_color VAR_5;

    FUNC_3(&VAR_5, VAR_2->render_states[VAR_0]);
    FUNC_0(FUNC_2(VAR_3->vs.light_ambient_location, 1, &VAR_5.r));
    FUNC_1("glUniform3fv");
}
