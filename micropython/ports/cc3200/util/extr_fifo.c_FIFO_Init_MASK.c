
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int uiLast; unsigned int uiElementsMax; void (* pfElementPush ) (void* const,void const* const) ;void (* pfElementPop ) (void* const,void* const) ;scalar_t__ uiElementCount; scalar_t__ uiFirst; } ;
typedef TYPE_1__ FIFO_t ;



void FUNC_0 (FIFO_t *VAR_0, unsigned int VAR_1,
                void (*VAR_2)(void * const VAR_3, const void * const VAR_4),
                void (*VAR_5)(void * const VAR_6, void * const VAR_7)) {
    if (VAR_0) {
        VAR_0->uiFirst = 0;
        VAR_0->uiLast = VAR_1 - 1;
        VAR_0->uiElementCount = 0;
        VAR_0->uiElementsMax = VAR_1;
        VAR_0->pfElementPush = VAR_2;
        VAR_0->pfElementPop = VAR_5;
    }
}
