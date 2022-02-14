
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int id; TYPE_1__* pClassData; int * pClass; int * pDesc; int dev_state; } ;
struct TYPE_4__ {int started; int tx_pending; TYPE_2__ hUSBDDevice; } ;
typedef TYPE_1__ pyb_usbdd_obj_t ;
typedef TYPE_2__ USBD_HandleTypeDef ;
typedef int USBD_DescriptorsTypeDef ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_0(pyb_usbdd_obj_t *VAR_3, int VAR_4) {
    VAR_3->started = 0;
    VAR_3->tx_pending = 0;
    USBD_HandleTypeDef *VAR_5 = &VAR_3->hUSBDDevice;
    VAR_5->id = VAR_4;
    VAR_5->dev_state = VAR_0;
    VAR_5->pDesc = (USBD_DescriptorsTypeDef*)&VAR_2;
    VAR_5->pClass = &VAR_1;
    VAR_5->pClassData = VAR_3;
}
