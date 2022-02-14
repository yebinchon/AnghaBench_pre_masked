
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int USBH_StatusTypeDef ;
struct TYPE_9__ {TYPE_1__* pActiveClass; } ;
typedef TYPE_2__ USBH_HandleTypeDef ;
struct TYPE_10__ {scalar_t__ NotificationPipe; scalar_t__ DataInPipe; scalar_t__ DataOutPipe; } ;
struct TYPE_8__ {TYPE_3__* pData; } ;
typedef TYPE_3__ MTP_HandleTypeDef ;


 int FUNC_0 (TYPE_2__*,scalar_t__) ;
 int FUNC_1 (TYPE_2__*,scalar_t__) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_3__*) ;

USBH_StatusTypeDef FUNC_3 (USBH_HandleTypeDef *VAR_1)
{
  MTP_HandleTypeDef *VAR_2 = VAR_1->pActiveClass->pData;

  if (VAR_2->DataOutPipe)
  {
    FUNC_0(VAR_1, VAR_2->DataOutPipe);
    FUNC_1 (VAR_1, VAR_2->DataOutPipe);
    VAR_2->DataOutPipe = 0;
  }

  if (VAR_2->DataInPipe)
  {
    FUNC_0(VAR_1, VAR_2->DataInPipe);
    FUNC_1 (VAR_1, VAR_2->DataInPipe);
    VAR_2->DataInPipe = 0;
  }

  if (VAR_2->NotificationPipe)
  {
    FUNC_0(VAR_1, VAR_2->NotificationPipe);
    FUNC_1 (VAR_1, VAR_2->NotificationPipe);
    VAR_2->NotificationPipe = 0;
  }

  if(VAR_1->pActiveClass->pData)
  {
    FUNC_2 (VAR_1->pActiveClass->pData);
    VAR_1->pActiveClass->pData = 0;
  }
  return VAR_0;
}
