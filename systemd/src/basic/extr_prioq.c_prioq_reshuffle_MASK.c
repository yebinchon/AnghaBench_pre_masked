
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct prioq_item {int dummy; } ;
struct TYPE_7__ {struct prioq_item* items; } ;
typedef TYPE_1__ Prioq ;


 int FUNC_0 (TYPE_1__*) ;
 struct prioq_item* FUNC_1 (TYPE_1__*,void*,unsigned int*) ;
 unsigned int FUNC_2 (TYPE_1__*,unsigned int) ;
 int FUNC_3 (TYPE_1__*,unsigned int) ;

int FUNC_4(Prioq *VAR_0, void *VAR_1, unsigned *VAR_2) {
        struct prioq_item *VAR_3;
        unsigned VAR_4;

        FUNC_0(VAR_0);

        VAR_3 = FUNC_1(VAR_0, VAR_1, VAR_2);
        if (!VAR_3)
                return 0;

        VAR_4 = VAR_3 - VAR_0->items;
        VAR_4 = FUNC_2(VAR_0, VAR_4);
        FUNC_3(VAR_0, VAR_4);
        return 1;
}
