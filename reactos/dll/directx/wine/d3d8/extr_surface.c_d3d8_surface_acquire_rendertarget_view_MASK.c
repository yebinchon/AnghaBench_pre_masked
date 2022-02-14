
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wined3d_rendertarget_view {int dummy; } ;
struct d3d8_surface {struct wined3d_rendertarget_view* wined3d_rtv; int rtv_entry; TYPE_1__* texture; int IDirect3DSurface8_iface; int sub_resource_idx; int wined3d_texture; } ;
struct TYPE_2__ {int rtv_list; } ;
typedef int HRESULT ;


 int FUNC_0 (char*,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int ,int ,struct d3d8_surface*,int *,struct wined3d_rendertarget_view**) ;

struct wined3d_rendertarget_view *FUNC_6(struct d3d8_surface *VAR_1)
{
    HRESULT VAR_2;




    FUNC_2(&VAR_1->IDirect3DSurface8_iface);

    if (VAR_1->wined3d_rtv)
        return VAR_1->wined3d_rtv;

    if (FUNC_1(VAR_2 = FUNC_5(VAR_1->wined3d_texture,
            VAR_1->sub_resource_idx, VAR_1, &VAR_0, &VAR_1->wined3d_rtv)))
    {
        FUNC_0("Failed to create rendertarget view, hr %#x.\n", VAR_2);
        FUNC_3(&VAR_1->IDirect3DSurface8_iface);
        return ((void*)0);
    }

    if (VAR_1->texture)
        FUNC_4(&VAR_1->texture->rtv_list, &VAR_1->rtv_entry);

    return VAR_1->wined3d_rtv;
}
