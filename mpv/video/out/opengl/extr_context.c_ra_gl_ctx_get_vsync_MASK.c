
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vo_vsync_info {int dummy; } ;
struct ra_swapchain {int ctx; struct priv* priv; } ;
struct TYPE_2__ {int (* get_vsync ) (int ,struct vo_vsync_info*) ;} ;
struct priv {TYPE_1__ params; } ;


 int FUNC_0 (int ,struct vo_vsync_info*) ;

__attribute__((used)) static void FUNC_1(struct ra_swapchain *VAR_0,
                                struct vo_vsync_info *VAR_1)
{
    struct priv *VAR_2 = VAR_0->priv;
    if (VAR_2->params.get_vsync)
        VAR_2->params.get_vsync(VAR_0->ctx, VAR_1);
}
