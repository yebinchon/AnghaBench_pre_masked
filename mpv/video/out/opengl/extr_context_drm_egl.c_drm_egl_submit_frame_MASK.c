
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vo_frame {int still; } ;
struct ra_swapchain {struct ra_ctx* ctx; } ;
struct ra_ctx {struct priv* priv; } ;
struct priv {int still; } ;


 int FUNC_0 (struct ra_swapchain*,struct vo_frame const*) ;

__attribute__((used)) static bool FUNC_1(struct ra_swapchain *VAR_0, const struct vo_frame *VAR_1)
{
    struct ra_ctx *VAR_2 = VAR_0->ctx;
    struct priv *VAR_3 = VAR_2->priv;

    VAR_3->still = VAR_1->still;

    return FUNC_0(VAR_0, VAR_1);
}
