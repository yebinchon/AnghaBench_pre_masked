
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
struct d3d8_surface {unsigned int sub_resource_idx; int texture; scalar_t__ container; struct wined3d_texture* wined3d_texture; int rtv_entry; TYPE_2__ resource; TYPE_1__ IDirect3DSurface8_iface; } ;
typedef int IDirect3DBaseTexture8 ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__,int *,void**) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int VAR_1 ;
 struct wined3d_parent_ops VAR_2 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (struct wined3d_texture*) ;

void FUNC_7(struct d3d8_surface *VAR_3, struct wined3d_texture *VAR_4, unsigned int VAR_5,
        const struct wined3d_parent_ops **VAR_6)
{
    IDirect3DBaseTexture8 *VAR_7;

    VAR_3->IDirect3DSurface8_iface.lpVtbl = &VAR_1;
    FUNC_3(&VAR_3->resource);
    VAR_3->resource.refcount = 0;
    FUNC_4(&VAR_3->rtv_entry);
    VAR_3->container = FUNC_6(VAR_4);
    VAR_3->wined3d_texture = VAR_4;
    VAR_3->sub_resource_idx = VAR_5;

    if (VAR_3->container && FUNC_2(FUNC_1(VAR_3->container,
            &VAR_0, (void **)&VAR_7)))
    {
        VAR_3->texture = FUNC_5(VAR_7);
        FUNC_0(VAR_7);
    }

    *VAR_6 = &VAR_2;
}
