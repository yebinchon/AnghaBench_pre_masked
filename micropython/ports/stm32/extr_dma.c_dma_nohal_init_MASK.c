
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {int sub_instance; TYPE_3__* init; int id; TYPE_2__* instance; } ;
typedef TYPE_1__ dma_descr_t ;
struct TYPE_7__ {int MemBurst; int PeriphBurst; int Priority; int MemInc; int PeriphInc; int FIFOMode; int FIFOThreshold; } ;
struct TYPE_6__ {int CR; int FCR; } ;
typedef TYPE_2__ DMA_Stream_TypeDef ;
typedef TYPE_3__ DMA_InitTypeDef ;


 int FUNC_0 (int ) ;

void FUNC_1(const dma_descr_t *VAR_0, uint32_t VAR_1) {
    DMA_Stream_TypeDef *VAR_2 = VAR_0->instance;


    FUNC_0(VAR_0->id);


    const DMA_InitTypeDef *VAR_3 = VAR_0->init;
    VAR_2->CR =
        VAR_0->sub_instance
        | VAR_3->MemBurst
        | VAR_3->PeriphBurst
        | VAR_3->Priority
        | VAR_3->MemInc
        | VAR_3->PeriphInc
        | VAR_1
        ;


    VAR_2->FCR =
        VAR_3->FIFOMode
        | VAR_3->FIFOThreshold
        ;
}
