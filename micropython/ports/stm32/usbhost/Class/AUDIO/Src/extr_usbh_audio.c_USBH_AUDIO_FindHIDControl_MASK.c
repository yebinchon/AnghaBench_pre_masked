
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint8_t ;
typedef int USBH_StatusTypeDef ;
struct TYPE_14__ {TYPE_3__* Itf_Desc; } ;
struct TYPE_15__ {TYPE_4__ CfgDesc; } ;
struct TYPE_17__ {TYPE_5__ device; TYPE_1__* pActiveClass; } ;
typedef TYPE_7__ USBH_HandleTypeDef ;
struct TYPE_16__ {int Ep; scalar_t__ EpSize; int supported; int Poll; int interface; } ;
struct TYPE_18__ {TYPE_6__ control; } ;
struct TYPE_13__ {int bInterfaceClass; TYPE_2__* Ep_Desc; int bInterfaceNumber; } ;
struct TYPE_12__ {scalar_t__ wMaxPacketSize; int bEndpointAddress; int bInterval; } ;
struct TYPE_11__ {TYPE_8__* pData; } ;
typedef TYPE_8__ AUDIO_HandleTypeDef ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_7__*,int ,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static USBH_StatusTypeDef FUNC_1(USBH_HandleTypeDef *VAR_5)
{
  uint8_t VAR_6;
  USBH_StatusTypeDef VAR_7 = VAR_1 ;
  AUDIO_HandleTypeDef *VAR_8;

  VAR_8 = VAR_5->pActiveClass->pData;


  VAR_6 = FUNC_0(VAR_5, VAR_0, VAR_4, 0xFF);
  if(VAR_6 != 0xFF)
  {
    for (VAR_6 = 0; VAR_6 < VAR_2 ; VAR_6 ++ )
    {
      if((VAR_5->device.CfgDesc.Itf_Desc[VAR_6].bInterfaceClass == 0x03)&&
        (VAR_5->device.CfgDesc.Itf_Desc[VAR_6].Ep_Desc[0].wMaxPacketSize > 0))
      {
        if((VAR_5->device.CfgDesc.Itf_Desc[VAR_6].Ep_Desc[0].bEndpointAddress & 0x80) == 0x80)
        {
          VAR_8->control.Ep = VAR_5->device.CfgDesc.Itf_Desc[VAR_6].Ep_Desc[0].bEndpointAddress;
          VAR_8->control.EpSize = VAR_5->device.CfgDesc.Itf_Desc[VAR_6].Ep_Desc[0].wMaxPacketSize;
          VAR_8->control.interface = VAR_5->device.CfgDesc.Itf_Desc[VAR_6].bInterfaceNumber;
          VAR_8->control.Poll = VAR_5->device.CfgDesc.Itf_Desc[VAR_6].Ep_Desc[0].bInterval;
          VAR_8->control.supported = 1;
          VAR_7 = VAR_3;
          break;
        }
      }
    }
  }
  return VAR_7;
}
