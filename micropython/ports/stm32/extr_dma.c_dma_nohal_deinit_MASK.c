
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {TYPE_2__* instance; } ;
typedef TYPE_1__ dma_descr_t ;
struct TYPE_6__ {int CR; int FCR; scalar_t__ NDTR; } ;
typedef TYPE_2__ DMA_Stream_TypeDef ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__ const*) ;
 int FUNC_1 () ;

void FUNC_2(const dma_descr_t *VAR_1) {
    DMA_Stream_TypeDef *VAR_2 = VAR_1->instance;
    VAR_2->CR &= ~VAR_0;
    uint32_t VAR_3 = FUNC_1();
    while ((VAR_2->CR & VAR_0) && FUNC_1() - VAR_3 < 100) {
    }
    VAR_2->CR = 0;
    VAR_2->NDTR = 0;
    VAR_2->FCR = 0x21;
    FUNC_0(VAR_1);
}
