
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef unsigned int usbep_t ;
struct TYPE_8__ {TYPE_3__** out_params; } ;
typedef TYPE_2__ USBDriver ;
struct TYPE_9__ {TYPE_1__* config; int ibqueue; } ;
struct TYPE_7__ {int bulk_out; int usbp; } ;
typedef TYPE_3__ QMKUSBDriver ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (int ,int ) ;

void FUNC_6(USBDriver *VAR_1, usbep_t VAR_2) {
    QMKUSBDriver *VAR_3 = VAR_1->out_params[VAR_2 - 1U];
    if (VAR_3 == ((void*)0)) {
        return;
    }

    FUNC_2();


    FUNC_0(VAR_3, VAR_0);


    FUNC_1(&VAR_3->ibqueue, FUNC_5(VAR_3->config->usbp, VAR_3->config->bulk_out));




    (void)FUNC_4(VAR_3);

    FUNC_3();
}
