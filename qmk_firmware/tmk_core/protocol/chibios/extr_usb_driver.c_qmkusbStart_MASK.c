
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__** in_params; TYPE_2__** out_params; } ;
typedef TYPE_1__ USBDriver ;
struct TYPE_8__ {unsigned int bulk_in; unsigned int bulk_out; unsigned int int_in; TYPE_1__* usbp; } ;
struct TYPE_7__ {scalar_t__ state; TYPE_3__ const* config; } ;
typedef TYPE_2__ QMKUSBDriver ;
typedef TYPE_3__ QMKUSBConfig ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;

void FUNC_4(QMKUSBDriver *VAR_2, const QMKUSBConfig *VAR_3) {
    USBDriver *VAR_4 = VAR_3->usbp;

    FUNC_1(VAR_2 != ((void*)0));

    FUNC_2();
    FUNC_0((VAR_2->state == VAR_1) || (VAR_2->state == VAR_0), "invalid state");
    VAR_4->in_params[VAR_3->bulk_in - 1U] = VAR_2;
    VAR_4->out_params[VAR_3->bulk_out - 1U] = VAR_2;
    if (VAR_3->int_in > 0U) {
        VAR_4->in_params[VAR_3->int_in - 1U] = VAR_2;
    }
    VAR_2->config = VAR_3;
    VAR_2->state = VAR_0;
    FUNC_3();
}
