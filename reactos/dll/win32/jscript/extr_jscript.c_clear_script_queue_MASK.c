
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* next; } ;
typedef TYPE_1__ bytecode_t ;
struct TYPE_6__ {int * queue_tail; TYPE_1__* queue_head; } ;
typedef TYPE_2__ JScript ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_1(JScript *VAR_0)
{
    bytecode_t *VAR_1, *VAR_2;

    if(!VAR_0->queue_head)
        return;

    VAR_1 = VAR_0->queue_head;
    while(VAR_1) {
        VAR_2 = VAR_1->next;
        VAR_1->next = ((void*)0);
        FUNC_0(VAR_1);
        VAR_1 = VAR_2;
    }

    VAR_0->queue_head = VAR_0->queue_tail = ((void*)0);
}
