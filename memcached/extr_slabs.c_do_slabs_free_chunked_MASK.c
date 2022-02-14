
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int sl_curr; TYPE_2__* slots; } ;
typedef TYPE_1__ slabclass_t ;
struct TYPE_8__ {scalar_t__ it_flags; size_t orig_clsid; size_t slabs_clsid; struct TYPE_8__* prev; struct TYPE_8__* next; } ;
typedef TYPE_2__ item_chunk ;
typedef TYPE_2__ item ;


 scalar_t__ VAR_0 ;
 void* VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int) ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static void FUNC_2(item *VAR_3, const size_t VAR_4) {
    item_chunk *VAR_5 = (item_chunk *) FUNC_0(VAR_3);
    slabclass_t *VAR_6;

    VAR_3->it_flags = VAR_1;


    VAR_3->prev = 0;

    VAR_6 = &VAR_2[VAR_5->orig_clsid];
    if (VAR_5->next) {
        VAR_5 = VAR_5->next;
        VAR_5->prev = 0;
    } else {

        VAR_5 = ((void*)0);
    }



    VAR_3->prev = 0;
    VAR_3->next = VAR_6->slots;
    if (VAR_3->next) VAR_3->next->prev = VAR_3;
    VAR_6->slots = VAR_3;
    VAR_6->sl_curr++;

    item_chunk *VAR_7;
    while (VAR_5) {
        FUNC_1(VAR_5->it_flags == VAR_0);
        VAR_5->it_flags = VAR_1;
        VAR_6 = &VAR_2[VAR_5->slabs_clsid];
        VAR_7 = VAR_5->next;

        VAR_5->prev = 0;
        VAR_5->next = VAR_6->slots;
        if (VAR_5->next) VAR_5->next->prev = VAR_5;
        VAR_6->slots = VAR_5;
        VAR_6->sl_curr++;

        VAR_5 = VAR_7;
    }

    return;
}
