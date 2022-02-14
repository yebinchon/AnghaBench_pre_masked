
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_endpoint_callback_parameter {int endpoint_address; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ) ;

__attribute__((used)) static void FUNC_1(void *VAR_5) {
    struct usb_endpoint_callback_parameter *VAR_6 = (struct usb_endpoint_callback_parameter *)VAR_5;

    if (VAR_0 == VAR_3) {


        VAR_3 = VAR_2;
    } else if (VAR_1 == VAR_3) {


        FUNC_0(&VAR_4, VAR_6->endpoint_address);
    }
}
