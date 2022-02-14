
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct prioq_item {int dummy; } ;
typedef int Prioq ;


 struct prioq_item* FUNC_0 (int *,void*,unsigned int*) ;
 int FUNC_1 (int *,struct prioq_item*) ;

int FUNC_2(Prioq *VAR_0, void *VAR_1, unsigned *VAR_2) {
        struct prioq_item *VAR_3;

        if (!VAR_0)
                return 0;

        VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2);
        if (!VAR_3)
                return 0;

        FUNC_1(VAR_0, VAR_3);
        return 1;
}
