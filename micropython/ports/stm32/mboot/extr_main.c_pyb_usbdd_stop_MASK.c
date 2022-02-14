
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int started; int hUSBDDevice; } ;
typedef TYPE_1__ pyb_usbdd_obj_t ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(pyb_usbdd_obj_t *VAR_0) {
    if (VAR_0->started) {
        FUNC_0(&VAR_0->hUSBDDevice);
        VAR_0->started = 0;
    }
}
