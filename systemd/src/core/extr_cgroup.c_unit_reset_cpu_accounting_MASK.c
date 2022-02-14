
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ cpu_usage_base; int cpu_usage_last; } ;
typedef TYPE_1__ Unit ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,scalar_t__*) ;

int FUNC_2(Unit *VAR_1) {
        int VAR_2;

        FUNC_0(VAR_1);

        VAR_1->cpu_usage_last = VAR_0;

        VAR_2 = FUNC_1(VAR_1, &VAR_1->cpu_usage_base);
        if (VAR_2 < 0) {
                VAR_1->cpu_usage_base = 0;
                return VAR_2;
        }

        return 0;
}
