
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct prioq_item {int n_items; unsigned int* idx; int data; struct prioq_item* items; } ;
typedef struct prioq_item Prioq ;


 int FUNC_0 (struct prioq_item*) ;
 unsigned int FUNC_1 (struct prioq_item*,unsigned int) ;
 int FUNC_2 (struct prioq_item*,unsigned int) ;

__attribute__((used)) static void FUNC_3(Prioq *VAR_0, struct prioq_item *VAR_1) {
        struct prioq_item *VAR_2;

        FUNC_0(VAR_0);
        FUNC_0(VAR_1);

        VAR_2 = VAR_0->items + VAR_0->n_items - 1;

        if (VAR_1 == VAR_2)

                VAR_0->n_items--;
        else {
                unsigned VAR_3;




                VAR_3 = VAR_1 - VAR_0->items;

                VAR_1->data = VAR_2->data;
                VAR_1->idx = VAR_2->idx;
                if (VAR_1->idx)
                        *VAR_1->idx = VAR_3;
                VAR_0->n_items--;

                VAR_3 = FUNC_1(VAR_0, VAR_3);
                FUNC_2(VAR_0, VAR_3);
        }
}
