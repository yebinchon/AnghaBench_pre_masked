
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_texture {int resource; struct wined3d_swapchain* swapchain; } ;
struct wined3d_swapchain {int dummy; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct wined3d_texture *VAR_0, struct wined3d_swapchain *VAR_1)
{
    VAR_0->swapchain = VAR_1;
    FUNC_0(&VAR_0->resource);
}
