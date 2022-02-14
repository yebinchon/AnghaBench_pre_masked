
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int item_hdr ;
struct TYPE_6__ {size_t slabs_clsid; int it_flags; scalar_t__ nbytes; struct TYPE_6__* next; struct TYPE_6__* prev; } ;
typedef TYPE_1__ item ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int) ;
 TYPE_1__** VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;
 TYPE_1__** VAR_4 ;

__attribute__((used)) static void FUNC_2(item *VAR_5) {
    item **VAR_6, **VAR_7;
    VAR_6 = &VAR_1[VAR_5->slabs_clsid];
    VAR_7 = &VAR_4[VAR_5->slabs_clsid];

    if (*VAR_6 == VAR_5) {
        FUNC_1(VAR_5->prev == 0);
        *VAR_6 = VAR_5->next;
    }
    if (*VAR_7 == VAR_5) {
        FUNC_1(VAR_5->next == 0);
        *VAR_7 = VAR_5->prev;
    }
    FUNC_1(VAR_5->next != VAR_5);
    FUNC_1(VAR_5->prev != VAR_5);

    if (VAR_5->next) VAR_5->next->prev = VAR_5->prev;
    if (VAR_5->prev) VAR_5->prev->next = VAR_5->next;
    VAR_2[VAR_5->slabs_clsid]--;







    VAR_3[VAR_5->slabs_clsid] -= FUNC_0(VAR_5);


    return;
}
