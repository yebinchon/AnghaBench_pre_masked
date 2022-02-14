
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {void* data; } ;
struct TYPE_5__ {scalar_t__ n_items; TYPE_3__* items; } ;
typedef TYPE_1__ Prioq ;


 int FUNC_0 (TYPE_1__*,TYPE_3__*) ;

void *FUNC_1(Prioq *VAR_0) {
        void *VAR_1;

        if (!VAR_0)
                return ((void*)0);

        if (VAR_0->n_items <= 0)
                return ((void*)0);

        VAR_1 = VAR_0->items[0].data;
        FUNC_0(VAR_0, VAR_0->items);
        return VAR_1;
}
