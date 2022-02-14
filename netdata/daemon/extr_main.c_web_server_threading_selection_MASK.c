
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ start_routine; int enabled; scalar_t__ name; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*,int ) ;
 scalar_t__ VAR_2 ;
 TYPE_1__* VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;

void FUNC_3(void) {
    VAR_4 = FUNC_1(FUNC_0(VAR_0, "mode", FUNC_2(VAR_4)));

    int VAR_5 = (VAR_4 == VAR_1);

    int VAR_6;
    for (VAR_6 = 0; VAR_3[VAR_6].name; VAR_6++) {
        if (VAR_3[VAR_6].start_routine == VAR_2)
            VAR_3[VAR_6].enabled = VAR_5;
    }
}
