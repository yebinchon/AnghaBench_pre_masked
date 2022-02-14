
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mp_log {int dummy; } ;
struct TYPE_4__ {int Height; int Width; } ;
struct TYPE_5__ {TYPE_1__ BufferDesc; } ;
typedef int IDXGISwapChain ;
typedef int HRESULT ;
typedef TYPE_2__ DXGI_SWAP_CHAIN_DESC ;
typedef int DXGI_FORMAT ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,TYPE_2__*) ;
 int FUNC_2 (int *,int ,int ,int ,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct mp_log*,char*,int ) ;

__attribute__((used)) static bool FUNC_5(struct mp_log *VAR_0,
                                    IDXGISwapChain *VAR_1,
                                    DXGI_FORMAT VAR_2)
{
    DXGI_SWAP_CHAIN_DESC VAR_3;

    HRESULT VAR_4 = FUNC_1(VAR_1, &VAR_3);
    if (FUNC_0(VAR_4)) {
        FUNC_4(VAR_0, "Failed to query swap chain's current state: %s\n",
                 FUNC_3(VAR_4));
        return 0;
    }

    VAR_4 = FUNC_2(VAR_1, 0, VAR_3.BufferDesc.Width,
                                      VAR_3.BufferDesc.Height,
                                      VAR_2, 0);
    if (FUNC_0(VAR_4)) {
        FUNC_4(VAR_0, "Couldn't update swapchain format: %s\n",
                 FUNC_3(VAR_4));
        return 0;
    }

    return 1;
}
