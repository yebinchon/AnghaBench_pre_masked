
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ra_hwdec {int devs; struct cuda_hw_priv* priv; } ;
struct TYPE_5__ {int av_device_ref; } ;
struct cuda_hw_priv {scalar_t__ decode_ctx; scalar_t__ display_ctx; TYPE_1__* cu; TYPE_2__ hwctx; } ;
struct TYPE_4__ {int (* cuCtxDestroy ) (scalar_t__) ;} ;
typedef TYPE_1__ CudaFunctions ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__**) ;
 int FUNC_3 (int ,TYPE_2__*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct ra_hwdec *VAR_0)
{
    struct cuda_hw_priv *VAR_1 = VAR_0->priv;
    CudaFunctions *VAR_2 = VAR_1->cu;

    FUNC_3(VAR_0->devs, &VAR_1->hwctx);
    FUNC_1(&VAR_1->hwctx.av_device_ref);

    if (VAR_1->decode_ctx && VAR_1->decode_ctx != VAR_1->display_ctx)
        FUNC_0(VAR_2->cuCtxDestroy(VAR_1->decode_ctx));

    if (VAR_1->display_ctx)
        FUNC_0(VAR_2->cuCtxDestroy(VAR_1->display_ctx));

    FUNC_2(&VAR_1->cu);
}
