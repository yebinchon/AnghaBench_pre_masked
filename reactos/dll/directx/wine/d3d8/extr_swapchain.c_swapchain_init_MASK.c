
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wined3d_swapchain_desc {int dummy; } ;
struct TYPE_2__ {int * lpVtbl; } ;
struct d3d8_swapchain {int refcount; int * parent_device; int wined3d_swapchain; TYPE_1__ IDirect3DSwapChain8_iface; } ;
struct d3d8_device {int IDirect3DDevice8_iface; int wined3d_device; } ;
typedef int HRESULT ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int ,struct wined3d_swapchain_desc*,struct d3d8_swapchain*,int *,int *) ;

__attribute__((used)) static HRESULT FUNC_6(struct d3d8_swapchain *VAR_3, struct d3d8_device *VAR_4,
        struct wined3d_swapchain_desc *VAR_5)
{
    HRESULT VAR_6;

    VAR_3->refcount = 1;
    VAR_3->IDirect3DSwapChain8_iface.lpVtbl = &VAR_1;

    FUNC_3();
    VAR_6 = FUNC_5(VAR_4->wined3d_device, VAR_5, VAR_3,
            &VAR_2, &VAR_3->wined3d_swapchain);
    FUNC_4();

    if (FUNC_0(VAR_6))
    {
        FUNC_2("Failed to create wined3d swapchain, hr %#x.\n", VAR_6);
        return VAR_6;
    }

    VAR_3->parent_device = &VAR_4->IDirect3DDevice8_iface;
    FUNC_1(VAR_3->parent_device);

    return VAR_0;
}
