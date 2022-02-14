
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* tail; TYPE_2__* head; } ;
typedef TYPE_1__ sei_t ;
struct TYPE_6__ {struct TYPE_6__* next; } ;
typedef TYPE_2__ sei_message_t ;



void FUNC_0(sei_t* VAR_0, sei_message_t* VAR_1)
{
    if (0 == VAR_0->head) {
        VAR_0->head = VAR_1;
        VAR_0->tail = VAR_1;
    } else {
        VAR_0->tail->next = VAR_1;
        VAR_0->tail = VAR_1;
    }
}
