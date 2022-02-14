
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ reg; } ;
struct TYPE_6__ {int reg; } ;
struct TYPE_9__ {int reg; } ;
struct TYPE_8__ {int reg; } ;
struct TYPE_10__ {TYPE_2__ SYNCBUSY; TYPE_1__ CTRLA; TYPE_4__ INTFLAG; TYPE_3__ INTENCLR; } ;
struct usb_module {TYPE_5__ DEVICE; struct usb_module* hw; } ;


 int FUNC_0 (struct usb_module*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;

void FUNC_1(struct usb_module *VAR_4) {
    FUNC_0(VAR_4);
    FUNC_0(VAR_4->hw);

    VAR_4->hw->DEVICE.INTENCLR.reg = VAR_1;
    VAR_4->hw->DEVICE.INTFLAG.reg = VAR_2;
    VAR_4->hw->DEVICE.CTRLA.reg &= ~VAR_0;
    while (VAR_4->hw->DEVICE.SYNCBUSY.reg == VAR_3)
        ;
}
