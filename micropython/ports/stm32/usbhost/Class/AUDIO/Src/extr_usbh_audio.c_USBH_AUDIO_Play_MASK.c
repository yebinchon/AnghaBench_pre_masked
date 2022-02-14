
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int USBH_StatusTypeDef ;
struct TYPE_8__ {scalar_t__ gState; TYPE_1__* pActiveClass; } ;
typedef TYPE_3__ USBH_HandleTypeDef ;
struct TYPE_7__ {int total_length; int * buf; } ;
struct TYPE_9__ {scalar_t__ play_state; int processing_state; int control_state; TYPE_2__ headphone; } ;
struct TYPE_6__ {TYPE_4__* pData; } ;
typedef TYPE_4__ AUDIO_HandleTypeDef ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

USBH_StatusTypeDef FUNC_0 (USBH_HandleTypeDef *VAR_7, uint8_t *VAR_8, uint32_t VAR_9)
{
  USBH_StatusTypeDef VAR_10 = VAR_5;
  AUDIO_HandleTypeDef *VAR_11;

  if(VAR_7->gState == VAR_4)
  {
    VAR_11 = VAR_7->pActiveClass->pData;
    if(VAR_11->play_state == VAR_2)
    {
      VAR_11->headphone.buf = VAR_8;
      VAR_11->headphone.total_length = VAR_9;
      VAR_11->play_state = VAR_3;
      VAR_11->control_state = VAR_0;
      VAR_11->processing_state = VAR_1;
      VAR_10 = VAR_6;
    }
  }
  return VAR_10;
}
