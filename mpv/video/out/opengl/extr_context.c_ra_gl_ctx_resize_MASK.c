
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ra_swapchain {TYPE_2__* ctx; struct priv* priv; } ;
struct priv {int main_fb; TYPE_3__* wrapped_fb; } ;
struct TYPE_5__ {int w; int h; } ;
struct TYPE_7__ {TYPE_1__ params; } ;
struct TYPE_6__ {int ra; } ;


 TYPE_3__* FUNC_0 (int ,int,int,int) ;
 int FUNC_1 (int ,TYPE_3__**) ;

void FUNC_2(struct ra_swapchain *VAR_0, int VAR_1, int VAR_2, int VAR_3)
{
    struct priv *VAR_4 = VAR_0->priv;
    if (VAR_4->main_fb == VAR_3 && VAR_4->wrapped_fb && VAR_4->wrapped_fb->params.w == VAR_1
        && VAR_4->wrapped_fb->params.h == VAR_2)
        return;

    if (VAR_4->wrapped_fb)
        FUNC_1(VAR_0->ctx->ra, &VAR_4->wrapped_fb);

    VAR_4->main_fb = VAR_3;
    VAR_4->wrapped_fb = FUNC_0(VAR_0->ctx->ra, VAR_3, VAR_1, VAR_2);
}
