
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wined3d_state {int * render_states; } ;
struct wined3d_gl_info {int dummy; } ;
struct wined3d_context {struct wined3d_gl_info* gl_info; } ;
struct wined3d_color {int r; } ;
struct TYPE_2__ {int fog_scale_location; int fog_end_location; int fog_density_location; int fog_color_location; } ;
struct glsl_shader_prog_link {TYPE_1__ ps; } ;
typedef int DWORD ;


 int FUNC_0 (int ) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct wined3d_context const*,struct wined3d_state const*,float*,float*) ;
 int FUNC_3 (int ,float) ;
 int FUNC_4 (int ,int,int *) ;
 int FUNC_5 (struct wined3d_color*,int ) ;

__attribute__((used)) static void FUNC_6(const struct wined3d_context *VAR_2,
        const struct wined3d_state *VAR_3, struct glsl_shader_prog_link *VAR_4)
{
    const struct wined3d_gl_info *VAR_5 = VAR_2->gl_info;
    struct wined3d_color VAR_6;
    float VAR_7, VAR_8, VAR_9;
    union
    {
        DWORD d;
        float f;
    } VAR_10;

    FUNC_5(&VAR_6, VAR_3->render_states[VAR_0]);
    FUNC_0(FUNC_4(VAR_4->ps.fog_color_location, 1, &VAR_6.r));
    VAR_10.d = VAR_3->render_states[VAR_1];
    FUNC_0(FUNC_3(VAR_4->ps.fog_density_location, VAR_10.f));
    FUNC_2(VAR_2, VAR_3, &VAR_7, &VAR_8);
    VAR_9 = 1.0f / (VAR_8 - VAR_7);
    FUNC_0(FUNC_3(VAR_4->ps.fog_end_location, VAR_8));
    FUNC_0(FUNC_3(VAR_4->ps.fog_scale_location, VAR_9));
    FUNC_1("fog emulation uniforms");
}
