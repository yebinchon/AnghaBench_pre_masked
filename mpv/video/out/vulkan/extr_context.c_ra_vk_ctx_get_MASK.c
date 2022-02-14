
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ra_ctx {TYPE_1__* swapchain; } ;
struct priv {struct mpvk_ctx* vk; } ;
struct mpvk_ctx {int dummy; } ;
struct TYPE_2__ {struct priv* priv; int * fns; } ;


 int VAR_0 ;

struct mpvk_ctx *FUNC_0(struct ra_ctx *VAR_1)
{
    if (VAR_1->swapchain->fns != &VAR_0)
        return ((void*)0);

    struct priv *VAR_2 = VAR_1->swapchain->priv;
    return VAR_2->vk;
}
