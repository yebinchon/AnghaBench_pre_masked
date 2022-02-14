
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint8_t ;
typedef int USBH_StatusTypeDef ;
struct TYPE_15__ {TYPE_1__* pActiveClass; } ;
typedef TYPE_5__ USBH_HandleTypeDef ;
struct TYPE_12__ {int* CB; int CBLength; int Flags; void* DataTransferLength; } ;
struct TYPE_13__ {TYPE_2__ field; } ;
struct TYPE_14__ {int cmd_state; int* pbuf; scalar_t__ data; int state; TYPE_3__ cbw; } ;
struct TYPE_17__ {TYPE_4__ hbot; } ;
struct TYPE_16__ {int key; int asc; int ascq; } ;
struct TYPE_11__ {TYPE_7__* pData; } ;
typedef TYPE_6__ SCSI_SenseTypeDef ;
typedef TYPE_7__ MSC_HandleTypeDef ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_5__*,int) ;
 int VAR_7 ;
 int FUNC_1 (int*,int ,int ) ;
 int VAR_8 ;

USBH_StatusTypeDef FUNC_2 (USBH_HandleTypeDef *VAR_9,
                                               uint8_t VAR_10,
                                               SCSI_SenseTypeDef *VAR_11)
{
  USBH_StatusTypeDef VAR_12 = VAR_6 ;
  MSC_HandleTypeDef *VAR_13 = VAR_9->pActiveClass->pData;

  switch(VAR_13->hbot.cmd_state)
  {
  case 129:


    VAR_13->hbot.cbw.field.DataTransferLength = VAR_3;
    VAR_13->hbot.cbw.field.Flags = VAR_8;
    VAR_13->hbot.cbw.field.CBLength = VAR_2;

    FUNC_1(VAR_13->hbot.cbw.field.CB, 0, VAR_1);
    VAR_13->hbot.cbw.field.CB[0] = VAR_4;
    VAR_13->hbot.cbw.field.CB[1] = (VAR_10 << 5);
    VAR_13->hbot.cbw.field.CB[2] = 0;
    VAR_13->hbot.cbw.field.CB[3] = 0;
    VAR_13->hbot.cbw.field.CB[4] = VAR_3;
    VAR_13->hbot.cbw.field.CB[5] = 0;

    VAR_13->hbot.state = VAR_0;
    VAR_13->hbot.cmd_state = 128;
    VAR_13->hbot.pbuf = (uint8_t *)VAR_13->hbot.data;
    VAR_12 = VAR_5;
    break;

  case 128:

    VAR_12 = FUNC_0(VAR_9, VAR_10);

    if(VAR_12 == VAR_7)
    {
      VAR_11->key = VAR_13->hbot.pbuf[2] & 0x0F;
      VAR_11->asc = VAR_13->hbot.pbuf[12];
      VAR_11->ascq = VAR_13->hbot.pbuf[13];
    }
    break;

  default:
    break;
  }

  return VAR_12;
}
