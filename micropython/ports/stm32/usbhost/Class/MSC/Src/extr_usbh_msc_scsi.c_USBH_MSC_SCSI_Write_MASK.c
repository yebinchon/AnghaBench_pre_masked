
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef void* uint8_t ;
typedef int uint32_t ;
typedef int USBH_StatusTypeDef ;
struct TYPE_13__ {TYPE_1__* pActiveClass; } ;
typedef TYPE_5__ USBH_HandleTypeDef ;
struct TYPE_10__ {int DataTransferLength; void** CB; int CBLength; int Flags; } ;
struct TYPE_11__ {TYPE_2__ field; } ;
struct TYPE_12__ {int cmd_state; void** pbuf; int state; TYPE_3__ cbw; } ;
struct TYPE_14__ {TYPE_4__ hbot; } ;
struct TYPE_9__ {TYPE_6__* pData; } ;
typedef TYPE_6__ MSC_HandleTypeDef ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_5__*,void*) ;
 int FUNC_1 (void**,int ,int ) ;
 int VAR_6 ;

USBH_StatusTypeDef FUNC_2(USBH_HandleTypeDef *VAR_7,
                                     uint8_t VAR_8,
                                     uint32_t VAR_9,
                                     uint8_t *VAR_10,
                                     uint32_t VAR_11)
{
  USBH_StatusTypeDef VAR_12 = VAR_5 ;

  MSC_HandleTypeDef *VAR_13 = VAR_7->pActiveClass->pData;

  switch(VAR_13->hbot.cmd_state)
  {
  case 129:


    VAR_13->hbot.cbw.field.DataTransferLength = VAR_11 * 512;
    VAR_13->hbot.cbw.field.Flags = VAR_6;
    VAR_13->hbot.cbw.field.CBLength = VAR_2;

    FUNC_1(VAR_13->hbot.cbw.field.CB, 0, VAR_1);
    VAR_13->hbot.cbw.field.CB[0] = VAR_3;


    VAR_13->hbot.cbw.field.CB[2] = (((uint8_t*)&VAR_9)[3]);
    VAR_13->hbot.cbw.field.CB[3] = (((uint8_t*)&VAR_9)[2]);
    VAR_13->hbot.cbw.field.CB[4] = (((uint8_t*)&VAR_9)[1]);
    VAR_13->hbot.cbw.field.CB[5] = (((uint8_t*)&VAR_9)[0]);



    VAR_13->hbot.cbw.field.CB[7] = (((uint8_t *)&VAR_11)[1]) ;
    VAR_13->hbot.cbw.field.CB[8] = (((uint8_t *)&VAR_11)[0]) ;


    VAR_13->hbot.state = VAR_0;
    VAR_13->hbot.cmd_state = 128;
    VAR_13->hbot.pbuf = VAR_10;
    VAR_12 = VAR_4;
    break;

  case 128:
    VAR_12 = FUNC_0(VAR_7, VAR_8);
    break;

  default:
    break;
  }

  return VAR_12;
}
