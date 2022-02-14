
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int item_hdr ;
struct TYPE_6__ {int it_flags; size_t slabs_clsid; scalar_t__ nbytes; struct TYPE_6__* prev; struct TYPE_6__* next; } ;
typedef TYPE_1__ item ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int) ;
 TYPE_1__** VAR_2 ;
 int * VAR_3 ;
 int * VAR_4 ;
 TYPE_1__** VAR_5 ;

__attribute__((used)) static void FUNC_2(item *VAR_6) {
    item **VAR_7, **VAR_8;
    FUNC_1((VAR_6->it_flags & VAR_1) == 0);

    VAR_7 = &VAR_2[VAR_6->slabs_clsid];
    VAR_8 = &VAR_5[VAR_6->slabs_clsid];
    FUNC_1(VAR_6 != *VAR_7);
    FUNC_1((*VAR_7 && *VAR_8) || (*VAR_7 == 0 && *VAR_8 == 0));
    VAR_6->prev = 0;
    VAR_6->next = *VAR_7;
    if (VAR_6->next) VAR_6->next->prev = VAR_6;
    *VAR_7 = VAR_6;
    if (*VAR_8 == 0) *VAR_8 = VAR_6;
    VAR_3[VAR_6->slabs_clsid]++;







    VAR_4[VAR_6->slabs_clsid] += FUNC_0(VAR_6);


    return;
}
