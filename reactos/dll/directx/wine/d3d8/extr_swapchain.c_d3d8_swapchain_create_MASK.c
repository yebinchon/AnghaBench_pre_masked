
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_swapchain_desc {int dummy; } ;
struct d3d8_swapchain {int dummy; } ;
struct d3d8_device {int dummy; } ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*,struct d3d8_swapchain*) ;
 int FUNC_2 (char*,int ) ;
 struct d3d8_swapchain* FUNC_3 (int) ;
 int FUNC_4 (struct d3d8_swapchain*) ;
 int FUNC_5 (struct d3d8_swapchain*,struct d3d8_device*,struct wined3d_swapchain_desc*) ;

HRESULT FUNC_6(struct d3d8_device *VAR_2, struct wined3d_swapchain_desc *VAR_3,
        struct d3d8_swapchain **VAR_4)
{
    struct d3d8_swapchain *VAR_5;
    HRESULT VAR_6;

    if (!(VAR_5 = FUNC_3(sizeof(*VAR_5))))
        return VAR_1;

    if (FUNC_0(VAR_6 = FUNC_5(VAR_5, VAR_2, VAR_3)))
    {
        FUNC_2("Failed to initialize swapchain, hr %#x.\n", VAR_6);
        FUNC_4(VAR_5);
        return VAR_6;
    }

    FUNC_1("Created swapchain %p.\n", VAR_5);
    *VAR_4 = VAR_5;

    return VAR_0;
}
