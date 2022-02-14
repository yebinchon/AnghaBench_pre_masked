
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ra_hwdec_mapper {struct cuda_mapper_priv* priv; TYPE_1__* owner; } ;
struct ext_vk {int ss; } ;
struct cuda_mapper_priv {struct ext_vk** ext; } ;
struct cuda_hw_priv {TYPE_2__* cu; } ;
struct TYPE_7__ {int member_0; } ;
struct TYPE_6__ {int (* cuSignalExternalSemaphoresAsync ) (int *,TYPE_3__*,int,int ) ;} ;
struct TYPE_5__ {struct cuda_hw_priv* priv; } ;
typedef TYPE_2__ CudaFunctions ;
typedef TYPE_3__ CUDA_EXTERNAL_SEMAPHORE_SIGNAL_PARAMS ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,TYPE_3__*,int,int ) ;

__attribute__((used)) static bool FUNC_2(const struct ra_hwdec_mapper *VAR_0, int VAR_1)
{
    struct cuda_hw_priv *VAR_2 = VAR_0->owner->priv;
    struct cuda_mapper_priv *VAR_3 = VAR_0->priv;
    CudaFunctions *VAR_4 = VAR_2->cu;
    int VAR_5;
    struct ext_vk *VAR_6 = VAR_3->ext[VAR_1];

    CUDA_EXTERNAL_SEMAPHORE_SIGNAL_PARAMS VAR_7 = { 0, };
    VAR_5 = FUNC_0(VAR_4->cuSignalExternalSemaphoresAsync(&VAR_6->ss,
                                                       &VAR_7, 1, 0));
    return VAR_5 == 0;
}
