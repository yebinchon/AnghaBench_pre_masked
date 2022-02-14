
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vo_frame {int display_synced; } ;
struct ra_swapchain {int dummy; } ;
struct priv {TYPE_1__* ra_ctx; } ;
struct libmpv_gpu_context {struct priv* priv; } ;
struct TYPE_2__ {struct ra_swapchain* swapchain; } ;


 int FUNC_0 (struct ra_swapchain*,struct vo_frame*) ;

__attribute__((used)) static void FUNC_1(struct libmpv_gpu_context *VAR_0, bool VAR_1)
{
    struct priv *VAR_2 = VAR_0->priv;

    struct ra_swapchain *VAR_3 = VAR_2->ra_ctx->swapchain;
    struct vo_frame VAR_4 = {.display_synced = VAR_1};
    FUNC_0(VAR_3, &VAR_4);
}
