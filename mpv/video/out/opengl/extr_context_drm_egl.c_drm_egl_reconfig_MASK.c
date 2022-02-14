
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ra_ctx {int swapchain; TYPE_1__* vo; struct priv* priv; } ;
struct priv {TYPE_2__* fb; } ;
struct TYPE_4__ {int height; int width; } ;
struct TYPE_3__ {int dheight; int dwidth; } ;


 int FUNC_0 (int ,int ,int ,int ) ;

__attribute__((used)) static bool FUNC_1(struct ra_ctx *VAR_0)
{
    struct priv *VAR_1 = VAR_0->priv;
    VAR_0->vo->dwidth = VAR_1->fb->width;
    VAR_0->vo->dheight = VAR_1->fb->height;
    FUNC_0(VAR_0->swapchain, VAR_1->fb->width, VAR_1->fb->height, 0);
    return 1;
}
