
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* init ) () ;scalar_t__ name; int hash; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 () ;

void FUNC_2(void) {
    int VAR_1;

    for(VAR_1 = 0; VAR_0[VAR_1].name ; VAR_1++) {
        VAR_0[VAR_1].hash = FUNC_0(VAR_0[VAR_1].name);

        if(VAR_0[VAR_1].init)
            VAR_0[VAR_1].init();
    }
}
