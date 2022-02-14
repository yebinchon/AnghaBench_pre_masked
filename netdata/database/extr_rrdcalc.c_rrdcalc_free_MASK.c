
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int spdim; struct TYPE_4__* info; struct TYPE_4__* units; struct TYPE_4__* source; struct TYPE_4__* recipient; struct TYPE_4__* exec; struct TYPE_4__* foreachdim; struct TYPE_4__* dimensions; struct TYPE_4__* family; struct TYPE_4__* chart; struct TYPE_4__* name; int critical; int warning; int calculation; } ;
typedef TYPE_1__ RRDCALC ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int) ;

void FUNC_4(RRDCALC *VAR_0) {
    if(FUNC_3(!VAR_0)) return;

    FUNC_0(VAR_0->calculation);
    FUNC_0(VAR_0->warning);
    FUNC_0(VAR_0->critical);

    FUNC_1(VAR_0->name);
    FUNC_1(VAR_0->chart);
    FUNC_1(VAR_0->family);
    FUNC_1(VAR_0->dimensions);
    FUNC_1(VAR_0->foreachdim);
    FUNC_1(VAR_0->exec);
    FUNC_1(VAR_0->recipient);
    FUNC_1(VAR_0->source);
    FUNC_1(VAR_0->units);
    FUNC_1(VAR_0->info);
    FUNC_2(VAR_0->spdim);
    FUNC_1(VAR_0);
}
