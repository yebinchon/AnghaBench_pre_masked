
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int USBH_StatusTypeDef ;
struct TYPE_8__ {scalar_t__ gState; TYPE_1__* pActiveClass; } ;
typedef TYPE_3__ USBH_HandleTypeDef ;
struct TYPE_7__ {scalar_t__ partial_ptr; int * buf; int * cbuf; } ;
struct TYPE_9__ {scalar_t__ play_state; TYPE_2__ headphone; } ;
struct TYPE_6__ {TYPE_4__* pData; } ;
typedef TYPE_4__ AUDIO_HandleTypeDef ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

USBH_StatusTypeDef FUNC_0 (USBH_HandleTypeDef *VAR_4, uint8_t *VAR_5)
{
  USBH_StatusTypeDef VAR_6 = VAR_2;
  AUDIO_HandleTypeDef *VAR_7;

  if(VAR_4->gState == VAR_1)
  {
    VAR_7 = VAR_4->pActiveClass->pData;
    if(VAR_7->play_state == VAR_0)
    {
      if(VAR_7->headphone.buf <= VAR_5)
      {
        VAR_7->headphone.cbuf = VAR_5;
        if ( VAR_7->headphone.buf == VAR_5)
        {
          VAR_7->headphone.partial_ptr = 0;
        }
        VAR_6 = VAR_3;
      }
    }
  }
  return VAR_6;
}
