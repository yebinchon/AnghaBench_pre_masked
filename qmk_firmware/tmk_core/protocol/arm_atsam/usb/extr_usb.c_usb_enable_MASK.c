
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ reg; } ;
struct TYPE_4__ {int reg; } ;
struct TYPE_6__ {TYPE_2__ SYNCBUSY; TYPE_1__ CTRLA; } ;
struct usb_module {TYPE_3__ DEVICE; struct usb_module* hw; } ;


 int FUNC_0 (struct usb_module*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;

void FUNC_1(struct usb_module *VAR_2) {
    FUNC_0(VAR_2);
    FUNC_0(VAR_2->hw);

    VAR_2->hw->DEVICE.CTRLA.reg |= VAR_0;
    while (VAR_2->hw->DEVICE.SYNCBUSY.reg == VAR_1)
        ;
}
