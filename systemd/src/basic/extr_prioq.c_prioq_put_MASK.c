
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct prioq_item {unsigned int* idx; void* data; } ;
struct TYPE_5__ {unsigned int n_items; unsigned int n_allocated; struct prioq_item* items; } ;
typedef TYPE_1__ Prioq ;


 int VAR_0 ;
 unsigned int FUNC_0 (int,unsigned int) ;
 int FUNC_1 (TYPE_1__*) ;
 struct prioq_item* FUNC_2 (struct prioq_item*,unsigned int,int) ;
 int FUNC_3 (TYPE_1__*,unsigned int) ;

int FUNC_4(Prioq *VAR_1, void *VAR_2, unsigned *VAR_3) {
        struct prioq_item *VAR_4;
        unsigned VAR_5;

        FUNC_1(VAR_1);

        if (VAR_1->n_items >= VAR_1->n_allocated) {
                unsigned VAR_6;
                struct prioq_item *VAR_7;

                VAR_6 = FUNC_0((VAR_1->n_items+1) * 2, 16u);
                VAR_7 = FUNC_2(VAR_1->items, VAR_6, sizeof(struct prioq_item));
                if (!VAR_7)
                        return -VAR_0;

                VAR_1->items = VAR_7;
                VAR_1->n_allocated = VAR_6;
        }

        VAR_5 = VAR_1->n_items++;
        VAR_4 = VAR_1->items + VAR_5;
        VAR_4->data = VAR_2;
        VAR_4->idx = VAR_3;

        if (VAR_3)
                *VAR_3 = VAR_5;

        FUNC_3(VAR_1, VAR_5);

        return 0;
}
