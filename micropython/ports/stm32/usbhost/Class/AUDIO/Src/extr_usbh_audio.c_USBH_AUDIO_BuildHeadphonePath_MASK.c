
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_9__ ;
typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_10__ ;


typedef size_t uint8_t ;
typedef int uint32_t ;
typedef int USBH_StatusTypeDef ;
struct TYPE_22__ {TYPE_1__* pActiveClass; } ;
typedef TYPE_9__ USBH_HandleTypeDef ;
struct TYPE_20__ {TYPE_6__** OutputTerminalDesc; TYPE_2__** InputTerminalDesc; } ;
struct TYPE_21__ {size_t InputTerminalNum; size_t ASNum; TYPE_7__ cs_desc; TYPE_4__* as_desc; } ;
struct TYPE_19__ {int wTerminalType; } ;
struct TYPE_18__ {size_t asociated_as; size_t asociated_feature; size_t asociated_mixer; size_t asociated_selector; size_t asociated_terminal; int asociated_channels; } ;
struct TYPE_17__ {TYPE_3__* GeneralDesc; } ;
struct TYPE_16__ {size_t bTerminalLink; } ;
struct TYPE_15__ {size_t bTerminalID; int bNrChannels; int wTerminalType; } ;
struct TYPE_14__ {TYPE_10__* pData; } ;
struct TYPE_13__ {TYPE_8__ class_desc; TYPE_5__ headphone; } ;
typedef TYPE_10__ AUDIO_HandleTypeDef ;


 int FUNC_0 (int ) ;




 int FUNC_1 (TYPE_9__*,size_t) ;
 int VAR_0 ;
 int VAR_1 ;

USBH_StatusTypeDef FUNC_2(USBH_HandleTypeDef *VAR_2)
{
  uint8_t VAR_3 = 0, VAR_4, VAR_5;
  uint32_t VAR_6;
  uint8_t VAR_7;
  AUDIO_HandleTypeDef *VAR_8;

  VAR_8 = VAR_2->pActiveClass->pData;


  for(VAR_7 = 0; VAR_7 < VAR_8->class_desc.InputTerminalNum; VAR_7++)
  {
    if(FUNC_0(VAR_8->class_desc.cs_desc.InputTerminalDesc[VAR_7]->wTerminalType) == 0x101)
    {
      VAR_3 = VAR_8->class_desc.cs_desc.InputTerminalDesc[VAR_7]->bTerminalID;
      VAR_8->headphone.asociated_channels = VAR_8->class_desc.cs_desc.InputTerminalDesc[VAR_7]->bNrChannels;
      break;
    }
  }

  for(VAR_5 = 0; VAR_5 < VAR_8->class_desc.ASNum; VAR_5++)
  {
    if(VAR_8->class_desc.as_desc[VAR_5].GeneralDesc->bTerminalLink == VAR_3)
    {
      VAR_8->headphone.asociated_as = VAR_5;
      break;
    }
  }

  do
  {
    VAR_6 = FUNC_1(VAR_2, VAR_3);
    VAR_5 = VAR_6 & 0xFF;
    VAR_4 = (VAR_6 >> 8) & 0xFF;
    VAR_3 = (VAR_6 >> 16) & 0xFF;

    switch (VAR_4)
    {
    case 131:
      VAR_8->headphone.asociated_feature = VAR_5;
      break;

    case 130:
      VAR_8->headphone.asociated_mixer = VAR_5;
      break;

    case 128:
      VAR_8->headphone.asociated_selector = VAR_5;
      break;

    case 129:
      VAR_8->headphone.asociated_terminal = VAR_5;
      if(FUNC_0(VAR_8->class_desc.cs_desc.OutputTerminalDesc[VAR_5]->wTerminalType) != 0x103)
      {
        return VAR_1;
      }
      break;
    }
  }
  while ((VAR_4 != 129) && (VAR_6 > 0));

  return VAR_0;
}
