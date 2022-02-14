
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_3__ {int * buf; int size; scalar_t__ lock; scalar_t__ tail; scalar_t__ head; } ;
typedef TYPE_1__ FIFO_TypeDef ;



void FUNC_0(FIFO_TypeDef * VAR_0, uint8_t * VAR_1, uint16_t VAR_2)
{
     VAR_0->head = 0;
     VAR_0->tail = 0;
     VAR_0->lock = 0;
     VAR_0->size = VAR_2;
     VAR_0->buf = VAR_1;
}
