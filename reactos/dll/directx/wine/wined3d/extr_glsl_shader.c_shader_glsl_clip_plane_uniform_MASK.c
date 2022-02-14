
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wined3d_vec4 {int x; } ;
struct wined3d_state {int * transforms; struct wined3d_vec4* clip_planes; } ;
struct wined3d_matrix {int dummy; } ;
struct wined3d_gl_info {int dummy; } ;
struct wined3d_context {struct wined3d_gl_info* gl_info; } ;
struct TYPE_2__ {scalar_t__ clip_planes_location; } ;
struct glsl_shader_prog_link {TYPE_1__ vs; } ;


 int FUNC_0 (int ) ;
 size_t VAR_0 ;
 int FUNC_1 (scalar_t__,int,int *) ;
 int FUNC_2 (struct wined3d_matrix*,int *) ;
 int FUNC_3 (struct wined3d_vec4*,struct wined3d_vec4*,struct wined3d_matrix*) ;
 int FUNC_4 (struct wined3d_matrix*,struct wined3d_matrix*) ;
 int FUNC_5 (struct wined3d_state const*) ;

__attribute__((used)) static void FUNC_6(const struct wined3d_context *VAR_1,
        const struct wined3d_state *VAR_2, unsigned int VAR_3, struct glsl_shader_prog_link *VAR_4)
{
    const struct wined3d_gl_info *VAR_5 = VAR_1->gl_info;
    struct wined3d_matrix VAR_6;
    struct wined3d_vec4 VAR_7;

    VAR_7 = VAR_2->clip_planes[VAR_3];


    if (!FUNC_5(VAR_2))
    {
        FUNC_2(&VAR_6, &VAR_2->transforms[VAR_0]);
        FUNC_4(&VAR_6, &VAR_6);
        FUNC_3(&VAR_7, &VAR_7, &VAR_6);
    }

    FUNC_0(FUNC_1(VAR_4->vs.clip_planes_location + VAR_3, 1, &VAR_7.x));
}
