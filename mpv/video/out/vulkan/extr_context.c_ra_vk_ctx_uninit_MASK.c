
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ra_ctx {TYPE_3__* swapchain; TYPE_2__* ra; } ;
struct priv {int swapchain; struct mpvk_ctx* vk; } ;
struct mpvk_ctx {int vulkan; int * gpu; } ;
struct TYPE_6__ {struct priv* priv; } ;
struct TYPE_5__ {TYPE_1__* fns; } ;
struct TYPE_4__ {int (* destroy ) (TYPE_2__*) ;} ;


 int FUNC_0 (TYPE_3__**) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_2__*) ;

void FUNC_5(struct ra_ctx *VAR_0)
{
    if (!VAR_0->swapchain)
        return;

    struct priv *VAR_1 = VAR_0->swapchain->priv;
    struct mpvk_ctx *VAR_2 = VAR_1->vk;

    if (VAR_0->ra) {
        FUNC_1(VAR_2->gpu);
        FUNC_2(&VAR_1->swapchain);
        VAR_0->ra->fns->destroy(VAR_0->ra);
        VAR_0->ra = ((void*)0);
    }

    VAR_2->gpu = ((void*)0);
    FUNC_3(&VAR_2->vulkan);
    FUNC_0(&VAR_0->swapchain);
}
