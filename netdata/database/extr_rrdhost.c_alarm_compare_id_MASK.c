
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_2__ {scalar_t__ id; } ;
typedef TYPE_1__ RRDCALC ;



int FUNC_0(void *VAR_0, void *VAR_1) {
    register uint32_t VAR_2 = ((RRDCALC *)VAR_0)->id;
    register uint32_t VAR_3 = ((RRDCALC *)VAR_1)->id;

    if(VAR_2 < VAR_3) return -1;
    else if(VAR_2 > VAR_3) return 1;

    return 0;
}
