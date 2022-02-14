
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int USBH_StatusTypeDef ;
struct TYPE_6__ {scalar_t__ gState; TYPE_1__* pActiveClass; } ;
typedef TYPE_2__ USBH_HandleTypeDef ;
struct TYPE_7__ {scalar_t__ play_state; int control_state; } ;
struct TYPE_5__ {TYPE_3__* pData; } ;
typedef TYPE_3__ AUDIO_HandleTypeDef ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;

USBH_StatusTypeDef FUNC_0 (USBH_HandleTypeDef *VAR_5)
{
  USBH_StatusTypeDef VAR_6 = VAR_4;
  AUDIO_HandleTypeDef *VAR_7;

  if(VAR_5->gState == VAR_3)
  {
    VAR_7 = VAR_5->pActiveClass->pData;
    if(VAR_7->play_state == VAR_1)
    {
      VAR_7->control_state = VAR_0;
      VAR_7->play_state = VAR_2;
    }
  }
  return VAR_6;
}
