
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct usb_module {TYPE_3__* hw; } ;
typedef enum usb_speed { ____Placeholder_usb_speed } usb_speed ;
struct TYPE_4__ {int reg; } ;
struct TYPE_5__ {TYPE_1__ STATUS; } ;
struct TYPE_6__ {TYPE_2__ DEVICE; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static inline enum usb_speed FUNC_0(struct usb_module *VAR_3) {
    if (!(VAR_3->hw->DEVICE.STATUS.reg & VAR_0)) {
        return VAR_1;
    } else {
        return VAR_2;
    }
}
