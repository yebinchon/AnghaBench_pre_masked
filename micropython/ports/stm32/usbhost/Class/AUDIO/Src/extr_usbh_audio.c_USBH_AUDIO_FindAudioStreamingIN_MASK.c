
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef int USBH_StatusTypeDef ;
struct TYPE_13__ {TYPE_3__* Itf_Desc; } ;
struct TYPE_14__ {TYPE_4__ CfgDesc; } ;
struct TYPE_16__ {TYPE_5__ device; TYPE_1__* pActiveClass; } ;
typedef TYPE_7__ USBH_HandleTypeDef ;
struct TYPE_17__ {TYPE_6__* stream_in; } ;
struct TYPE_15__ {int Ep; scalar_t__ EpSize; int valid; int Poll; int AltSettings; int interface; } ;
struct TYPE_12__ {scalar_t__ bInterfaceClass; scalar_t__ bInterfaceSubClass; TYPE_2__* Ep_Desc; int bAlternateSetting; int bInterfaceNumber; } ;
struct TYPE_11__ {int bEndpointAddress; scalar_t__ wMaxPacketSize; int bInterval; } ;
struct TYPE_10__ {TYPE_8__* pData; } ;
typedef TYPE_8__ AUDIO_HandleTypeDef ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static USBH_StatusTypeDef FUNC_0(USBH_HandleTypeDef *VAR_5)
{
  uint8_t VAR_6, VAR_7;
  USBH_StatusTypeDef VAR_8 = VAR_1 ;
  AUDIO_HandleTypeDef *VAR_9;

  VAR_9 = VAR_5->pActiveClass->pData;


  VAR_7 = 0;
  for (VAR_6 = 0; VAR_6 < VAR_2 ; VAR_6 ++ )
  {
    if((VAR_5->device.CfgDesc.Itf_Desc[VAR_6].bInterfaceClass == VAR_0)&&
       (VAR_5->device.CfgDesc.Itf_Desc[VAR_6].bInterfaceSubClass == VAR_4))
    {
      if((VAR_5->device.CfgDesc.Itf_Desc[VAR_6].Ep_Desc[0].bEndpointAddress & 0x80)&&
         (VAR_5->device.CfgDesc.Itf_Desc[VAR_6].Ep_Desc[0].wMaxPacketSize > 0))
      {
        VAR_9->stream_in[VAR_7].Ep = VAR_5->device.CfgDesc.Itf_Desc[VAR_6].Ep_Desc[0].bEndpointAddress;
        VAR_9->stream_in[VAR_7].EpSize = VAR_5->device.CfgDesc.Itf_Desc[VAR_6].Ep_Desc[0].wMaxPacketSize;
        VAR_9->stream_in[VAR_7].interface = VAR_5->device.CfgDesc.Itf_Desc[VAR_6].bInterfaceNumber;
        VAR_9->stream_in[VAR_7].AltSettings = VAR_5->device.CfgDesc.Itf_Desc[VAR_6].bAlternateSetting;
        VAR_9->stream_in[VAR_7].Poll = VAR_5->device.CfgDesc.Itf_Desc[VAR_6].Ep_Desc[0].bInterval;
        VAR_9->stream_in[VAR_7].valid = 1;
        VAR_7++;
      }
    }
  }

  if(VAR_7 > 0)
  {
     VAR_8 = VAR_3;
  }

  return VAR_8;
}
