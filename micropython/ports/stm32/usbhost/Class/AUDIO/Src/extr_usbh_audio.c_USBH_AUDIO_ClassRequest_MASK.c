
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int USBH_StatusTypeDef ;
struct TYPE_13__ {int os_event; int (* pUser ) (TYPE_4__*,int ) ;TYPE_1__* pActiveClass; } ;
typedef TYPE_4__ USBH_HandleTypeDef ;
struct TYPE_12__ {int supported; int AltSettings; int interface; int asociated_channels; int asociated_feature; } ;
struct TYPE_11__ {int supported; int AltSettings; int interface; } ;
struct TYPE_14__ {int req_state; int play_state; TYPE_3__ headphone; TYPE_2__ microphone; void* cs_req_state; int temp_channels; int temp_feature; } ;
struct TYPE_10__ {TYPE_5__* pData; } ;
typedef TYPE_5__ AUDIO_HandleTypeDef ;


 int VAR_0 ;

 void* VAR_1 ;






 int VAR_2 ;
 int FUNC_0 (TYPE_4__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (TYPE_4__*,int ,int ) ;
 int VAR_6 ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (TYPE_4__*,int ) ;

__attribute__((used)) static USBH_StatusTypeDef FUNC_4(USBH_HandleTypeDef *VAR_7)
{
  AUDIO_HandleTypeDef *VAR_8 = VAR_7->pActiveClass->pData;
  USBH_StatusTypeDef VAR_9 = VAR_3;
  USBH_StatusTypeDef VAR_10 = VAR_3;


  switch (VAR_8->req_state)
  {
  case 132:
  case 131:
    if(VAR_8->microphone.supported == 1)
    {
      VAR_10 = FUNC_1(VAR_7,
                                     VAR_8->microphone.interface,
                                     0);

      if(VAR_10 == VAR_5)
      {
        VAR_8->req_state = 130;
      }

    }
    else
    {
      VAR_8->req_state = 130;



    }
    break;

  case 130:
    if(VAR_8->headphone.supported == 1)
    {
      VAR_10 = FUNC_1(VAR_7,
                                     VAR_8->headphone.interface,
                                     0);

      if(VAR_10 == VAR_5)
      {
        VAR_8->req_state = 134;
        VAR_8->cs_req_state = VAR_1;

        VAR_8->temp_feature = VAR_8->headphone.asociated_feature;
        VAR_8->temp_channels = VAR_8->headphone.asociated_channels;
      }
    }
    else
    {
        VAR_8->req_state = 134;
        VAR_8->cs_req_state = VAR_1;



    }
    break;

  case 134:
    if(FUNC_0 (VAR_7) == VAR_5)
    {
      VAR_8->req_state = 129;
    }
    break;

  case 129:
    if(VAR_8->microphone.supported == 1)
    {
      VAR_10 = FUNC_1(VAR_7,
                                     VAR_8->microphone.interface,
                                     VAR_8->microphone.AltSettings);

      if(VAR_10 == VAR_5)
      {
        VAR_8->req_state = 128;
      }
    }
    else
    {
      VAR_8->req_state = 128;



    }
    break;
  case 128:
   if(VAR_8->headphone.supported == 1)
    {
      VAR_10 = FUNC_1(VAR_7,
                                     VAR_8->headphone.interface,
                                     VAR_8->headphone.AltSettings);

      if(VAR_10 == VAR_5)
      {
        VAR_8->req_state = 133;
      }

    }
   else
   {
     VAR_8->req_state = 133;



   }
   break;
  case 133:
    VAR_8->play_state = VAR_0;
    VAR_7->pUser(VAR_7, VAR_2);
    VAR_9 = VAR_5;



  default:
    break;
  }
  return VAR_9;
}
