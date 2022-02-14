
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int USBH_StatusTypeDef ;
struct TYPE_12__ {TYPE_1__* pActiveClass; } ;
typedef TYPE_4__ USBH_HandleTypeDef ;
struct TYPE_11__ {int supported; } ;
struct TYPE_10__ {int supported; } ;
struct TYPE_13__ {TYPE_3__ microphone; TYPE_2__ headphone; } ;
struct TYPE_9__ {TYPE_5__* pData; } ;
typedef TYPE_5__ AUDIO_HandleTypeDef ;


 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_4__*) ;
 int VAR_0 ;

__attribute__((used)) static USBH_StatusTypeDef FUNC_2 (USBH_HandleTypeDef *VAR_1)
{
  USBH_StatusTypeDef VAR_2 = VAR_0;
  AUDIO_HandleTypeDef *VAR_3 = VAR_1->pActiveClass->pData;

  if(VAR_3->headphone.supported == 1)
  {
    FUNC_1 (VAR_1);
  }

  if(VAR_3->microphone.supported == 1)
  {
    FUNC_0 (VAR_1);
  }

  return VAR_2;
}
