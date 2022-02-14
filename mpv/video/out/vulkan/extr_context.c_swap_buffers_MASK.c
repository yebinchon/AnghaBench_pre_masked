
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ra_swapchain {int ctx; struct priv* priv; } ;
struct TYPE_2__ {int (* swap_buffers ) (int ) ;} ;
struct priv {TYPE_1__ params; int swapchain; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct ra_swapchain *VAR_0)
{
    struct priv *VAR_1 = VAR_0->priv;
    FUNC_0(VAR_1->swapchain);
    if (VAR_1->params.swap_buffers)
        VAR_1->params.swap_buffers(VAR_0->ctx);
}
