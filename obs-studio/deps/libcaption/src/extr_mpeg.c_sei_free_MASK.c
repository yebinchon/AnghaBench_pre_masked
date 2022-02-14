
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* head; } ;
typedef TYPE_1__ sei_t ;
struct TYPE_7__ {struct TYPE_7__* next; } ;
typedef TYPE_2__ sei_message_t ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_1__*,int ) ;

void FUNC_2(sei_t* VAR_0)
{
    sei_message_t* VAR_1;

    while (VAR_0->head) {
        VAR_1 = VAR_0->head->next;
        FUNC_0(VAR_0->head);
        VAR_0->head = VAR_1;
    }

    FUNC_1(VAR_0, 0);
}
