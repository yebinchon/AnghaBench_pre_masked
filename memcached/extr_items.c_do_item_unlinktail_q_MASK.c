
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {size_t slabs_clsid; struct TYPE_5__* next; struct TYPE_5__* prev; } ;
typedef TYPE_1__ item ;


 int FUNC_0 (int) ;
 TYPE_1__** VAR_0 ;
 TYPE_1__** VAR_1 ;

void FUNC_1(item *VAR_2) {
    item **VAR_3, **VAR_4;
    VAR_3 = &VAR_0[VAR_2->slabs_clsid];
    VAR_4 = &VAR_1[VAR_2->slabs_clsid];

    if (*VAR_3 == VAR_2) {
        FUNC_0(VAR_2->prev == 0);
        *VAR_3 = VAR_2->next;
    }
    if (*VAR_4 == VAR_2) {
        FUNC_0(VAR_2->next == 0);
        *VAR_4 = VAR_2->prev;
    }
    FUNC_0(VAR_2->next != VAR_2);
    FUNC_0(VAR_2->prev != VAR_2);

    if (VAR_2->next) VAR_2->next->prev = VAR_2->prev;
    if (VAR_2->prev) VAR_2->prev->next = VAR_2->next;
    return;
}
