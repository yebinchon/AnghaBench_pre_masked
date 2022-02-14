
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ USBH_StatusTypeDef ;
struct TYPE_11__ {TYPE_1__* pActiveClass; } ;
typedef TYPE_4__ USBH_HandleTypeDef ;
struct TYPE_9__ {scalar_t__ volume; scalar_t__ volumeMax; scalar_t__ volumeMin; int resolution; } ;
struct TYPE_10__ {int asociated_channels; int asociated_feature; TYPE_2__ attribute; } ;
struct TYPE_12__ {int temp_channels; int cs_req_state; TYPE_3__ headphone; int temp_feature; } ;
struct TYPE_8__ {TYPE_5__* pData; } ;
typedef TYPE_5__ AUDIO_HandleTypeDef ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_4__*,int ,int,scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static USBH_StatusTypeDef FUNC_1 (USBH_HandleTypeDef *VAR_3, uint8_t VAR_4)
{
  USBH_StatusTypeDef VAR_5 = VAR_1 ;
  AUDIO_HandleTypeDef *VAR_6;


  VAR_6 = VAR_3->pActiveClass->pData;

  switch (VAR_4)
  {
  case 0x01:
    VAR_6->headphone.attribute.volume += VAR_6->headphone.attribute.resolution;
    break;

  case 0x02:
    VAR_6->headphone.attribute.volume -= VAR_6->headphone.attribute.resolution;
    break;

  }

  if(VAR_6->headphone.attribute.volume > VAR_6->headphone.attribute.volumeMax)
  {
    VAR_6->headphone.attribute.volume =VAR_6->headphone.attribute.volumeMax;
  }

  if(VAR_6->headphone.attribute.volume < VAR_6->headphone.attribute.volumeMin)
  {
    VAR_6->headphone.attribute.volume =VAR_6->headphone.attribute.volumeMin;
  }

  if(FUNC_0 (VAR_3,
                                 VAR_6->temp_feature,
                                 VAR_6->temp_channels,
                                 VAR_6->headphone.attribute.volume) != VAR_1)
  {

    if(VAR_6->temp_channels == 1)
    {
      VAR_6->temp_feature = VAR_6->headphone.asociated_feature;
      VAR_6->temp_channels = VAR_6->headphone.asociated_channels;
      VAR_5 = VAR_2;
    }
    else
    {
      VAR_6->temp_channels--;
    }
    VAR_6->cs_req_state = VAR_0;
  }


  return VAR_5;
}
