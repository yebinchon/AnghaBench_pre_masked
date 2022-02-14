
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ READY; int CONFIG; } ;
struct TYPE_3__ {int REGOUT0; } ;


 TYPE_2__* VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 () ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 () ;

void FUNC_2(void)
{
    if (FUNC_1()) {


        while (VAR_0->READY != VAR_4);


        VAR_0->CONFIG = VAR_3;
        while (VAR_0->READY != VAR_4);


        VAR_1->REGOUT0 = (VAR_5 & VAR_6) << VAR_7;
        while (VAR_0->READY != VAR_4);


        VAR_0->CONFIG = VAR_2;
        while (VAR_0->READY != VAR_4);


        FUNC_0();
    }
}
