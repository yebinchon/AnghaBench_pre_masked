
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int uint8_t ;
typedef int USBH_StatusTypeDef ;
struct TYPE_17__ {TYPE_3__* Itf_Desc; } ;
struct TYPE_18__ {size_t current_interface; int speed; int address; TYPE_4__ CfgDesc; } ;
struct TYPE_19__ {TYPE_5__ device; TYPE_1__* pActiveClass; } ;
typedef TYPE_6__ USBH_HandleTypeDef ;
struct TYPE_20__ {int ep_addr; scalar_t__ poll; int InEp; int OutEp; void* OutPipe; int length; void* InPipe; int ctl_state; int state; int Init; } ;
struct TYPE_16__ {scalar_t__ bInterfaceProtocol; scalar_t__ bNumEndpoints; TYPE_2__* Ep_Desc; } ;
struct TYPE_15__ {int bEndpointAddress; scalar_t__ bInterval; int wMaxPacketSize; } ;
struct TYPE_14__ {TYPE_7__* pData; int Name; int ClassCode; } ;
typedef TYPE_7__ HID_HandleTypeDef ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 void* FUNC_0 (TYPE_6__*,int) ;
 int FUNC_1 (char*,int ) ;
 int VAR_7 ;
 int FUNC_2 (TYPE_6__*,int ,int ,int) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (TYPE_6__*,void*,int ) ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int FUNC_4 (TYPE_6__*,void*,int,int ,int ,int ,int ) ;
 int FUNC_5 (TYPE_6__*,int) ;
 int FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (int) ;
 int VAR_12 ;

__attribute__((used)) static USBH_StatusTypeDef FUNC_8 (USBH_HandleTypeDef *VAR_13)
{
  uint8_t VAR_14;
  uint8_t VAR_15 = 0;
  uint8_t VAR_16;

  USBH_StatusTypeDef VAR_17 = VAR_7 ;
  HID_HandleTypeDef *VAR_18;

  VAR_16 = FUNC_2(VAR_13, VAR_13->pActiveClass->ClassCode, VAR_0, 0xFF);

  if(VAR_16 == 0xFF)
  {
    VAR_17 = VAR_7;
    FUNC_1 ("Cannot Find the interface for %s class.", VAR_13->pActiveClass->Name);
  }
  else
  {
    FUNC_5 (VAR_13, VAR_16);
    VAR_13->pActiveClass->pData = (HID_HandleTypeDef *)FUNC_7 (sizeof(HID_HandleTypeDef));
    VAR_18 = VAR_13->pActiveClass->pData;
    VAR_18->state = VAR_1;


    if(VAR_13->device.CfgDesc.Itf_Desc[VAR_13->device.current_interface].bInterfaceProtocol == VAR_3)
    {
      FUNC_6 ("KeyBoard device found!");
      VAR_18->Init = VAR_8;
    }
    else if(VAR_13->device.CfgDesc.Itf_Desc[VAR_13->device.current_interface].bInterfaceProtocol == VAR_5)
    {
      FUNC_6 ("Mouse device found!");
      VAR_18->Init = VAR_9;
    }
    else
    {
      FUNC_6 ("Protocol not supported.");
      return VAR_7;
    }

    VAR_18->state = VAR_2;
    VAR_18->ctl_state = VAR_6;
    VAR_18->ep_addr = VAR_13->device.CfgDesc.Itf_Desc[VAR_13->device.current_interface].Ep_Desc[0].bEndpointAddress;
    VAR_18->length = VAR_13->device.CfgDesc.Itf_Desc[VAR_13->device.current_interface].Ep_Desc[0].wMaxPacketSize;
    VAR_18->poll = VAR_13->device.CfgDesc.Itf_Desc[VAR_13->device.current_interface].Ep_Desc[0].bInterval ;

    if (VAR_18->poll < VAR_4)
    {
      VAR_18->poll = VAR_4;
    }




    VAR_14 = ( (VAR_13->device.CfgDesc.Itf_Desc[VAR_13->device.current_interface].bNumEndpoints <= VAR_10) ?
              VAR_13->device.CfgDesc.Itf_Desc[VAR_13->device.current_interface].bNumEndpoints :
                  VAR_10);



    for ( ;VAR_15 < VAR_14; VAR_15++)
    {
      if(VAR_13->device.CfgDesc.Itf_Desc[VAR_13->device.current_interface].Ep_Desc[VAR_15].bEndpointAddress & 0x80)
      {
        VAR_18->InEp = (VAR_13->device.CfgDesc.Itf_Desc[VAR_13->device.current_interface].Ep_Desc[VAR_15].bEndpointAddress);
        VAR_18->InPipe = FUNC_0(VAR_13, VAR_18->InEp);



        FUNC_4 (VAR_13,
                        VAR_18->InPipe,
                        VAR_18->InEp,
                        VAR_13->device.address,
                        VAR_13->device.speed,
                        VAR_12,
                        VAR_18->length);

        FUNC_3 (VAR_13, VAR_18->InPipe, 0);

      }
      else
      {
        VAR_18->OutEp = (VAR_13->device.CfgDesc.Itf_Desc[VAR_13->device.current_interface].Ep_Desc[VAR_15].bEndpointAddress);
        VAR_18->OutPipe = FUNC_0(VAR_13, VAR_18->OutEp);



        FUNC_4 (VAR_13,
                        VAR_18->OutPipe,
                        VAR_18->OutEp,
                        VAR_13->device.address,
                        VAR_13->device.speed,
                        VAR_12,
                        VAR_18->length);

        FUNC_3 (VAR_13, VAR_18->OutPipe, 0);
      }

    }
    VAR_17 = VAR_11;
  }
  return VAR_17;
}
