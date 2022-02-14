
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* next; } ;
typedef TYPE_1__ fold_item ;
struct TYPE_6__ {int * current; TYPE_1__* head; } ;
typedef TYPE_2__ RedisSock ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_1(RedisSock *VAR_0)
{
    fold_item *VAR_1;

    for (VAR_1 = VAR_0->head; VAR_1; ) {
        fold_item *VAR_2 = VAR_1->next;
        FUNC_0(VAR_1);
        VAR_1 = VAR_2;
    }
    VAR_0->head = ((void*)0);
    VAR_0->current = ((void*)0);
}
