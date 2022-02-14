
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_8__ {scalar_t__ gState; TYPE_1__* pActiveClass; } ;
typedef TYPE_3__ USBH_HandleTypeDef ;
struct TYPE_7__ {int partial_ptr; } ;
struct TYPE_9__ {scalar_t__ play_state; TYPE_2__ headphone; } ;
struct TYPE_6__ {TYPE_4__* pData; } ;
typedef TYPE_4__ AUDIO_HandleTypeDef ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

int32_t FUNC_0 (USBH_HandleTypeDef *VAR_2)
{
  AUDIO_HandleTypeDef *VAR_3;

  if(VAR_2->gState == VAR_1)
  {
    VAR_3 = VAR_2->pActiveClass->pData;
    if(VAR_3->play_state == VAR_0)
    {
      return VAR_3->headphone.partial_ptr;
    }
  }
  return -1;
}
