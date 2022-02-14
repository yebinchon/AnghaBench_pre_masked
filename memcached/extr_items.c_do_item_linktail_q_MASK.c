
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int it_flags; scalar_t__ nbytes; size_t slabs_clsid; struct TYPE_5__* next; struct TYPE_5__* prev; } ;
typedef TYPE_1__ item ;


 int FUNC_0 (int) ;
 TYPE_1__** VAR_0 ;
 TYPE_1__** VAR_1 ;

void FUNC_1(item *VAR_2) {
    item **VAR_3, **VAR_4;
    FUNC_0(VAR_2->it_flags == 1);
    FUNC_0(VAR_2->nbytes == 0);

    VAR_3 = &VAR_0[VAR_2->slabs_clsid];
    VAR_4 = &VAR_1[VAR_2->slabs_clsid];

    FUNC_0(VAR_2 != *VAR_4);
    FUNC_0((*VAR_3 && *VAR_4) || (*VAR_3 == 0 && *VAR_4 == 0));
    VAR_2->prev = *VAR_4;
    VAR_2->next = 0;
    if (VAR_2->prev) {
        FUNC_0(VAR_2->prev->next == 0);
        VAR_2->prev->next = VAR_2;
    }
    *VAR_4 = VAR_2;
    if (*VAR_3 == 0) *VAR_3 = VAR_2;
    return;
}
