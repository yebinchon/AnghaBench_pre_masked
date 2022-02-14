
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wined3d_texture {int dummy; } ;
struct wined3d_parent_ops {int dummy; } ;
struct TYPE_4__ {scalar_t__ refcount; } ;
struct TYPE_3__ {int * lpVtbl; } ;
struct d3d9_volume {unsigned int sub_resource_idx; struct wined3d_texture* wined3d_texture; int texture; TYPE_2__ resource; TYPE_1__ IDirect3DVolume9_iface; } ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 struct wined3d_parent_ops VAR_1 ;
 int FUNC_1 (struct wined3d_texture*) ;

void FUNC_2(struct d3d9_volume *VAR_2, struct wined3d_texture *VAR_3,
        unsigned int VAR_4, const struct wined3d_parent_ops **VAR_5)
{
    VAR_2->IDirect3DVolume9_iface.lpVtbl = &VAR_0;
    FUNC_0(&VAR_2->resource);
    VAR_2->resource.refcount = 0;
    VAR_2->texture = FUNC_1(VAR_3);
    VAR_2->wined3d_texture = VAR_3;
    VAR_2->sub_resource_idx = VAR_4;

    *VAR_5 = &VAR_1;
}
