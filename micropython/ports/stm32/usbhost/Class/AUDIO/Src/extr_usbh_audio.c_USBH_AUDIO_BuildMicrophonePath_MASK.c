
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef int uint32_t ;
typedef int USBH_StatusTypeDef ;
struct TYPE_15__ {TYPE_1__* pActiveClass; } ;
typedef TYPE_6__ USBH_HandleTypeDef ;
struct TYPE_14__ {size_t asociated_feature; size_t asociated_mixer; size_t asociated_selector; size_t asociated_terminal; int asociated_channels; } ;
struct TYPE_12__ {TYPE_2__** InputTerminalDesc; } ;
struct TYPE_13__ {size_t InputTerminalNum; TYPE_3__ cs_desc; } ;
struct TYPE_16__ {TYPE_5__ microphone; TYPE_4__ class_desc; } ;
struct TYPE_11__ {size_t bTerminalID; int bNrChannels; int wTerminalType; } ;
struct TYPE_10__ {TYPE_7__* pData; } ;
typedef TYPE_7__ AUDIO_HandleTypeDef ;


 int FUNC_0 (int ) ;




 int FUNC_1 (TYPE_6__*,size_t) ;
 int VAR_0 ;

USBH_StatusTypeDef FUNC_2(USBH_HandleTypeDef *VAR_1)
{
  uint8_t VAR_2 = 0, VAR_3, VAR_4;
  uint32_t VAR_5;
  uint8_t VAR_6;
  AUDIO_HandleTypeDef *VAR_7;

  VAR_7 = VAR_1->pActiveClass->pData;


  for(VAR_6 = 0; VAR_6 < VAR_7->class_desc.InputTerminalNum; VAR_6++)
  {
    if(FUNC_0(VAR_7->class_desc.cs_desc.InputTerminalDesc[VAR_6]->wTerminalType) == 0x201)
    {
      VAR_2 = VAR_7->class_desc.cs_desc.InputTerminalDesc[VAR_6]->bTerminalID;
      VAR_7->microphone.asociated_channels = VAR_7->class_desc.cs_desc.InputTerminalDesc[VAR_6]->bNrChannels;
      break;
    }
  }

  do
  {
    VAR_5 = FUNC_1(VAR_1, VAR_2);
    VAR_4 = VAR_5 & 0xFF;
    VAR_3 = (VAR_5 >> 8) & 0xFF;
    VAR_2 = (VAR_5 >> 16) & 0xFF;

    switch (VAR_3)
    {
    case 131:
      VAR_7->microphone.asociated_feature = VAR_4;
      break;

    case 130:
      VAR_7->microphone.asociated_mixer = VAR_4;
      break;

    case 128:
      VAR_7->microphone.asociated_selector = VAR_4;
      break;

    case 129:
      VAR_7->microphone.asociated_terminal = VAR_4;
      break;
    }
  }
  while ((VAR_3 != 129) && (VAR_5 > 0));



  return VAR_0;
}
