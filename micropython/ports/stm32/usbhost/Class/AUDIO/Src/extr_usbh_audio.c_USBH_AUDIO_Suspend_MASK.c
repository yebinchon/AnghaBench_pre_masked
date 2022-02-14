
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
 int VAR_5 ;

USBH_StatusTypeDef FUNC_0 (USBH_HandleTypeDef *VAR_6)
{
  USBH_StatusTypeDef VAR_7 = VAR_4;
  AUDIO_HandleTypeDef *VAR_8;

  if(VAR_6->gState == VAR_3)
  {
    VAR_8 = VAR_6->pActiveClass->pData;
    if(VAR_8->play_state == VAR_2)
    {
      VAR_8->control_state = VAR_0;
      VAR_8->play_state = VAR_1;
      VAR_7 = VAR_5;
    }
  }
  return VAR_7;
}
