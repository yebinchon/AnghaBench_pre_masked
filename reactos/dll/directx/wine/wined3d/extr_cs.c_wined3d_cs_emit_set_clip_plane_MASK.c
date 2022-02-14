
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wined3d_vec4 {int dummy; } ;
struct wined3d_cs_set_clip_plane {struct wined3d_vec4 plane; int plane_idx; int opcode; } ;
struct wined3d_cs {TYPE_1__* ops; } ;
typedef int UINT ;
struct TYPE_2__ {int (* submit ) (struct wined3d_cs*,int ) ;struct wined3d_cs_set_clip_plane* (* require_space ) (struct wined3d_cs*,int,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 struct wined3d_cs_set_clip_plane* FUNC_0 (struct wined3d_cs*,int,int ) ;
 int FUNC_1 (struct wined3d_cs*,int ) ;

void FUNC_2(struct wined3d_cs *VAR_2, UINT VAR_3, const struct wined3d_vec4 *VAR_4)
{
    struct wined3d_cs_set_clip_plane *VAR_5;

    VAR_5 = VAR_2->ops->require_space(VAR_2, sizeof(*VAR_5), VAR_1);
    VAR_5->opcode = VAR_0;
    VAR_5->plane_idx = VAR_3;
    VAR_5->plane = *VAR_4;

    VAR_2->ops->submit(VAR_2, VAR_1);
}
