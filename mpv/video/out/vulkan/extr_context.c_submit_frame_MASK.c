
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vo_frame {int dummy; } ;
struct ra_swapchain {struct priv* priv; } ;
struct priv {int swapchain; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static bool FUNC_1(struct ra_swapchain *VAR_0, const struct vo_frame *VAR_1)
{
    struct priv *VAR_2 = VAR_0->priv;
    return FUNC_0(VAR_2->swapchain);
}
