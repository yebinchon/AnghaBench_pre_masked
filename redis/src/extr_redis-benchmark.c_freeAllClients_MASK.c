
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int value; struct TYPE_5__* next; } ;
typedef TYPE_2__ listNode ;
struct TYPE_6__ {TYPE_1__* clients; } ;
struct TYPE_4__ {TYPE_2__* head; } ;


 TYPE_3__ VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(void) {
    listNode *VAR_1 = VAR_0.clients->head, *VAR_2;

    while(VAR_1) {
        VAR_2 = VAR_1->next;
        FUNC_0(VAR_1->value);
        VAR_1 = VAR_2;
    }
}
