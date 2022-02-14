
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char** slab_list; unsigned int size; int sl_curr; TYPE_2__* slots; int slabs; } ;
typedef TYPE_1__ slabclass_t ;
struct TYPE_6__ {scalar_t__ it_flags; struct TYPE_6__* prev; struct TYPE_6__* next; } ;
typedef TYPE_2__ item ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int) ;
 TYPE_1__* VAR_1 ;

unsigned int FUNC_2(char *VAR_2, const int VAR_3) {
    slabclass_t *VAR_4;
    item *VAR_5 = (item *)VAR_2;
    int VAR_6 = FUNC_0(VAR_5);



    if (VAR_6 == 0) {

        VAR_4 = &VAR_1[0];
        FUNC_1(0);
        VAR_4->slab_list[VAR_4->slabs++] = (char*)VAR_2;
        return -1;
    }
    VAR_4 = &VAR_1[VAR_6];


    if (VAR_3 == 0) {
        FUNC_1(VAR_6);
        VAR_4->slab_list[VAR_4->slabs++] = VAR_2;
    }


    if (VAR_5->it_flags == VAR_0) {


        VAR_5->prev = 0;
        VAR_5->next = VAR_4->slots;
        if (VAR_5->next) VAR_5->next->prev = VAR_5;
        VAR_4->slots = VAR_5;

        VAR_4->sl_curr++;

    }

    return VAR_4->size;
}
