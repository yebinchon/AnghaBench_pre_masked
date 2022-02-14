
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint8_t ;
typedef int USBH_StatusTypeDef ;
struct TYPE_17__ {int os_event; TYPE_1__* pActiveClass; } ;
typedef TYPE_6__ USBH_HandleTypeDef ;
struct TYPE_16__ {size_t asociated_as; int Ep; int frequency; } ;
struct TYPE_15__ {TYPE_3__* as_desc; } ;
struct TYPE_18__ {int play_state; TYPE_5__ headphone; TYPE_4__ class_desc; } ;
struct TYPE_14__ {TYPE_2__* FormatTypeDesc; } ;
struct TYPE_13__ {scalar_t__* tSamFreq; int bSamFreqType; } ;
struct TYPE_12__ {TYPE_7__* pData; } ;
typedef TYPE_7__ AUDIO_HandleTypeDef ;







 int FUNC_0 (TYPE_6__*) ;
 int FUNC_1 (TYPE_6__*,int ,int *) ;
 int FUNC_2 (TYPE_6__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static USBH_StatusTypeDef FUNC_4 (USBH_HandleTypeDef *VAR_4)
{
  USBH_StatusTypeDef VAR_5 = VAR_0 ;
  AUDIO_HandleTypeDef *VAR_6 = VAR_4->pActiveClass->pData;
  uint8_t *VAR_7;


  switch(VAR_6->play_state)
  {
  case 131:

    if( VAR_6->class_desc.as_desc[VAR_6->headphone.asociated_as].FormatTypeDesc->bSamFreqType == 0)
    {
      VAR_6->play_state = 128;
    }
    else
    {
      VAR_6->play_state = 129;
    }



    break;

  case 128:

    VAR_7 = (uint8_t*)VAR_6->class_desc.as_desc[VAR_6->headphone.asociated_as].FormatTypeDesc->tSamFreq[0];

    VAR_5 = FUNC_1(VAR_4, VAR_6->headphone.Ep, VAR_7);
    if(VAR_5 == VAR_2)
    {
      VAR_6->play_state = 132;
    }
    break;

  case 129:
    VAR_7 = (uint8_t *)&VAR_6->headphone.frequency;
    VAR_5 = FUNC_1(VAR_4,VAR_6->headphone.Ep, VAR_7);
    if(VAR_5 == VAR_2)
    {
      VAR_6->play_state = 132;
      FUNC_0(VAR_4);
    }
    break;
  case 132:



    VAR_5 = VAR_2;
    break;

  case 130:
    FUNC_2(VAR_4);
    VAR_5 = VAR_2;
    break;

  default:
    break;
  }

  return VAR_5;
}
