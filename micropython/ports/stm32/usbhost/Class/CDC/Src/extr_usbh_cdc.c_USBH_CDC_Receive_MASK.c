
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int USBH_StatusTypeDef ;
struct TYPE_6__ {TYPE_1__* pActiveClass; } ;
typedef TYPE_2__ USBH_HandleTypeDef ;
struct TYPE_7__ {scalar_t__ state; int data_rx_state; int RxDataLength; int * pRxData; } ;
struct TYPE_5__ {TYPE_3__* pData; } ;
typedef TYPE_3__ CDC_HandleTypeDef ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

USBH_StatusTypeDef FUNC_0(USBH_HandleTypeDef *VAR_5, uint8_t *VAR_6, uint32_t VAR_7)
{
  USBH_StatusTypeDef VAR_8 = VAR_3;
  CDC_HandleTypeDef *VAR_9 = VAR_5->pActiveClass->pData;

  if((VAR_9->state == VAR_0) || (VAR_9->state == VAR_2))
  {
    VAR_9->pRxData = VAR_6;
    VAR_9->RxDataLength = VAR_7;
    VAR_9->state = VAR_2;
    VAR_9->data_rx_state = VAR_1;
    VAR_8 = VAR_4;
  }
  return VAR_8;
}
