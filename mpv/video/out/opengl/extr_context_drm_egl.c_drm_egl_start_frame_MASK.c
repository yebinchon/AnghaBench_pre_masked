
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ra_swapchain {struct ra_ctx* ctx; } ;
struct ra_fbo {int dummy; } ;
struct ra_ctx {struct priv* priv; } ;
struct TYPE_4__ {scalar_t__* atomic_request_ptr; } ;
struct priv {TYPE_3__* kms; TYPE_1__ drm_params; } ;
struct TYPE_6__ {TYPE_2__* atomic_context; } ;
struct TYPE_5__ {scalar_t__ request; } ;


 scalar_t__ FUNC_0 () ;
 int FUNC_1 (struct ra_swapchain*,struct ra_fbo*) ;

__attribute__((used)) static bool FUNC_2(struct ra_swapchain *VAR_0, struct ra_fbo *VAR_1)
{
    struct ra_ctx *VAR_2 = VAR_0->ctx;
    struct priv *VAR_3 = VAR_2->priv;

    if (VAR_3->kms->atomic_context && !VAR_3->kms->atomic_context->request) {
        VAR_3->kms->atomic_context->request = FUNC_0();
        VAR_3->drm_params.atomic_request_ptr = &VAR_3->kms->atomic_context->request;
    }

    return FUNC_1(VAR_0, VAR_1);
}
