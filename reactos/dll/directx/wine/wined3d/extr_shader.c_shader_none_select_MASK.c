
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wined3d_state {int dummy; } ;
struct wined3d_gl_info {int dummy; } ;
struct wined3d_context {struct wined3d_gl_info* gl_info; } ;
struct shader_none_priv {TYPE_2__* fragment_pipe; TYPE_1__* vertex_pipe; } ;
struct TYPE_4__ {int (* enable_extension ) (struct wined3d_gl_info const*,int) ;} ;
struct TYPE_3__ {int (* vp_enable ) (struct wined3d_gl_info const*,int) ;} ;


 int FUNC_0 (struct wined3d_gl_info const*,int) ;
 int FUNC_1 (struct wined3d_gl_info const*,int) ;
 int FUNC_2 (struct wined3d_state const*) ;
 int FUNC_3 (struct wined3d_state const*) ;

__attribute__((used)) static void FUNC_4(void *VAR_0, struct wined3d_context *VAR_1,
        const struct wined3d_state *VAR_2)
{
    const struct wined3d_gl_info *VAR_3 = VAR_1->gl_info;
    struct shader_none_priv *VAR_4 = VAR_0;

    VAR_4->vertex_pipe->vp_enable(VAR_3, !FUNC_3(VAR_2));
    VAR_4->fragment_pipe->enable_extension(VAR_3, !FUNC_2(VAR_2));
}
