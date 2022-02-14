
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {unsigned long len; scalar_t__ count; struct TYPE_5__* zl; struct TYPE_5__* next; struct TYPE_5__* head; } ;
typedef TYPE_1__ quicklistNode ;
typedef TYPE_1__ quicklist ;


 int FUNC_0 (TYPE_1__*) ;

void FUNC_1(quicklist *VAR_0) {
    unsigned long VAR_1;
    quicklistNode *VAR_2, *VAR_3;

    VAR_2 = VAR_0->head;
    VAR_1 = VAR_0->len;
    while (VAR_1--) {
        VAR_3 = VAR_2->next;

        FUNC_0(VAR_2->zl);
        VAR_0->count -= VAR_2->count;

        FUNC_0(VAR_2);

        VAR_0->len--;
        VAR_2 = VAR_3;
    }
    FUNC_0(VAR_0);
}
