
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wined3d_state {int dummy; } ;
struct wined3d_matrix {int _11; } ;
struct wined3d_gl_info {int dummy; } ;
struct wined3d_context {struct wined3d_gl_info* gl_info; } ;
struct TYPE_2__ {int* texture_matrix_location; } ;
struct glsl_shader_prog_link {TYPE_1__ vs; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 unsigned int VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct wined3d_context const*,struct wined3d_state const*,unsigned int,struct wined3d_matrix*) ;
 int FUNC_3 (int,int,int ,int *) ;

__attribute__((used)) static void FUNC_4(const struct wined3d_context *VAR_2,
        const struct wined3d_state *VAR_3, unsigned int VAR_4, struct glsl_shader_prog_link *VAR_5)
{
    const struct wined3d_gl_info *VAR_6 = VAR_2->gl_info;
    struct wined3d_matrix VAR_7;

    if (VAR_4 >= VAR_1)
        return;
    if (VAR_5->vs.texture_matrix_location[VAR_4] == -1)
        return;

    FUNC_2(VAR_2, VAR_3, VAR_4, &VAR_7);
    FUNC_0(FUNC_3(VAR_5->vs.texture_matrix_location[VAR_4], 1, VAR_0, &VAR_7._11));
    FUNC_1("glUniformMatrix4fv");
}
