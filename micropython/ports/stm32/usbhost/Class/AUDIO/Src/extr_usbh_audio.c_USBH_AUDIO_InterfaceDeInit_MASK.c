
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int USBH_StatusTypeDef ;
struct TYPE_15__ {TYPE_4__* pActiveClass; } ;
typedef TYPE_5__ USBH_HandleTypeDef ;
struct TYPE_13__ {int Pipe; } ;
struct TYPE_12__ {int Pipe; } ;
struct TYPE_11__ {int Pipe; } ;
struct TYPE_16__ {TYPE_3__ control; TYPE_2__ headphone; TYPE_1__ microphone; } ;
struct TYPE_14__ {TYPE_6__* pData; } ;
typedef TYPE_6__ AUDIO_HandleTypeDef ;


 int FUNC_0 (TYPE_5__*,int) ;
 int FUNC_1 (TYPE_5__*,int) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_6__*) ;

USBH_StatusTypeDef FUNC_3 (USBH_HandleTypeDef *VAR_1)
{
  AUDIO_HandleTypeDef *VAR_2 = VAR_1->pActiveClass->pData;

  if(VAR_2->microphone.Pipe != 0x00)
  {
    FUNC_0 (VAR_1, VAR_2->microphone.Pipe);
    FUNC_1 (VAR_1, VAR_2->microphone.Pipe);
    VAR_2->microphone.Pipe = 0;
  }

  if( VAR_2->headphone.Pipe != 0x00)
  {
    FUNC_0(VAR_1, VAR_2->headphone.Pipe);
    FUNC_1 (VAR_1, VAR_2->headphone.Pipe);
    VAR_2->headphone.Pipe = 0;
  }

  if( VAR_2->control.Pipe != 0x00)
  {
    FUNC_0(VAR_1, VAR_2->control.Pipe);
    FUNC_1 (VAR_1, VAR_2->control.Pipe);
    VAR_2->control.Pipe = 0;
  }

  if(VAR_1->pActiveClass->pData)
  {
    FUNC_2 (VAR_1->pActiveClass->pData);
    VAR_1->pActiveClass->pData = 0;
  }
  return VAR_0 ;
}
