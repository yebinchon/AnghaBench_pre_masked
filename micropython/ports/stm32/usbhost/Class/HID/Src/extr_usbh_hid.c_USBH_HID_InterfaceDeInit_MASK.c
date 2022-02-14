
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
struct TYPE_10__ {int InPipe; int OutPipe; } ;
struct TYPE_8__ {TYPE_3__* pData; } ;
typedef TYPE_3__ HID_HandleTypeDef ;


 int FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (TYPE_2__*,int) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_3__*) ;

USBH_StatusTypeDef FUNC_3 (USBH_HandleTypeDef *VAR_1 )
{
  HID_HandleTypeDef *VAR_2 = VAR_1->pActiveClass->pData;

  if(VAR_2->InPipe != 0x00)
  {
    FUNC_0 (VAR_1, VAR_2->InPipe);
    FUNC_1 (VAR_1, VAR_2->InPipe);
    VAR_2->InPipe = 0;
  }

  if(VAR_2->OutPipe != 0x00)
  {
    FUNC_0(VAR_1, VAR_2->OutPipe);
    FUNC_1 (VAR_1, VAR_2->OutPipe);
    VAR_2->OutPipe = 0;
  }

  if(VAR_1->pActiveClass->pData)
  {
    FUNC_2 (VAR_1->pActiveClass->pData);
  }

  return VAR_0;
}
