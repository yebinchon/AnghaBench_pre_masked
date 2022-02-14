
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_9__ ;
typedef struct TYPE_29__ TYPE_8__ ;
typedef struct TYPE_28__ TYPE_7__ ;
typedef struct TYPE_27__ TYPE_6__ ;
typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint16_t ;
typedef scalar_t__ USBH_StatusTypeDef ;
struct TYPE_26__ {int speed; int address; } ;
struct TYPE_29__ {TYPE_5__ device; TYPE_1__* pActiveClass; } ;
typedef TYPE_8__ USBH_HandleTypeDef ;
struct TYPE_25__ {int supported; scalar_t__ EpSize; void* Pipe; int Ep; } ;
struct TYPE_28__ {scalar_t__ EpSize; int supported; void* Pipe; int Ep; int Poll; int AltSettings; int interface; } ;
struct TYPE_27__ {scalar_t__ EpSize; int supported; void* Pipe; int Ep; int Poll; int AltSettings; int interface; } ;
struct TYPE_30__ {int control_state; int req_state; TYPE_4__ control; TYPE_7__ microphone; TYPE_6__ headphone; TYPE_3__* stream_out; TYPE_2__* stream_in; } ;
struct TYPE_24__ {int valid; scalar_t__ EpSize; int Poll; int Ep; int AltSettings; int interface; } ;
struct TYPE_23__ {int valid; scalar_t__ EpSize; int Ep; int AltSettings; int interface; } ;
struct TYPE_22__ {int Name; TYPE_9__* pData; } ;
typedef TYPE_9__ AUDIO_HandleTypeDef ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_8__*) ;
 int FUNC_1 (TYPE_8__*) ;
 scalar_t__ FUNC_2 (TYPE_8__*) ;
 scalar_t__ FUNC_3 (TYPE_8__*) ;
 scalar_t__ FUNC_4 (TYPE_8__*) ;
 int FUNC_5 (TYPE_8__*) ;
 void* FUNC_6 (TYPE_8__*,int ) ;
 int FUNC_7 (char*,int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_8 (TYPE_8__*,int ,int ,int) ;
 int FUNC_9 (TYPE_8__*,void*,int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_10 (TYPE_8__*,void*,int ,int ,int ,int ,scalar_t__) ;
 scalar_t__ FUNC_11 (int) ;
 int FUNC_12 (TYPE_9__*,int ,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static USBH_StatusTypeDef FUNC_13 (USBH_HandleTypeDef *VAR_9)
{
  USBH_StatusTypeDef VAR_10 = VAR_4 ;
  USBH_StatusTypeDef VAR_11, VAR_12 ;
  AUDIO_HandleTypeDef *VAR_13;
  uint8_t VAR_14, VAR_15;
  uint16_t VAR_16 = 0;
  uint16_t VAR_17 = 0;

  VAR_14 = FUNC_8(VAR_9, VAR_0, VAR_8, 0x00);

  if(VAR_14 == 0xFF)
  {
    FUNC_7 ("Cannot Find the interface for %s class.", VAR_9->pActiveClass->Name);
    VAR_10 = VAR_4;
  }
  else
  {


    VAR_9->pActiveClass->pData = (AUDIO_HandleTypeDef *)FUNC_11 (sizeof(AUDIO_HandleTypeDef));
    VAR_13 = VAR_9->pActiveClass->pData;
    FUNC_12(VAR_13, 0, sizeof(AUDIO_HandleTypeDef));



    VAR_11 = FUNC_2 (VAR_9);

    VAR_12 = FUNC_3(VAR_9);

    if((VAR_11 == VAR_4) && (VAR_12 == VAR_4))
    {
      FUNC_7 ("%s class configuration not supported.", VAR_9->pActiveClass->Name);
    }
    else
    {

      for (VAR_15 = 0; VAR_15 < VAR_2; VAR_15 ++)
      {
        if( VAR_13->stream_out[VAR_15].valid == 1)
        {
          if(VAR_16 < VAR_13->stream_out[VAR_15].EpSize)
          {
            VAR_16 = VAR_13->stream_out[VAR_15].EpSize;
            VAR_13->headphone.interface = VAR_13->stream_out[VAR_15].interface;
            VAR_13->headphone.AltSettings = VAR_13->stream_out[VAR_15].AltSettings;
            VAR_13->headphone.Ep = VAR_13->stream_out[VAR_15].Ep;
            VAR_13->headphone.EpSize = VAR_13->stream_out[VAR_15].EpSize;
            VAR_13->headphone.Poll = VAR_13->stream_out[VAR_15].Poll;
            VAR_13->headphone.supported = 1;
          }
        }

        if( VAR_13->stream_in[VAR_15].valid == 1)
        {
          if(VAR_17 < VAR_13->stream_in[VAR_15].EpSize)
          {
            VAR_17 = VAR_13->stream_in[VAR_15].EpSize;
            VAR_13->microphone.interface = VAR_13->stream_in[VAR_15].interface;
            VAR_13->microphone.AltSettings = VAR_13->stream_in[VAR_15].AltSettings;
            VAR_13->microphone.Ep = VAR_13->stream_in[VAR_15].Ep;
            VAR_13->microphone.EpSize = VAR_13->stream_in[VAR_15].EpSize;
            VAR_13->microphone.Poll = VAR_13->stream_out[VAR_15].Poll;
            VAR_13->microphone.supported = 1;
          }
        }
      }

      if(FUNC_4(VAR_9) == VAR_5)
      {
        VAR_13->control.supported = 1;
      }


      FUNC_5 (VAR_9);



      if(VAR_13->headphone.supported == 1)
      {
        FUNC_0 (VAR_9);

        VAR_13->headphone.Pipe = FUNC_6(VAR_9, VAR_13->headphone.Ep);


        FUNC_10 (VAR_9,
                        VAR_13->headphone.Pipe,
                        VAR_13->headphone.Ep,
                        VAR_9->device.address,
                        VAR_9->device.speed,
                        VAR_7,
                        VAR_13->headphone.EpSize);

        FUNC_9 (VAR_9, VAR_13->headphone.Pipe, 0);

      }

      if(VAR_13->microphone.supported == 1)
      {
        FUNC_1 (VAR_9);
        VAR_13->microphone.Pipe = FUNC_6(VAR_9, VAR_13->microphone.Ep);


        FUNC_10 (VAR_9,
                        VAR_13->microphone.Pipe,
                        VAR_13->microphone.Ep,
                        VAR_9->device.address,
                        VAR_9->device.speed,
                        VAR_7,
                        VAR_13->microphone.EpSize);

        FUNC_9 (VAR_9, VAR_13->microphone.Pipe, 0);
      }

      if(VAR_13->control.supported == 1)
      {
        VAR_13->control.Pipe = FUNC_6(VAR_9, VAR_13->control.Ep);


        FUNC_10 (VAR_9,
                        VAR_13->control.Pipe,
                        VAR_13->control.Ep,
                        VAR_9->device.address,
                        VAR_9->device.speed,
                        VAR_6,
                        VAR_13->control.EpSize);

        FUNC_9 (VAR_9, VAR_13->control.Pipe, 0);

      }

      VAR_13->req_state = VAR_3;
      VAR_13->control_state = VAR_1;

      VAR_10 = VAR_5;
    }
  }
  return VAR_10;
}
