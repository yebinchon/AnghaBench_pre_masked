
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int lock; TYPE_1__* tail; TYPE_1__* head; } ;
struct TYPE_5__ {struct TYPE_5__* next; } ;
typedef TYPE_1__ CQ_ITEM ;
typedef TYPE_2__ CQ ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(CQ *VAR_0, CQ_ITEM *VAR_1) {
    VAR_1->next = ((void*)0);

    FUNC_0(&VAR_0->lock);
    if (((void*)0) == VAR_0->tail)
        VAR_0->head = VAR_1;
    else
        VAR_0->tail->next = VAR_1;
    VAR_0->tail = VAR_1;
    FUNC_1(&VAR_0->lock);
}
