
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int it_flags; scalar_t__ nbytes; size_t slabs_clsid; struct TYPE_6__* next; struct TYPE_6__* prev; } ;
typedef TYPE_1__ item ;


 int FUNC_0 (int) ;
 TYPE_1__** VAR_0 ;
 TYPE_1__** VAR_1 ;

item *FUNC_1(item *VAR_2) {
    item **VAR_3, **VAR_4;
    FUNC_0(VAR_2->it_flags == 1);
    FUNC_0(VAR_2->nbytes == 0);
    VAR_3 = &VAR_0[VAR_2->slabs_clsid];
    VAR_4 = &VAR_1[VAR_2->slabs_clsid];


    if (VAR_2->prev == 0) {
        FUNC_0(*VAR_3 == VAR_2);
        if (VAR_2->next) {
            *VAR_3 = VAR_2->next;
            FUNC_0(VAR_2->next->prev == VAR_2);
            VAR_2->next->prev = 0;
        }
        return ((void*)0);
    }



    FUNC_0(VAR_2->prev != VAR_2);
    if (VAR_2->prev) {
        if (*VAR_3 == VAR_2->prev) {

            *VAR_3 = VAR_2;
        }
        if (*VAR_4 == VAR_2) {

            *VAR_4 = VAR_2->prev;
        }
        FUNC_0(VAR_2->next != VAR_2);
        if (VAR_2->next) {
            FUNC_0(VAR_2->prev->next == VAR_2);
            VAR_2->prev->next = VAR_2->next;
            VAR_2->next->prev = VAR_2->prev;
        } else {

            VAR_2->prev->next = 0;
        }

        VAR_2->next = VAR_2->prev;
        VAR_2->prev = VAR_2->next->prev;
        VAR_2->next->prev = VAR_2;

        if (VAR_2->prev) {
            VAR_2->prev->next = VAR_2;
        }
    }
    FUNC_0(VAR_2->next != VAR_2);
    FUNC_0(VAR_2->prev != VAR_2);

    return VAR_2->next;
}
