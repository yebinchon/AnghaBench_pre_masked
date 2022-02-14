
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
typedef int avl ;
struct TYPE_6__ {char* name; int hash; } ;
struct TYPE_5__ {int alarms_idx_name; } ;
typedef TYPE_1__ RRDHOST ;
typedef TYPE_2__ RRDCALC ;


 scalar_t__ FUNC_0 (int *,int *) ;

RRDCALC *FUNC_1(RRDHOST *VAR_0, char *VAR_1,uint32_t VAR_2) {
    RRDCALC VAR_3;
    VAR_3.name = VAR_1;
    VAR_3.hash = VAR_2;
    RRDCALC *VAR_4 = (RRDCALC *)FUNC_0(&VAR_0->alarms_idx_name, (avl *)&VAR_3);

    return VAR_4;
}
