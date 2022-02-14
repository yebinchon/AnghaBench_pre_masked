
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ hash; int name; } ;
typedef TYPE_1__ RRDCALC ;


 int FUNC_0 (int ,int ) ;

int FUNC_1(void *VAR_0, void *VAR_1) {
    RRDCALC *VAR_2 = (RRDCALC *)VAR_0;
    RRDCALC *VAR_3 = (RRDCALC *)VAR_1;

    if(VAR_2->hash < VAR_3->hash) return -1;
    else if(VAR_2->hash > VAR_3->hash) return 1;

    return FUNC_0(VAR_2->name,VAR_3->name);
}
