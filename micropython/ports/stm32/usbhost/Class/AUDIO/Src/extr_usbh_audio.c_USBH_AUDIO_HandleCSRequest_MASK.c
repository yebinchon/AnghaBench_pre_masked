
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ USBH_StatusTypeDef ;
struct TYPE_9__ {int os_event; TYPE_2__* pActiveClass; } ;
typedef TYPE_3__ USBH_HandleTypeDef ;
struct TYPE_7__ {int asociated_feature; } ;
struct TYPE_10__ {int temp_channels; int cs_req_state; TYPE_1__ headphone; int temp_feature; } ;
struct TYPE_8__ {TYPE_4__* pData; } ;
typedef TYPE_4__ AUDIO_HandleTypeDef ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_3__*,int ,int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static USBH_StatusTypeDef FUNC_2(USBH_HandleTypeDef *VAR_4)
{

  USBH_StatusTypeDef VAR_5 = VAR_1;
  USBH_StatusTypeDef VAR_6 = VAR_1;
  AUDIO_HandleTypeDef *VAR_7 = VAR_4->pActiveClass->pData;

  VAR_6 = FUNC_0(VAR_4,
                                   VAR_7->temp_feature,
                                   VAR_7->temp_channels);

  if(VAR_6 != VAR_1)
  {

    if(VAR_7->temp_channels == 1)
    {
        VAR_7->temp_feature = VAR_7->headphone.asociated_feature;
        VAR_7->temp_channels = 0;
        VAR_5 = VAR_2;
    }
    else
    {
      VAR_7->temp_channels--;
    }
    VAR_7->cs_req_state = VAR_0;



  }

  return VAR_5;
}
