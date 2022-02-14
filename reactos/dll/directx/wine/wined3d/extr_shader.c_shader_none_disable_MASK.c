
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wined3d_gl_info {int dummy; } ;
struct wined3d_context {unsigned int shader_update_mask; struct wined3d_gl_info* gl_info; } ;
struct shader_none_priv {TYPE_2__* fragment_pipe; TYPE_1__* vertex_pipe; } ;
struct TYPE_4__ {int (* enable_extension ) (struct wined3d_gl_info const*,int ) ;} ;
struct TYPE_3__ {int (* vp_enable ) (struct wined3d_gl_info const*,int ) ;} ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int FUNC_0 (struct wined3d_gl_info const*,int ) ;
 int FUNC_1 (struct wined3d_gl_info const*,int ) ;

__attribute__((used)) static void FUNC_2(void *VAR_7, struct wined3d_context *VAR_8)
{
    struct shader_none_priv *VAR_9 = VAR_7;
    const struct wined3d_gl_info *VAR_10 = VAR_8->gl_info;

    VAR_9->vertex_pipe->vp_enable(VAR_10, VAR_0);
    VAR_9->fragment_pipe->enable_extension(VAR_10, VAR_0);

    VAR_8->shader_update_mask = (1u << VAR_5)
            | (1u << VAR_6)
            | (1u << VAR_3)
            | (1u << VAR_4)
            | (1u << VAR_2)
            | (1u << VAR_1);
}
