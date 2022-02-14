
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device_endpoint_config {int auto_zlp; int ep_type; int ep_size; scalar_t__ ep_address; } ;


 int FUNC_0 (struct usb_device_endpoint_config*) ;
 int VAR_0 ;
 int VAR_1 ;

void FUNC_1(struct usb_device_endpoint_config *VAR_2) {

    FUNC_0(VAR_2);


    VAR_2->ep_address = 0;
    VAR_2->ep_size = VAR_1;
    VAR_2->auto_zlp = 0;
    VAR_2->ep_type = VAR_0;
}
