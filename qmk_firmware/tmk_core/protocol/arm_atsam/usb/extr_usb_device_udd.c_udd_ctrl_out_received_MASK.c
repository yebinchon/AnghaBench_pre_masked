
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint16_t ;
struct usb_endpoint_callback_parameter {scalar_t__ received_bytes; } ;
struct TYPE_3__ {scalar_t__ wLength; } ;
struct TYPE_4__ {scalar_t__ payload_size; scalar_t__ payload; int (* over_under_run ) () ;TYPE_1__ req; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int ,scalar_t__) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_3 () ;
 int VAR_5 ;
 int FUNC_4 (int ) ;
 TYPE_2__ VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (int *,int ,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_6(void *VAR_8) {
    struct usb_endpoint_callback_parameter *VAR_9 = (struct usb_endpoint_callback_parameter *)VAR_8;

    uint16_t VAR_10;
    VAR_10 = VAR_9->received_bytes;

    if (VAR_6.payload_size < (VAR_3 + VAR_10)) {

        VAR_10 = VAR_6.payload_size - VAR_3;
    }

    FUNC_0((uint8_t *)(VAR_6.payload + VAR_3), VAR_2, VAR_10);
    VAR_3 += VAR_10;

    if ((VAR_1 != VAR_10) || (VAR_6.req.wLength <= (VAR_4 + VAR_3))) {





        VAR_6.payload_size = VAR_3;
        if (((void*)0) != VAR_6.over_under_run) {
            if (!VAR_6.over_under_run()) {

                VAR_5 = VAR_0;

                FUNC_4(0);

                return;
            }
        }

        FUNC_3();
        return;
    }

    if (VAR_6.payload_size == VAR_3) {

        if (!VAR_6.over_under_run) {


            VAR_5 = VAR_0;

            FUNC_4(0);
            return;
        }
        if (!VAR_6.over_under_run()) {


            VAR_5 = VAR_0;

            FUNC_4(0);
            return;
        }


        VAR_4 += VAR_3;


        VAR_3 = 0;
    }
    FUNC_5(&VAR_7, 0, VAR_2, VAR_1);
}
