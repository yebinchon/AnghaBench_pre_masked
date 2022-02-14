
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_7__ {int tx_pending; int tx_buf; int hUSBDDevice; int wLength; int wValue; int bRequest; int rx_buf; } ;
typedef TYPE_1__ pyb_usbdd_obj_t ;
struct TYPE_8__ {int bmRequest; int wLength; int wValue; int bRequest; } ;
typedef TYPE_2__ USBD_SetupReqTypedef ;
struct TYPE_9__ {scalar_t__ pClassData; } ;
typedef TYPE_3__ USBD_HandleTypeDef ;


 int FUNC_0 (TYPE_3__*,int ,int ) ;
 int FUNC_1 (int *,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,int ,int ,int *) ;
 int FUNC_3 (int ,int ,int ,int ,int ) ;

__attribute__((used)) static uint8_t FUNC_4(USBD_HandleTypeDef *VAR_2, USBD_SetupReqTypedef *VAR_3) {
    pyb_usbdd_obj_t *VAR_4 = (pyb_usbdd_obj_t*)VAR_2->pClassData;
    (void)VAR_4;
    VAR_4->bRequest = VAR_3->bRequest;
    VAR_4->wValue = VAR_3->wValue;
    VAR_4->wLength = VAR_3->wLength;
    if (VAR_3->bmRequest == 0x21) {

        if (VAR_3->wLength == 0) {

            FUNC_2(VAR_4->bRequest, VAR_4->wValue, 0, ((void*)0));
        } else {

            FUNC_0(VAR_2, VAR_4->rx_buf, VAR_3->wLength);
        }
    } else if (VAR_3->bmRequest == 0xa1) {

        int VAR_5 = FUNC_3(VAR_4->bRequest, VAR_4->wValue, VAR_4->wLength, VAR_4->tx_buf, VAR_1);
        if (VAR_5 >= 0) {
            VAR_4->tx_pending = 1;
            FUNC_1(&VAR_4->hUSBDDevice, VAR_4->tx_buf, VAR_5);
        }
    }
    return VAR_0;
}
