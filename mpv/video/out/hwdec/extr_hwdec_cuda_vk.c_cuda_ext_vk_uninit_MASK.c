
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ra_hwdec_mapper {int ra; struct cuda_mapper_priv* priv; TYPE_1__* owner; } ;
struct ext_vk {int sync; scalar_t__ ws; scalar_t__ ss; scalar_t__ mem; scalar_t__ mma; } ;
struct cuda_mapper_priv {struct ext_vk** ext; } ;
struct cuda_hw_priv {TYPE_2__* cu; } ;
struct TYPE_4__ {int (* cuDestroyExternalSemaphore ) (scalar_t__) ;int (* cuDestroyExternalMemory ) (scalar_t__) ;int (* cuMipmappedArrayDestroy ) (scalar_t__) ;} ;
struct TYPE_3__ {struct cuda_hw_priv* priv; } ;
typedef TYPE_2__ CudaFunctions ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (struct ext_vk*) ;

__attribute__((used)) static void FUNC_8(const struct ra_hwdec_mapper *VAR_0, int VAR_1)
{
    struct cuda_hw_priv *VAR_2 = VAR_0->owner->priv;
    struct cuda_mapper_priv *VAR_3 = VAR_0->priv;
    CudaFunctions *VAR_4 = VAR_2->cu;

    struct ext_vk *VAR_5 = VAR_3->ext[VAR_1];
    if (VAR_5) {
        if (VAR_5->mma) {
            FUNC_0(VAR_4->cuMipmappedArrayDestroy(VAR_5->mma));
            VAR_5->mma = 0;
        }
        if (VAR_5->mem) {
            FUNC_0(VAR_4->cuDestroyExternalMemory(VAR_5->mem));
            VAR_5->mem = 0;
        }
        if (VAR_5->ss) {
            FUNC_0(VAR_4->cuDestroyExternalSemaphore(VAR_5->ss));
            VAR_5->ss = 0;
        }
        if (VAR_5->ws) {
            FUNC_0(VAR_4->cuDestroyExternalSemaphore(VAR_5->ws));
            VAR_5->ws = 0;
        }
        FUNC_1(FUNC_2(VAR_0->ra), &VAR_5->sync);
    }
    FUNC_7(VAR_5);
}
