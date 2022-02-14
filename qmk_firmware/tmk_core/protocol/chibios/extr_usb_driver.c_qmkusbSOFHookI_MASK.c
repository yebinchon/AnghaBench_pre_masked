
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {scalar_t__ state; TYPE_1__* config; int obqueue; } ;
struct TYPE_4__ {size_t in_size; int bulk_in; int usbp; scalar_t__ fixed_size; } ;
typedef TYPE_2__ QMKUSBDriver ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int ,size_t) ;
 int * FUNC_1 (int *,size_t*) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int ,char*) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ,int *,size_t) ;

void FUNC_7(QMKUSBDriver *VAR_2) {


    if ((FUNC_4(VAR_2->config->usbp) != VAR_1) || (VAR_2->state != VAR_0)) {
        return;
    }



    if (FUNC_5(VAR_2->config->usbp, VAR_2->config->bulk_in)) {
        return;
    }



    if (FUNC_2(&VAR_2->obqueue)) {
        size_t VAR_3;
        uint8_t *VAR_4 = FUNC_1(&VAR_2->obqueue, &VAR_3);


        if (VAR_2->config->fixed_size) {
            FUNC_0(VAR_4 + VAR_3, 0, VAR_2->config->in_size - VAR_3);
            VAR_3 = VAR_2->config->in_size;
        }

        FUNC_3(VAR_4 != ((void*)0), "queue is empty");

        FUNC_6(VAR_2->config->usbp, VAR_2->config->bulk_in, VAR_4, VAR_3);
    }
}
