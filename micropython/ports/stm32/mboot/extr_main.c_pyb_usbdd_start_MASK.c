
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int started; int hUSBDDevice; } ;
typedef TYPE_1__ pyb_usbdd_obj_t ;
struct TYPE_5__ {int CR3; } ;


 TYPE_3__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int *) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_2(pyb_usbdd_obj_t *VAR_4) {
    if (!VAR_4->started) {





        FUNC_0(&VAR_4->hUSBDDevice, 0, VAR_3);
        FUNC_1(&VAR_4->hUSBDDevice);
        VAR_4->started = 1;
    }
}
