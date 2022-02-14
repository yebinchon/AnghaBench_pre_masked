
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int reg; } ;
struct TYPE_4__ {TYPE_1__ INTENCLR; } ;
struct usb_module {TYPE_2__ DEVICE; struct usb_module* hw; int device_enabled_callback_mask; } ;
typedef enum usb_device_callback { ____Placeholder_usb_device_callback } usb_device_callback ;
typedef enum status_code { ____Placeholder_status_code } status_code ;


 int FUNC_0 (struct usb_module*) ;
 int VAR_0 ;
 int * VAR_1 ;

enum status_code FUNC_1(struct usb_module *VAR_2, enum usb_device_callback VAR_3) {

    FUNC_0(VAR_2);
    FUNC_0(VAR_2->hw);


    VAR_2->device_enabled_callback_mask &= ~VAR_1[VAR_3];

    VAR_2->hw->DEVICE.INTENCLR.reg = VAR_1[VAR_3];

    return VAR_0;
}
