
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int lock; int * tail; TYPE_1__* head; } ;
struct TYPE_5__ {struct TYPE_5__* next; } ;
typedef TYPE_1__ CQ_ITEM ;
typedef TYPE_2__ CQ ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static CQ_ITEM *FUNC_2(CQ *VAR_0) {
    CQ_ITEM *VAR_1;

    FUNC_0(&VAR_0->lock);
    VAR_1 = VAR_0->head;
    if (((void*)0) != VAR_1) {
        VAR_0->head = VAR_1->next;
        if (((void*)0) == VAR_0->head)
            VAR_0->tail = ((void*)0);
    }
    FUNC_1(&VAR_0->lock);

    return VAR_1;
}
