
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ uiElementsMax; scalar_t__ uiLast; scalar_t__ uiFirst; scalar_t__ uiElementCount; } ;
typedef TYPE_1__ FIFO_t ;



void FUNC_0 (FIFO_t *VAR_0) {
    if (VAR_0) {
        VAR_0->uiElementCount = 0;
        VAR_0->uiFirst = 0;
        VAR_0->uiLast = VAR_0->uiElementsMax - 1;
    }
}
