
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef struct usb_module* usb_device_callback_t ;
struct usb_module {int device_registered_callback_mask; struct usb_module** device_callback; } ;
typedef enum usb_device_callback { ____Placeholder_usb_device_callback } usb_device_callback ;
typedef enum status_code { ____Placeholder_status_code } status_code ;


 int FUNC_0 (struct usb_module*) ;
 int VAR_0 ;
 int * VAR_1 ;

enum status_code FUNC_1(struct usb_module *VAR_2, enum usb_device_callback VAR_3, usb_device_callback_t VAR_4) {

    FUNC_0(VAR_2);
    FUNC_0(VAR_4);


    VAR_2->device_callback[VAR_3] = VAR_4;


    VAR_2->device_registered_callback_mask |= VAR_1[VAR_3];

    return VAR_0;
}
