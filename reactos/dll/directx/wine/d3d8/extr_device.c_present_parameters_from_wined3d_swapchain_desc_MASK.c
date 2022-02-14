
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct wined3d_swapchain_desc {int flags; int swap_interval; int refresh_rate; int auto_depth_stencil_format; int enable_auto_depth_stencil; int windowed; int device_window; int swap_effect; int multisample_type; int backbuffer_count; int backbuffer_format; int backbuffer_height; int backbuffer_width; } ;
struct TYPE_3__ {int Flags; int FullScreen_PresentationInterval; int FullScreen_RefreshRateInHz; void* AutoDepthStencilFormat; int EnableAutoDepthStencil; int Windowed; int hDeviceWindow; int SwapEffect; int MultiSampleType; int BackBufferCount; void* BackBufferFormat; int BackBufferHeight; int BackBufferWidth; } ;
typedef TYPE_1__ D3DPRESENT_PARAMETERS ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(D3DPRESENT_PARAMETERS *VAR_1,
        const struct wined3d_swapchain_desc *VAR_2)
{
    VAR_1->BackBufferWidth = VAR_2->backbuffer_width;
    VAR_1->BackBufferHeight = VAR_2->backbuffer_height;
    VAR_1->BackBufferFormat = FUNC_0(VAR_2->backbuffer_format);
    VAR_1->BackBufferCount = VAR_2->backbuffer_count;
    VAR_1->MultiSampleType = VAR_2->multisample_type;
    VAR_1->SwapEffect = FUNC_1(VAR_2->swap_effect);
    VAR_1->hDeviceWindow = VAR_2->device_window;
    VAR_1->Windowed = VAR_2->windowed;
    VAR_1->EnableAutoDepthStencil = VAR_2->enable_auto_depth_stencil;
    VAR_1->AutoDepthStencilFormat
            = FUNC_0(VAR_2->auto_depth_stencil_format);
    VAR_1->Flags = VAR_2->flags & VAR_0;
    VAR_1->FullScreen_RefreshRateInHz = VAR_2->refresh_rate;
    VAR_1->FullScreen_PresentationInterval = VAR_2->swap_interval;
}
