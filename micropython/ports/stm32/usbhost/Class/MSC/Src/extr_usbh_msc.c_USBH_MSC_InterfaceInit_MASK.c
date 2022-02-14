
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int uint8_t ;
typedef int USBH_StatusTypeDef ;
struct TYPE_18__ {TYPE_3__* Itf_Desc; } ;
struct TYPE_19__ {size_t current_interface; int speed; int address; TYPE_4__ CfgDesc; } ;
struct TYPE_20__ {TYPE_5__ device; TYPE_1__* pActiveClass; } ;
typedef TYPE_6__ USBH_HandleTypeDef ;
struct TYPE_21__ {int InEp; int OutEp; void* OutPipe; void* InPipe; int InEpSize; int OutEpSize; int unit; int req_state; int error; int state; scalar_t__ rw_lun; scalar_t__ current_lun; } ;
struct TYPE_17__ {TYPE_2__* Ep_Desc; } ;
struct TYPE_16__ {int bEndpointAddress; int wMaxPacketSize; } ;
struct TYPE_15__ {TYPE_7__* pData; int Name; int ClassCode; } ;
typedef TYPE_7__ MSC_HandleTypeDef ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (TYPE_6__*,int) ;
 int FUNC_1 (char*,int ) ;
 int VAR_5 ;
 int FUNC_2 (TYPE_6__*,int ,int ,int ) ;
 int FUNC_3 (TYPE_6__*,void*,int ) ;
 int FUNC_4 (TYPE_6__*) ;
 int VAR_6 ;
 int FUNC_5 (TYPE_6__*,void*,int,int ,int ,int ,int ) ;
 int FUNC_6 (TYPE_6__*,int) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (int ,int ,int) ;
 int VAR_7 ;

__attribute__((used)) static USBH_StatusTypeDef FUNC_9 (USBH_HandleTypeDef *VAR_8)
{
  uint8_t VAR_9 = 0;
  USBH_StatusTypeDef VAR_10 = VAR_5 ;
  MSC_HandleTypeDef *VAR_11;

  VAR_9 = FUNC_2(VAR_8, VAR_8->pActiveClass->ClassCode, VAR_4, VAR_0);

  if(VAR_9 == 0xFF)
  {
    FUNC_1 ("Cannot Find the interface for %s class.", VAR_8->pActiveClass->Name);
    VAR_10 = VAR_5;
  }
  else
  {
    FUNC_6 (VAR_8, VAR_9);

    VAR_8->pActiveClass->pData = (MSC_HandleTypeDef *)FUNC_7 (sizeof(MSC_HandleTypeDef));
    VAR_11 = VAR_8->pActiveClass->pData;

    if(VAR_8->device.CfgDesc.Itf_Desc[VAR_8->device.current_interface].Ep_Desc[0].bEndpointAddress & 0x80)
    {
      VAR_11->InEp = (VAR_8->device.CfgDesc.Itf_Desc[VAR_8->device.current_interface].Ep_Desc[0].bEndpointAddress);
      VAR_11->InEpSize = VAR_8->device.CfgDesc.Itf_Desc[VAR_8->device.current_interface].Ep_Desc[0].wMaxPacketSize;
    }
    else
    {
      VAR_11->OutEp = (VAR_8->device.CfgDesc.Itf_Desc[VAR_8->device.current_interface].Ep_Desc[0].bEndpointAddress);
      VAR_11->OutEpSize = VAR_8->device.CfgDesc.Itf_Desc[VAR_8->device.current_interface].Ep_Desc[0].wMaxPacketSize;
    }

    if(VAR_8->device.CfgDesc.Itf_Desc[VAR_8->device.current_interface].Ep_Desc[1].bEndpointAddress & 0x80)
    {
      VAR_11->InEp = (VAR_8->device.CfgDesc.Itf_Desc[VAR_8->device.current_interface].Ep_Desc[1].bEndpointAddress);
      VAR_11->InEpSize = VAR_8->device.CfgDesc.Itf_Desc[VAR_8->device.current_interface].Ep_Desc[1].wMaxPacketSize;
    }
    else
    {
      VAR_11->OutEp = (VAR_8->device.CfgDesc.Itf_Desc[VAR_8->device.current_interface].Ep_Desc[1].bEndpointAddress);
      VAR_11->OutEpSize = VAR_8->device.CfgDesc.Itf_Desc[VAR_8->device.current_interface].Ep_Desc[1].wMaxPacketSize;
    }

    VAR_11->current_lun = 0;
    VAR_11->rw_lun = 0;
    VAR_11->state = VAR_1;
    VAR_11->error = VAR_2;
    VAR_11->req_state = VAR_3;
    VAR_11->OutPipe = FUNC_0(VAR_8, VAR_11->OutEp);
    VAR_11->InPipe = FUNC_0(VAR_8, VAR_11->InEp);

    FUNC_4(VAR_8);


    FUNC_8(VAR_11->unit, 0, sizeof(VAR_11->unit));


    FUNC_5 (VAR_8,
                    VAR_11->OutPipe,
                    VAR_11->OutEp,
                    VAR_8->device.address,
                    VAR_8->device.speed,
                    VAR_7,
                    VAR_11->OutEpSize);

    FUNC_5 (VAR_8,
                    VAR_11->InPipe,
                    VAR_11->InEp,
                    VAR_8->device.address,
                    VAR_8->device.speed,
                    VAR_7,
                    VAR_11->InEpSize);


    FUNC_3 (VAR_8, VAR_11->InPipe,0);
    FUNC_3 (VAR_8, VAR_11->OutPipe,0);
    VAR_10 = VAR_6;
  }
  return VAR_10;
}
