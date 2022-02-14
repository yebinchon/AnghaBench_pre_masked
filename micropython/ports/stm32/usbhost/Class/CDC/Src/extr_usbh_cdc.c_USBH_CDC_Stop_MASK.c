
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int USBH_StatusTypeDef ;
struct TYPE_11__ {scalar_t__ gState; TYPE_1__* pActiveClass; } ;
typedef TYPE_4__ USBH_HandleTypeDef ;
struct TYPE_10__ {int OutPipe; int InPipe; } ;
struct TYPE_9__ {int NotifPipe; } ;
struct TYPE_12__ {TYPE_3__ DataItf; TYPE_2__ CommItf; int state; } ;
struct TYPE_8__ {TYPE_5__* pData; } ;
typedef TYPE_5__ CDC_HandleTypeDef ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_4__*,int ) ;
 int VAR_2 ;

USBH_StatusTypeDef FUNC_1(USBH_HandleTypeDef *VAR_3)
{
  CDC_HandleTypeDef *VAR_4 = VAR_3->pActiveClass->pData;

  if(VAR_3->gState == VAR_1)
  {
    VAR_4->state = VAR_0;

    FUNC_0(VAR_3, VAR_4->CommItf.NotifPipe);
    FUNC_0(VAR_3, VAR_4->DataItf.InPipe);
    FUNC_0(VAR_3, VAR_4->DataItf.OutPipe);
  }
  return VAR_2;
}
