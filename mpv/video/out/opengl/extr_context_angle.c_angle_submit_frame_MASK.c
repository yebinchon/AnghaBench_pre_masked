
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vo_frame {int dummy; } ;
struct ra_swapchain {TYPE_1__* ctx; } ;
struct priv {scalar_t__ d3d11_context; } ;
struct TYPE_2__ {struct priv* priv; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct ra_swapchain*,struct vo_frame const*) ;

__attribute__((used)) static bool FUNC_2(struct ra_swapchain *VAR_0,
                               const struct vo_frame *VAR_1)
{
    struct priv *VAR_2 = VAR_0->ctx->priv;
    bool VAR_3 = FUNC_1(VAR_0, VAR_1);
    if (VAR_2->d3d11_context) {



        FUNC_0(VAR_2->d3d11_context);
    }
    return VAR_3;
}
