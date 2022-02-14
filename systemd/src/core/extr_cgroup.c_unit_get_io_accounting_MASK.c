
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_5__ {scalar_t__* io_accounting_last; scalar_t__* io_accounting_base; } ;
typedef TYPE_1__ Unit ;
typedef size_t CGroupIOAccountingMetric ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_1__*,scalar_t__*) ;

int FUNC_2(
                Unit *VAR_4,
                CGroupIOAccountingMetric VAR_5,
                bool VAR_6,
                uint64_t *VAR_7) {

        uint64_t VAR_8[VAR_2];
        int VAR_9;



        if (!FUNC_0(VAR_4, VAR_3))
                return -VAR_0;

        if (VAR_6 && VAR_4->io_accounting_last[VAR_5] != VAR_1)
                goto done;

        VAR_9 = FUNC_1(VAR_4, VAR_8);
        if (VAR_9 == -VAR_0 && VAR_4->io_accounting_last[VAR_5] != VAR_1)
                goto done;
        if (VAR_9 < 0)
                return VAR_9;

        for (CGroupIOAccountingMetric VAR_10 = 0; VAR_10 < VAR_2; VAR_10++) {

                if (VAR_8[VAR_10] > VAR_4->io_accounting_base[VAR_10])
                        VAR_4->io_accounting_last[VAR_10] = VAR_8[VAR_10] - VAR_4->io_accounting_base[VAR_10];
                else
                        VAR_4->io_accounting_last[VAR_10] = 0;
        }

done:
        if (VAR_7)
                *VAR_7 = VAR_4->io_accounting_last[VAR_5];

        return 0;
}
