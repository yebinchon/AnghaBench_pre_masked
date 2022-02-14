
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct usb_module {TYPE_3__* hw; } ;
struct TYPE_4__ {int reg; } ;
struct TYPE_5__ {TYPE_1__ CTRLB; } ;
struct TYPE_6__ {TYPE_2__ DEVICE; } ;


 int VAR_0 ;

__attribute__((used)) static inline void FUNC_0(struct usb_module *VAR_1) { VAR_1->hw->DEVICE.CTRLB.reg |= VAR_0; }
