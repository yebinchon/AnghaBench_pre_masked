
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_12__ {TYPE_4__* PCHCTRL; } ;
struct TYPE_7__ {int ADC0_; } ;
struct TYPE_8__ {TYPE_1__ bit; } ;
struct TYPE_11__ {TYPE_2__ APBDMASK; } ;
struct TYPE_9__ {int CHEN; int GEN; } ;
struct TYPE_10__ {TYPE_3__ bit; } ;


 size_t VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_6__* VAR_3 ;
 int VAR_4 ;
 TYPE_5__* VAR_5 ;

void FUNC_1(void) {
    FUNC_0(VAR_1);

    VAR_5->APBDMASK.bit.ADC0_ = 1;

    VAR_3->PCHCTRL[VAR_0].bit.GEN = VAR_4;
    VAR_3->PCHCTRL[VAR_0].bit.CHEN = 1;

    FUNC_0(VAR_2);
}
