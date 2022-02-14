
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_config {int run_in_standby; int speed_mode; scalar_t__ source_generator; scalar_t__ select_host_mode; } ;


 int FUNC_0 (struct usb_config*) ;
 int VAR_0 ;

void FUNC_1(struct usb_config *VAR_1) {
    FUNC_0(VAR_1);


    FUNC_0(VAR_1);

    VAR_1->select_host_mode = 0;
    VAR_1->run_in_standby = 1;
    VAR_1->source_generator = 0;
    VAR_1->speed_mode = VAR_0;
}
