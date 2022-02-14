
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {unsigned int n_items; TYPE_1__* items; } ;
struct TYPE_4__ {void* data; } ;
typedef TYPE_2__ Prioq ;



void *FUNC_0(Prioq *VAR_0, unsigned VAR_1) {
        if (!VAR_0)
                return ((void*)0);

        if (VAR_1 >= VAR_0->n_items)
                return ((void*)0);

        return VAR_0->items[VAR_1].data;
}
