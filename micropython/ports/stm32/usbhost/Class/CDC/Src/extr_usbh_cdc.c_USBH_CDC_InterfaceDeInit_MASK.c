
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int USBH_StatusTypeDef ;
struct TYPE_13__ {TYPE_3__* pActiveClass; } ;
typedef TYPE_4__ USBH_HandleTypeDef ;
struct TYPE_11__ {scalar_t__ OutPipe; scalar_t__ InPipe; } ;
struct TYPE_10__ {scalar_t__ NotifPipe; } ;
struct TYPE_14__ {TYPE_2__ DataItf; TYPE_1__ CommItf; } ;
struct TYPE_12__ {TYPE_5__* pData; } ;
typedef TYPE_5__ CDC_HandleTypeDef ;


 int FUNC_0 (TYPE_4__*,scalar_t__) ;
 int FUNC_1 (TYPE_4__*,scalar_t__) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_5__*) ;

USBH_StatusTypeDef FUNC_3 (USBH_HandleTypeDef *VAR_1)
{
  CDC_HandleTypeDef *VAR_2 = VAR_1->pActiveClass->pData;

  if ( VAR_2->CommItf.NotifPipe)
  {
    FUNC_0(VAR_1, VAR_2->CommItf.NotifPipe);
    FUNC_1 (VAR_1, VAR_2->CommItf.NotifPipe);
    VAR_2->CommItf.NotifPipe = 0;
  }

  if ( VAR_2->DataItf.InPipe)
  {
    FUNC_0(VAR_1, VAR_2->DataItf.InPipe);
    FUNC_1 (VAR_1, VAR_2->DataItf.InPipe);
    VAR_2->DataItf.InPipe = 0;
  }

  if ( VAR_2->DataItf.OutPipe)
  {
    FUNC_0(VAR_1, VAR_2->DataItf.OutPipe);
    FUNC_1 (VAR_1, VAR_2->DataItf.OutPipe);
    VAR_2->DataItf.OutPipe = 0;
  }

  if(VAR_1->pActiveClass->pData)
  {
    FUNC_2 (VAR_1->pActiveClass->pData);
    VAR_1->pActiveClass->pData = 0;
  }

  return VAR_0;
}
