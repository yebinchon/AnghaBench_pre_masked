
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef scalar_t__ uint32_t ;
typedef scalar_t__ uint16_t ;
typedef int USBH_StatusTypeDef ;
struct TYPE_14__ {scalar_t__ gState; TYPE_1__* pActiveClass; } ;
typedef TYPE_6__ USBH_HandleTypeDef ;
struct TYPE_13__ {size_t asociated_as; scalar_t__ frame_length; scalar_t__ frequency; } ;
struct TYPE_12__ {TYPE_3__* as_desc; } ;
struct TYPE_15__ {scalar_t__ play_state; TYPE_5__ headphone; TYPE_4__ class_desc; } ;
struct TYPE_11__ {TYPE_2__* FormatTypeDesc; } ;
struct TYPE_10__ {scalar_t__ bSamFreqType; int bLength; int * tSamFreq; } ;
struct TYPE_9__ {TYPE_7__* pData; } ;
typedef TYPE_7__ AUDIO_HandleTypeDef ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

USBH_StatusTypeDef FUNC_1 (USBH_HandleTypeDef *VAR_7,
                                            uint16_t VAR_8,
                                            uint8_t VAR_9,
                                            uint8_t VAR_10)
{
  USBH_StatusTypeDef VAR_11 = VAR_5;
  AUDIO_HandleTypeDef *VAR_12;
  uint8_t VAR_13;
  uint8_t VAR_14 = VAR_2;
  uint32_t VAR_15, VAR_16;
  uint8_t VAR_17;

  if(VAR_7->gState == VAR_3)
  {
    VAR_12 = VAR_7->pActiveClass->pData;
    if(VAR_12->play_state == VAR_0)
    {

      if(VAR_12->class_desc.as_desc[VAR_12->headphone.asociated_as].FormatTypeDesc->bSamFreqType == 0)
      {
        VAR_15 = FUNC_0(VAR_12->class_desc.as_desc[VAR_12->headphone.asociated_as].FormatTypeDesc->tSamFreq[0]);
        VAR_16 = FUNC_0(VAR_12->class_desc.as_desc[VAR_12->headphone.asociated_as].FormatTypeDesc->tSamFreq[1]);

        if(( VAR_8 >= VAR_15)&& (VAR_8 <= VAR_16))
        {
          VAR_14 = VAR_4;
        }
      }
      else
      {

        VAR_17 = (VAR_12->class_desc.as_desc[VAR_12->headphone.asociated_as].FormatTypeDesc->bLength - 8)/3;


        for(VAR_13 = 0; VAR_13 < VAR_17; VAR_13++)
        {
          if(VAR_8 == FUNC_0(VAR_12->class_desc.as_desc[VAR_12->headphone.asociated_as].FormatTypeDesc->tSamFreq[VAR_13]))
          {
            VAR_14 = VAR_4;
            break;
          }
        }
      }

      if(VAR_14 == VAR_4)
      {
        VAR_12->headphone.frequency = VAR_8;
        VAR_12->headphone.frame_length = (VAR_8 * VAR_10 * VAR_9) / 8000;
        VAR_12->play_state = VAR_1;
        VAR_11 = VAR_6;

      }
    }
  }
   return VAR_11;
}
