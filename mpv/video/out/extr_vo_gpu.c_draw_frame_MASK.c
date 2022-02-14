
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vo_frame {int dummy; } ;
struct vo {struct gpu_priv* priv; } ;
struct ra_swapchain {TYPE_2__* fns; } ;
struct ra_fbo {int dummy; } ;
struct gpu_priv {int renderer; TYPE_1__* ctx; } ;
struct TYPE_4__ {int (* submit_frame ) (struct ra_swapchain*,struct vo_frame*) ;int (* start_frame ) (struct ra_swapchain*,struct ra_fbo*) ;} ;
struct TYPE_3__ {struct ra_swapchain* swapchain; } ;


 int FUNC_0 (struct vo*,char*) ;
 int VAR_0 ;
 int FUNC_1 (int ,struct vo_frame*,struct ra_fbo,int ) ;
 int FUNC_2 (struct ra_swapchain*,struct ra_fbo*) ;
 int FUNC_3 (struct ra_swapchain*,struct vo_frame*) ;

__attribute__((used)) static void FUNC_4(struct vo *VAR_1, struct vo_frame *VAR_2)
{
    struct gpu_priv *VAR_3 = VAR_1->priv;
    struct ra_swapchain *VAR_4 = VAR_3->ctx->swapchain;

    struct ra_fbo VAR_5;
    if (!VAR_4->fns->start_frame(VAR_4, &VAR_5))
        return;

    FUNC_1(VAR_3->renderer, VAR_2, VAR_5, VAR_0);
    if (!VAR_4->fns->submit_frame(VAR_4, VAR_2)) {
        FUNC_0(VAR_1, "Failed presenting frame!\n");
        return;
    }
}
