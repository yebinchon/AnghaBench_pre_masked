
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ nsec_t ;
struct TYPE_6__ {scalar_t__ cpu_usage_last; scalar_t__ cpu_usage_base; } ;
typedef TYPE_1__ Unit ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_2 ;
 int FUNC_2 (TYPE_1__*,scalar_t__*) ;

int FUNC_3(Unit *VAR_3, nsec_t *VAR_4) {
        nsec_t VAR_5;
        int VAR_6;

        FUNC_1(VAR_3);





        if (!FUNC_0(VAR_3, VAR_2))
                return -VAR_0;

        VAR_6 = FUNC_2(VAR_3, &VAR_5);
        if (VAR_6 == -VAR_0 && VAR_3->cpu_usage_last != VAR_1) {



                if (VAR_4)
                        *VAR_4 = VAR_3->cpu_usage_last;
                return 0;
        }
        if (VAR_6 < 0)
                return VAR_6;

        if (VAR_5 > VAR_3->cpu_usage_base)
                VAR_5 -= VAR_3->cpu_usage_base;
        else
                VAR_5 = 0;

        VAR_3->cpu_usage_last = VAR_5;
        if (VAR_4)
                *VAR_4 = VAR_5;

        return 0;
}
