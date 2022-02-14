
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int udd_ep_id_t ;
struct usb_module {int dummy; } ;
struct usb_endpoint_callback_parameter {int endpoint_address; } ;


 int VAR_0 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (void*) ;

__attribute__((used)) static void FUNC_2(struct usb_module *VAR_1, void *VAR_2) {
    struct usb_endpoint_callback_parameter *VAR_3 = (struct usb_endpoint_callback_parameter *)VAR_2;
    udd_ep_id_t VAR_4 = VAR_3->endpoint_address;

    if (VAR_4 & VAR_0) {
        FUNC_0(VAR_2);
    } else {
        FUNC_1(VAR_2);
    }
}
