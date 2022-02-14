
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_module {int dummy; } ;
struct usb_endpoint_callback_parameter {int received_bytes; } ;
struct TYPE_3__ {scalar_t__ wLength; } ;
struct TYPE_4__ {TYPE_1__ req; int (* callback ) () ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int VAR_4 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 scalar_t__ VAR_7 ;
 TYPE_2__ VAR_8 ;
 int VAR_9 ;
 int FUNC_7 (int *,int ,int ,int ) ;

__attribute__((used)) static void FUNC_8(struct usb_module *VAR_10, void *VAR_11) {
    struct usb_endpoint_callback_parameter *VAR_12 = (struct usb_endpoint_callback_parameter *)VAR_11;

    if (VAR_2 != VAR_7) {
        if (((void*)0) != VAR_8.callback) {
            VAR_8.callback();
        }
        VAR_7 = VAR_2;
    }
    if (8 != VAR_12->received_bytes) {
        FUNC_6();
        return;
    } else {
        FUNC_3();
        if (0 == FUNC_2()) {
            FUNC_6();
            return;
        } else if (FUNC_0()) {
            VAR_6 = 0;
            VAR_5 = 0;
            VAR_7 = VAR_0;
            FUNC_7(&VAR_9, 0, VAR_4, VAR_3);
            FUNC_4();
        } else {
            if (0 == VAR_8.req.wLength) {
                FUNC_5();
                return;
            } else {
                VAR_6 = 0;
                VAR_5 = 0;
                VAR_7 = VAR_1;

                FUNC_7(&VAR_9, 0, VAR_4, VAR_3);
            }
        }
    }
}
