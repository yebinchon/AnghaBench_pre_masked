
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_rendertarget_view {int dummy; } ;
struct ddraw_surface {struct wined3d_rendertarget_view* wined3d_rtv; int sub_resource_idx; int wined3d_texture; } ;
typedef int HRESULT ;


 int FUNC_0 (char*,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int ,int ,struct ddraw_surface*,int *,struct wined3d_rendertarget_view**) ;

struct wined3d_rendertarget_view *FUNC_3(struct ddraw_surface *VAR_1)
{
    HRESULT VAR_2;

    if (VAR_1->wined3d_rtv)
        return VAR_1->wined3d_rtv;

    if (FUNC_1(VAR_2 = FUNC_2(VAR_1->wined3d_texture,
            VAR_1->sub_resource_idx, VAR_1, &VAR_0, &VAR_1->wined3d_rtv)))
    {
        FUNC_0("Failed to create rendertarget view, hr %#x.\n", VAR_2);
        return ((void*)0);
    }

    return VAR_1->wined3d_rtv;
}
