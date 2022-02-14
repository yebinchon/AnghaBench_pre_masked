
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int ** in_params; int ** out_params; } ;
typedef TYPE_2__ USBDriver ;
struct TYPE_8__ {scalar_t__ state; int obqueue; int ibqueue; TYPE_1__* config; } ;
struct TYPE_6__ {unsigned int bulk_in; unsigned int bulk_out; unsigned int int_in; TYPE_2__* usbp; } ;
typedef TYPE_3__ QMKUSBDriver ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_3__*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int,char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;

void FUNC_8(QMKUSBDriver *VAR_3) {
    USBDriver *VAR_4 = VAR_3->config->usbp;

    FUNC_4(VAR_3 != ((void*)0));

    FUNC_6();

    FUNC_3((VAR_3->state == VAR_2) || (VAR_3->state == VAR_1), "invalid state");


    VAR_4->in_params[VAR_3->config->bulk_in - 1U] = ((void*)0);
    VAR_4->out_params[VAR_3->config->bulk_out - 1U] = ((void*)0);
    if (VAR_3->config->int_in > 0U) {
        VAR_4->in_params[VAR_3->config->int_in - 1U] = ((void*)0);
    }
    VAR_3->config = ((void*)0);
    VAR_3->state = VAR_2;


    FUNC_0(VAR_3, VAR_0);
    FUNC_1(&VAR_3->ibqueue);
    FUNC_2(&VAR_3->obqueue);
    FUNC_5();

    FUNC_7();
}
