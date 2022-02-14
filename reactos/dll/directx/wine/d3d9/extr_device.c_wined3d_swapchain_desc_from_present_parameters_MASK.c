
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct wined3d_swapchain_desc {int flags; scalar_t__ auto_restore_display_mode; int swap_interval; int refresh_rate; void* auto_depth_stencil_format; int enable_auto_depth_stencil; int windowed; int device_window; int swap_effect; int multisample_quality; int multisample_type; int backbuffer_usage; int backbuffer_count; void* backbuffer_format; int backbuffer_height; int backbuffer_width; } ;
typedef scalar_t__ UINT ;
struct TYPE_3__ {scalar_t__ SwapEffect; scalar_t__ BackBufferCount; int Flags; int PresentationInterval; int FullScreen_RefreshRateInHz; int AutoDepthStencilFormat; int EnableAutoDepthStencil; int Windowed; int hDeviceWindow; int MultiSampleQuality; int MultiSampleType; int BackBufferFormat; int BackBufferHeight; int BackBufferWidth; } ;
typedef scalar_t__ D3DSWAPEFFECT ;
typedef TYPE_1__ D3DPRESENT_PARAMETERS ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*,int) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (char*,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int,int) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static BOOL FUNC_5(struct wined3d_swapchain_desc *VAR_7,
        const D3DPRESENT_PARAMETERS *VAR_8, BOOL VAR_9)
{
    D3DSWAPEFFECT VAR_10 = VAR_9 ? VAR_2 : VAR_1;
    UINT VAR_11 = VAR_9 ? 30 : 3;

    if (!VAR_8->SwapEffect || VAR_8->SwapEffect > VAR_10)
    {
        FUNC_1("Invalid swap effect %u passed.\n", VAR_8->SwapEffect);
        return VAR_3;
    }
    if (VAR_8->BackBufferCount > VAR_11
            || (VAR_8->SwapEffect == VAR_1
            && VAR_8->BackBufferCount > 1))
    {
        FUNC_1("Invalid backbuffer count %u.\n", VAR_8->BackBufferCount);
        return VAR_3;
    }

    VAR_7->backbuffer_width = VAR_8->BackBufferWidth;
    VAR_7->backbuffer_height = VAR_8->BackBufferHeight;
    VAR_7->backbuffer_format = FUNC_3(VAR_8->BackBufferFormat);
    VAR_7->backbuffer_count = FUNC_2(1, VAR_8->BackBufferCount);
    VAR_7->backbuffer_usage = VAR_5;
    VAR_7->multisample_type = VAR_8->MultiSampleType;
    VAR_7->multisample_quality = VAR_8->MultiSampleQuality;
    VAR_7->swap_effect = FUNC_4(VAR_8->SwapEffect);
    VAR_7->device_window = VAR_8->hDeviceWindow;
    VAR_7->windowed = VAR_8->Windowed;
    VAR_7->enable_auto_depth_stencil = VAR_8->EnableAutoDepthStencil;
    VAR_7->auto_depth_stencil_format
            = FUNC_3(VAR_8->AutoDepthStencilFormat);
    VAR_7->flags
            = (VAR_8->Flags & VAR_0) | VAR_6;
    VAR_7->refresh_rate = VAR_8->FullScreen_RefreshRateInHz;
    VAR_7->swap_interval = VAR_8->PresentationInterval;
    VAR_7->auto_restore_display_mode = VAR_4;

    if (VAR_8->Flags & ~VAR_0)
        FUNC_0("Unhandled flags %#x.\n", VAR_8->Flags & ~VAR_0);

    return VAR_4;
}
