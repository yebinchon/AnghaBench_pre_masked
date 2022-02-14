
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int io_accounting_base; int * io_accounting_last; } ;
typedef TYPE_1__ Unit ;
typedef size_t CGroupIOAccountingMetric ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (int ) ;

int FUNC_3(Unit *VAR_2) {
        int VAR_3;

        FUNC_0(VAR_2);

        for (CGroupIOAccountingMetric VAR_4 = 0; VAR_4 < VAR_1; VAR_4++)
                VAR_2->io_accounting_last[VAR_4] = VAR_0;

        VAR_3 = FUNC_1(VAR_2, VAR_2->io_accounting_base);
        if (VAR_3 < 0) {
                FUNC_2(VAR_2->io_accounting_base);
                return VAR_3;
        }

        return 0;
}
