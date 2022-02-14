
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
typedef int USBH_URBStateTypeDef ;
struct TYPE_12__ {TYPE_1__* pActiveClass; } ;
typedef TYPE_3__ USBH_HandleTypeDef ;
struct TYPE_11__ {scalar_t__ InEpSize; int InPipe; } ;
struct TYPE_13__ {int data_rx_state; scalar_t__ pRxData; scalar_t__ RxDataLength; TYPE_2__ DataItf; } ;
struct TYPE_10__ {TYPE_4__* pData; } ;
typedef TYPE_4__ CDC_HandleTypeDef ;


 int VAR_0 ;


 int FUNC_0 (TYPE_3__*,scalar_t__,scalar_t__,int ) ;
 int FUNC_1 (TYPE_3__*) ;
 scalar_t__ FUNC_2 (TYPE_3__*,int ) ;
 int FUNC_3 (TYPE_3__*,int ) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_4(USBH_HandleTypeDef *VAR_3)
{
  CDC_HandleTypeDef *VAR_4 = VAR_3->pActiveClass->pData;
  USBH_URBStateTypeDef VAR_5 = VAR_2;
  uint16_t VAR_6;

  switch(VAR_4->data_rx_state)
  {

  case 129:

    FUNC_0 (VAR_3,
                          VAR_4->pRxData,
                          VAR_4->DataItf.InEpSize,
                          VAR_4->DataItf.InPipe);

    VAR_4->data_rx_state = 128;

    break;

  case 128:

    VAR_5 = FUNC_3(VAR_3, VAR_4->DataItf.InPipe);


    if(VAR_5 == VAR_1 )
    {
      VAR_6 = FUNC_2(VAR_3, VAR_4->DataItf.InPipe);

      if(((VAR_4->RxDataLength - VAR_6) > 0) && (VAR_6 > VAR_4->DataItf.InEpSize))
      {
        VAR_4->RxDataLength -= VAR_6 ;
        VAR_4->pRxData += VAR_6;
        VAR_4->data_rx_state = 129;
      }
      else
      {
        VAR_4->data_rx_state = VAR_0;
        FUNC_1(VAR_3);
      }
    }
    break;

  default:
    break;
  }
}
