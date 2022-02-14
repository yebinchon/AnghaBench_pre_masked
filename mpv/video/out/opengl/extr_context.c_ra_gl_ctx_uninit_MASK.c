
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ra_ctx {scalar_t__ ra; TYPE_1__* swapchain; } ;
struct priv {scalar_t__ wrapped_fb; } ;
struct TYPE_2__ {struct priv* priv; } ;


 int FUNC_0 (scalar_t__*) ;
 int FUNC_1 (scalar_t__,scalar_t__*) ;
 int FUNC_2 (TYPE_1__*) ;

void FUNC_3(struct ra_ctx *VAR_0)
{
    if (VAR_0->swapchain) {
        struct priv *VAR_1 = VAR_0->swapchain->priv;
        if (VAR_0->ra && VAR_1->wrapped_fb)
            FUNC_1(VAR_0->ra, &VAR_1->wrapped_fb);
        FUNC_2(VAR_0->swapchain);
        VAR_0->swapchain = ((void*)0);
    }

    FUNC_0(&VAR_0->ra);
}
