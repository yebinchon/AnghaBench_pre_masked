
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ra_ctx {TYPE_1__* vo; int swapchain; struct priv* priv; } ;
struct priv {int main_fb; } ;
struct TYPE_2__ {int dheight; int dwidth; } ;


 int FUNC_0 (struct ra_ctx*) ;
 int FUNC_1 (int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct ra_ctx *VAR_0)
{
    struct priv *VAR_1 = VAR_0->priv;
    FUNC_0(VAR_0);
    FUNC_1(VAR_0->swapchain, VAR_0->vo->dwidth, VAR_0->vo->dheight, VAR_1->main_fb);
}
