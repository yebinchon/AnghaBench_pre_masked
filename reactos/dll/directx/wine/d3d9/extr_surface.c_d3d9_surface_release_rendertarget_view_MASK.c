
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_rendertarget_view {int dummy; } ;
struct d3d9_surface {int IDirect3DSurface9_iface; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct d3d9_surface *VAR_0,
        struct wined3d_rendertarget_view *VAR_1)
{
    if (VAR_1)
        FUNC_0(&VAR_0->IDirect3DSurface9_iface);
}
