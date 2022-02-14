
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_endpoint_callback_parameter {int endpoint_address; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 () ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static void FUNC_2(void *VAR_4) {
    struct usb_endpoint_callback_parameter *VAR_5 = (struct usb_endpoint_callback_parameter *)VAR_4;

    if (VAR_0 == VAR_2) {


        FUNC_0();
    } else if (VAR_1 == VAR_2) {


        FUNC_1(&VAR_3, VAR_5->endpoint_address);
    }
}
