
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct usb_module {int dummy; } ;
struct usb_device_endpoint_config {int ep_size; } ;
typedef enum usb_endpoint_size { ____Placeholder_usb_endpoint_size } usb_endpoint_size ;


 int FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (struct usb_module*,int ,int ) ;
 int FUNC_4 (struct usb_device_endpoint_config*) ;
 int FUNC_5 (struct usb_module*,int ,int ,int ) ;
 int FUNC_6 (struct usb_module*,struct usb_device_endpoint_config*) ;
 int FUNC_7 (struct usb_module*,int ) ;
 int FUNC_8 (struct usb_module*,int ) ;

__attribute__((used)) static void FUNC_9(struct usb_module *VAR_11) {

    struct usb_device_endpoint_config VAR_12;

    FUNC_4(&VAR_12);
    VAR_12 = (enum usb_endpoint_size)(32 - FUNC_2(((uint32_t)FUNC_1(FUNC_0(VAR_4, 8), 1024) << 1) - 1) - 1 - 3);
    FUNC_6(VAR_11, &VAR_12);

    FUNC_7(VAR_11, VAR_9);

    FUNC_5(VAR_11, 0, VAR_1, VAR_6);
    FUNC_5(VAR_11, 0, VAR_2, VAR_8);
    FUNC_5(VAR_11, 0, VAR_3, VAR_7);
    FUNC_3(VAR_11, 0, VAR_1);
    FUNC_3(VAR_11, 0, VAR_2);
    FUNC_3(VAR_11, 0, VAR_3);






    VAR_10 = VAR_0;
}
