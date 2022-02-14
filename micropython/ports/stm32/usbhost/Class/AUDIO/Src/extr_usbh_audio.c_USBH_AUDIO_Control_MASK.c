
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
typedef int USBH_StatusTypeDef ;
struct TYPE_13__ {int Timer; TYPE_1__* pActiveClass; } ;
typedef TYPE_4__ USBH_HandleTypeDef ;
struct TYPE_12__ {int timer; int Poll; int Pipe; int EpSize; } ;
struct TYPE_11__ {int asociated_channels; int asociated_feature; } ;
struct TYPE_14__ {int control_state; TYPE_3__ control; int * mem; TYPE_2__ headphone; int temp_channels; int temp_feature; } ;
struct TYPE_10__ {TYPE_5__* pData; } ;
typedef TYPE_5__ AUDIO_HandleTypeDef ;







 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_4__*,int) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_4__*,int *,int ,int ) ;
 int FUNC_3 (TYPE_4__*,int ) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static USBH_StatusTypeDef FUNC_4 (USBH_HandleTypeDef *VAR_3)
{
  USBH_StatusTypeDef VAR_4 = VAR_0 ;
  AUDIO_HandleTypeDef *VAR_5 = VAR_3->pActiveClass->pData;
  uint16_t VAR_6 = 0;


  switch(VAR_5->control_state)
  {
  case 130:
    if((VAR_3->Timer & 1) == 0)
    {
      VAR_5->control.timer = VAR_3->Timer;
      FUNC_2(VAR_3,
                                (uint8_t *)(VAR_5->mem),
                                VAR_5->control.EpSize,
                                VAR_5->control.Pipe);

      VAR_5->temp_feature = VAR_5->headphone.asociated_feature;
      VAR_5->temp_channels = VAR_5->headphone.asociated_channels;

      VAR_5->control_state = 132 ;
    }
    break;
  case 132:
    if(FUNC_3(VAR_3 , VAR_5->control.Pipe) == VAR_2)
    {
      VAR_6 = FUNC_0(&VAR_5->mem[0]);
      if(FUNC_1 (VAR_3, VAR_6) == VAR_0)
      {
        break;
      }
    }

    if(( VAR_3->Timer - VAR_5->control.timer) >= VAR_5->control.Poll)
    {
      VAR_5->control.timer = VAR_3->Timer;

      FUNC_2(VAR_3,
                                (uint8_t *)(VAR_5->mem),
                                VAR_5->control.EpSize,
                                VAR_5->control.Pipe);

    }
    break;

  case 128:
       if( FUNC_1 (VAR_3, 1) == VAR_1)
       {
         VAR_5->control_state = 130;
        VAR_4 = VAR_1;
       }
       break;

  case 129:
       if( FUNC_1 (VAR_3, 2) == VAR_1)
       {
         VAR_5->control_state = 130;
         VAR_4 = VAR_1;
       }
       break;

  case 131:
  default:
    break;
  }

  return VAR_4;
}
