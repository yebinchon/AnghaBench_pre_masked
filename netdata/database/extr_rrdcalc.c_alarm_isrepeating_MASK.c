
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
typedef int avl ;
struct TYPE_6__ {int id; } ;
struct TYPE_5__ {int alarms_idx_health_log; } ;
typedef TYPE_1__ RRDHOST ;
typedef TYPE_2__ RRDCALC ;


 scalar_t__ FUNC_0 (int *,int *) ;
 int FUNC_1 (TYPE_2__*) ;

int FUNC_2(RRDHOST *VAR_0, uint32_t VAR_1) {
    RRDCALC VAR_2;
    VAR_2.id = VAR_1;
    RRDCALC *VAR_3 = (RRDCALC *)FUNC_0(&VAR_0->alarms_idx_health_log, (avl *)&VAR_2);
    if (!VAR_3) {
        return 0;
    }
    return FUNC_1(VAR_3);
}
