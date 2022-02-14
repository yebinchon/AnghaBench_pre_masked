
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int USBH_URBStateTypeDef ;
struct TYPE_11__ {TYPE_1__* pActiveClass; } ;
typedef TYPE_3__ USBH_HandleTypeDef ;
struct TYPE_10__ {int OutEpSize; int OutPipe; } ;
struct TYPE_12__ {int data_tx_state; int TxDataLength; TYPE_2__ DataItf; int pTxData; } ;
struct TYPE_9__ {TYPE_4__* pData; } ;
typedef TYPE_4__ CDC_HandleTypeDef ;


 int VAR_0 ;


 int FUNC_0 (TYPE_3__*,int ,int ,int ,int) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_3(USBH_HandleTypeDef *VAR_4)
{
  CDC_HandleTypeDef *VAR_5 = VAR_4->pActiveClass->pData;
  USBH_URBStateTypeDef VAR_6 = VAR_2;

  switch(VAR_5->data_tx_state)
  {

  case 129:
    if(VAR_5->TxDataLength > VAR_5->DataItf.OutEpSize)
    {
      FUNC_0 (VAR_4,
                         VAR_5->pTxData,
                         VAR_5->DataItf.OutEpSize,
                         VAR_5->DataItf.OutPipe,
                         1);
    }
    else
    {
      FUNC_0 (VAR_4,
                         VAR_5->pTxData,
                         VAR_5->TxDataLength,
                         VAR_5->DataItf.OutPipe,
                         1);
    }

    VAR_5->data_tx_state = 128;

    break;

  case 128:

    VAR_6 = FUNC_2(VAR_4, VAR_5->DataItf.OutPipe);


    if(VAR_6 == VAR_1 )
    {
      if(VAR_5->TxDataLength > VAR_5->DataItf.OutEpSize)
      {
        VAR_5->TxDataLength -= VAR_5->DataItf.OutEpSize ;
        VAR_5->pTxData += VAR_5->DataItf.OutEpSize;
      }
      else
      {
        VAR_5->TxDataLength = 0;
      }

      if( VAR_5->TxDataLength > 0)
      {
       VAR_5->data_tx_state = 129;
      }
      else
      {
        VAR_5->data_tx_state = VAR_0;
        FUNC_1(VAR_4);

      }
    }
    else if( VAR_6 == VAR_3 )
    {
      VAR_5->data_tx_state = 129;
    }
    break;
  default:
    break;
  }
}
