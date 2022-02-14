
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ra_hwdec_mapper {int * tex; int ra; TYPE_1__* owner; struct cuda_mapper_priv* priv; } ;
struct cuda_mapper_priv {int display_ctx; } ;
struct cuda_hw_priv {int (* ext_uninit ) (struct ra_hwdec_mapper*,int) ;TYPE_2__* cu; } ;
struct TYPE_4__ {int (* cuCtxPopCurrent ) (int *) ;int (* cuCtxPushCurrent ) (int ) ;} ;
struct TYPE_3__ {struct cuda_hw_priv* priv; } ;
typedef TYPE_2__ CudaFunctions ;
typedef int CUcontext ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct ra_hwdec_mapper*,int) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct ra_hwdec_mapper *VAR_0)
{
    struct cuda_mapper_priv *VAR_1 = VAR_0->priv;
    struct cuda_hw_priv *VAR_2 = VAR_0->owner->priv;
    CudaFunctions *VAR_3 = VAR_2->cu;
    CUcontext VAR_4;


    FUNC_0(VAR_3->cuCtxPushCurrent(VAR_1->display_ctx));
    for (int VAR_5 = 0; VAR_5 < 4; VAR_5++) {
        VAR_2->ext_uninit(VAR_0, VAR_5);
        FUNC_1(VAR_0->ra, &VAR_0->tex[VAR_5]);
    }
    FUNC_0(VAR_3->cuCtxPopCurrent(&VAR_4));
}
