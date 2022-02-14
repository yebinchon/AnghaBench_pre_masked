
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int rx_buf; int wLength; int wValue; int bRequest; } ;
typedef TYPE_1__ pyb_usbdd_obj_t ;
struct TYPE_5__ {scalar_t__ pClassData; } ;
typedef TYPE_2__ USBD_HandleTypeDef ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ) ;

__attribute__((used)) static uint8_t FUNC_1(USBD_HandleTypeDef *VAR_1) {
    pyb_usbdd_obj_t *VAR_2 = (pyb_usbdd_obj_t*)VAR_1->pClassData;
    FUNC_0(VAR_2->bRequest, VAR_2->wValue, VAR_2->wLength, VAR_2->rx_buf);
    return VAR_0;
}
