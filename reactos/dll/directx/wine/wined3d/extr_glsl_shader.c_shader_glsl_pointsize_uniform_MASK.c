
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wined3d_state {int dummy; } ;
struct wined3d_gl_info {int dummy; } ;
struct wined3d_context {struct wined3d_gl_info* gl_info; } ;
struct TYPE_2__ {int pointsize_q_att_location; int pointsize_l_att_location; int pointsize_c_att_location; int pointsize_location; int pointsize_max_location; int pointsize_min_location; } ;
struct glsl_shader_prog_link {TYPE_1__ vs; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct wined3d_context const*,struct wined3d_state const*,float*,float*) ;
 int FUNC_3 (struct wined3d_context const*,struct wined3d_state const*,float*,float*) ;
 int FUNC_4 (int ,float) ;

__attribute__((used)) static void FUNC_5(const struct wined3d_context *VAR_0,
        const struct wined3d_state *VAR_1, struct glsl_shader_prog_link *VAR_2)
{
    const struct wined3d_gl_info *VAR_3 = VAR_0->gl_info;
    float VAR_4, VAR_5;
    float VAR_6, VAR_7[3];

    FUNC_3(VAR_0, VAR_1, &VAR_4, &VAR_5);

    FUNC_0(FUNC_4(VAR_2->vs.pointsize_min_location, VAR_4));
    FUNC_1("glUniform1f");
    FUNC_0(FUNC_4(VAR_2->vs.pointsize_max_location, VAR_5));
    FUNC_1("glUniform1f");

    FUNC_2(VAR_0, VAR_1, &VAR_6, VAR_7);

    FUNC_0(FUNC_4(VAR_2->vs.pointsize_location, VAR_6));
    FUNC_1("glUniform1f");
    FUNC_0(FUNC_4(VAR_2->vs.pointsize_c_att_location, VAR_7[0]));
    FUNC_1("glUniform1f");
    FUNC_0(FUNC_4(VAR_2->vs.pointsize_l_att_location, VAR_7[1]));
    FUNC_1("glUniform1f");
    FUNC_0(FUNC_4(VAR_2->vs.pointsize_q_att_location, VAR_7[2]));
    FUNC_1("glUniform1f");
}
