
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_7__ {int sub_instance; TYPE_1__* init; int instance; } ;
typedef TYPE_2__ dma_descr_t ;
struct TYPE_6__ {int Channel; int Request; int Direction; } ;
struct TYPE_8__ {void* Parent; TYPE_1__ Init; int Instance; } ;
typedef TYPE_3__ DMA_HandleTypeDef ;



void FUNC_0(DMA_HandleTypeDef *VAR_0, const dma_descr_t *VAR_1, uint32_t VAR_2, void *VAR_3) {

    VAR_0->Instance = VAR_1->instance;
    VAR_0->Init = *VAR_1->init;
    VAR_0->Init.Direction = VAR_2;




    VAR_0->Init.Channel = VAR_1->sub_instance;




    VAR_0->Parent = VAR_3;
}
