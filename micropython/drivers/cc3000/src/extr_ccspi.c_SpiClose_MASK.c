
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ pRxPacket; } ;
struct TYPE_3__ {int (* WlanInterruptDisable ) () ;} ;


 TYPE_2__ VAR_0 ;
 int FUNC_0 () ;
 TYPE_1__ VAR_1 ;

void FUNC_1(void)
{
    if (VAR_0.pRxPacket) {
        VAR_0.pRxPacket = 0;
    }

    VAR_1.WlanInterruptDisable();


}
