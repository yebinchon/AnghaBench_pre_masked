
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_7__ {scalar_t__ bsize; } ;
struct TYPE_6__ {scalar_t__ state; TYPE_4__ ibqueue; TYPE_1__* config; } ;
struct TYPE_5__ {int bulk_out; int usbp; int bulk_in; } ;
typedef TYPE_2__ QMKUSBDriver ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int * FUNC_0 (TYPE_4__*) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int *,scalar_t__) ;

__attribute__((used)) static bool FUNC_4(QMKUSBDriver *VAR_2) {
    uint8_t *VAR_3;



    if ((FUNC_1(VAR_2->config->usbp) != VAR_1) || (VAR_2->state != VAR_0)) {
        return 1;
    }


    if (FUNC_2(VAR_2->config->usbp, VAR_2->config->bulk_in)) {
        return 1;
    }


    VAR_3 = FUNC_0(&VAR_2->ibqueue);
    if (VAR_3 == ((void*)0)) {
        return 1;
    }


    FUNC_3(VAR_2->config->usbp, VAR_2->config->bulk_out, VAR_3, VAR_2->ibqueue.bsize - sizeof(size_t));

    return 0;
}
