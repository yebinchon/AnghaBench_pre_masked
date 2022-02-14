
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int (* proc ) (TYPE_2__*,TYPE_1__*) ;struct TYPE_6__* next; } ;
typedef TYPE_1__ task_header_t ;
struct TYPE_7__ {int continue_call; int section; int * task_queue_tail; TYPE_1__* task_queue_head; } ;
typedef TYPE_2__ BindProtocol ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*,TYPE_1__*) ;

__attribute__((used)) static void FUNC_3(BindProtocol *VAR_0)
{
    task_header_t *VAR_1;

    while(1) {
        FUNC_0(&VAR_0->section);

        VAR_1 = VAR_0->task_queue_head;
        if(VAR_1) {
            VAR_0->task_queue_head = VAR_1->next;
            if(!VAR_0->task_queue_head)
                VAR_0->task_queue_tail = ((void*)0);
        }

        FUNC_1(&VAR_0->section);

        if(!VAR_1)
            break;

        VAR_0->continue_call++;
        VAR_1->proc(VAR_0, VAR_1);
        VAR_0->continue_call--;
    }
}
