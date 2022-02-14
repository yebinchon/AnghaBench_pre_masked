
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
struct TYPE_12__ {int * CB; int CBLength; int Flags; int DataTransferLength; } ;
struct TYPE_13__ {TYPE_2__ field; } ;
struct TYPE_14__ {int cmd_state; int* pbuf; scalar_t__ data; int state; TYPE_3__ cbw; } ;
struct TYPE_17__ {TYPE_4__ hbot; } ;
struct TYPE_16__ {int block_nbr; int block_size; } ;
struct TYPE_11__ {TYPE_7__* pData; } ;
typedef TYPE_6__ SCSI_CapacityTypeDef ;
typedef TYPE_7__ MSC_HandleTypeDef ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_5__*,int) ;
 int VAR_6 ;
 int FUNC_1 (int *,int ,int ) ;
 int VAR_7 ;

USBH_StatusTypeDef FUNC_2 (USBH_HandleTypeDef *VAR_8,
                                               uint8_t VAR_9,
                                               SCSI_CapacityTypeDef *VAR_10)
{
  USBH_StatusTypeDef VAR_11 = VAR_5 ;
  MSC_HandleTypeDef *VAR_12 = VAR_8->pActiveClass->pData;

  switch(VAR_12->hbot.cmd_state)
  {
  case 129:


    VAR_12->hbot.cbw.field.DataTransferLength = VAR_3;
    VAR_12->hbot.cbw.field.Flags = VAR_7;
    VAR_12->hbot.cbw.field.CBLength = VAR_2;

    FUNC_1(VAR_12->hbot.cbw.field.CB, 0, VAR_1);
    VAR_12->hbot.cbw.field.CB[0] = VAR_4;

    VAR_12->hbot.state = VAR_0;

    VAR_12->hbot.cmd_state = 128;
    VAR_12->hbot.pbuf = (uint8_t *)VAR_12->hbot.data;
    VAR_11 = VAR_5;
    break;

  case 128:

    VAR_11 = FUNC_0(VAR_8, VAR_9);

    if(VAR_11 == VAR_6)
    {

      VAR_10->block_nbr = VAR_12->hbot.pbuf[3] | (VAR_12->hbot.pbuf[2] << 8) | (VAR_12->hbot.pbuf[1] << 16) | (VAR_12->hbot.pbuf[0] << 24);



      VAR_10->block_size = VAR_12->hbot.pbuf[7] | (VAR_12->hbot.pbuf[6] << 8);
    }
    break;

  default:
    break;
  }

  return VAR_11;
}
