
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int io_buffers_queue_t ;
struct TYPE_5__ {scalar_t__ state; TYPE_1__* config; int obqueue; } ;
struct TYPE_4__ {int bulk_in; int usbp; } ;
typedef TYPE_2__ QMKUSBDriver ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_2__* FUNC_0 (int *) ;
 int * FUNC_1 (int *,size_t*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int *,size_t) ;

__attribute__((used)) static void FUNC_5(io_buffers_queue_t *VAR_2) {
    size_t VAR_3;
    QMKUSBDriver *VAR_4 = FUNC_0(VAR_2);



    if ((FUNC_2(VAR_4->config->usbp) != VAR_1) || (VAR_4->state != VAR_0)) {
        return;
    }


    if (!FUNC_3(VAR_4->config->usbp, VAR_4->config->bulk_in)) {

        uint8_t *VAR_5 = FUNC_1(&VAR_4->obqueue, &VAR_3);
        if (VAR_5 != ((void*)0)) {

            FUNC_4(VAR_4->config->usbp, VAR_4->config->bulk_in, VAR_5, VAR_3);
        }
    }
}
