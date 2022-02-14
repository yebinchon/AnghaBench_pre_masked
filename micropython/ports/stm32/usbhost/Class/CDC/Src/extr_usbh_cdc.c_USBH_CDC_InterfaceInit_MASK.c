
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_9__ ;
typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int uint8_t ;
typedef int USBH_StatusTypeDef ;
struct TYPE_18__ {TYPE_7__* Itf_Desc; } ;
struct TYPE_19__ {int speed; int address; TYPE_3__ CfgDesc; } ;
struct TYPE_23__ {TYPE_4__ device; TYPE_2__* pActiveClass; } ;
typedef TYPE_8__ USBH_HandleTypeDef ;
struct TYPE_20__ {int InEp; int OutEp; void* InPipe; void* OutPipe; int InEpSize; int OutEpSize; } ;
struct TYPE_16__ {int NotifEp; void* NotifPipe; int NotifEpSize; } ;
struct TYPE_24__ {TYPE_5__ DataItf; int state; TYPE_1__ CommItf; } ;
struct TYPE_22__ {TYPE_6__* Ep_Desc; } ;
struct TYPE_21__ {int bEndpointAddress; int wMaxPacketSize; } ;
struct TYPE_17__ {int Name; TYPE_9__* pData; } ;
typedef TYPE_9__ CDC_HandleTypeDef ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_0 (TYPE_8__*,int) ;
 int FUNC_1 (char*,int ) ;
 int VAR_7 ;
 int FUNC_2 (TYPE_8__*,int ,int ,int ) ;
 int FUNC_3 (TYPE_8__*,void*,int ) ;
 int VAR_8 ;
 int FUNC_4 (TYPE_8__*,void*,int,int ,int ,int ,int ) ;
 int FUNC_5 (TYPE_8__*,int) ;
 scalar_t__ FUNC_6 (int) ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static USBH_StatusTypeDef FUNC_7 (USBH_HandleTypeDef *VAR_11)
{

  USBH_StatusTypeDef VAR_12 = VAR_7 ;
  uint8_t VAR_13;
  CDC_HandleTypeDef *VAR_14;

  VAR_13 = FUNC_2(VAR_11,
                                 VAR_3,
                                 VAR_0,
                                 VAR_2);

  if(VAR_13 == 0xFF)
  {
    FUNC_1 ("Cannot Find the interface for Communication Interface Class.", VAR_11->pActiveClass->Name);
  }
  else
  {
    FUNC_5 (VAR_11, VAR_13);
    VAR_11->pActiveClass->pData = (CDC_HandleTypeDef *)FUNC_6 (sizeof(CDC_HandleTypeDef));
    VAR_14 = VAR_11->pActiveClass->pData;


    if(VAR_11->device.CfgDesc.Itf_Desc[VAR_13].Ep_Desc[0].bEndpointAddress & 0x80)
    {
      VAR_14->CommItf.NotifEp = VAR_11->device.CfgDesc.Itf_Desc[VAR_13].Ep_Desc[0].bEndpointAddress;
      VAR_14->CommItf.NotifEpSize = VAR_11->device.CfgDesc.Itf_Desc[VAR_13].Ep_Desc[0].wMaxPacketSize;
    }


    VAR_14->CommItf.NotifPipe = FUNC_0(VAR_11, VAR_14->CommItf.NotifEp);


    FUNC_4 (VAR_11,
                    VAR_14->CommItf.NotifPipe,
                    VAR_14->CommItf.NotifEp,
                    VAR_11->device.address,
                    VAR_11->device.speed,
                    VAR_10,
                    VAR_14->CommItf.NotifEpSize);

    FUNC_3 (VAR_11, VAR_14->CommItf.NotifPipe, 0);

    VAR_13 = FUNC_2(VAR_11,
                                   VAR_4,
                                   VAR_6,
                                   VAR_5);

    if(VAR_13 == 0xFF)
    {
      FUNC_1 ("Cannot Find the interface for Data Interface Class.", VAR_11->pActiveClass->Name);
    }
    else
    {

      if(VAR_11->device.CfgDesc.Itf_Desc[VAR_13].Ep_Desc[0].bEndpointAddress & 0x80)
      {
        VAR_14->DataItf.InEp = VAR_11->device.CfgDesc.Itf_Desc[VAR_13].Ep_Desc[0].bEndpointAddress;
        VAR_14->DataItf.InEpSize = VAR_11->device.CfgDesc.Itf_Desc[VAR_13].Ep_Desc[0].wMaxPacketSize;
      }
      else
      {
        VAR_14->DataItf.OutEp = VAR_11->device.CfgDesc.Itf_Desc[VAR_13].Ep_Desc[0].bEndpointAddress;
        VAR_14->DataItf.OutEpSize = VAR_11->device.CfgDesc.Itf_Desc[VAR_13].Ep_Desc[0].wMaxPacketSize;
      }

      if(VAR_11->device.CfgDesc.Itf_Desc[VAR_13].Ep_Desc[1].bEndpointAddress & 0x80)
      {
        VAR_14->DataItf.InEp = VAR_11->device.CfgDesc.Itf_Desc[VAR_13].Ep_Desc[1].bEndpointAddress;
        VAR_14->DataItf.InEpSize = VAR_11->device.CfgDesc.Itf_Desc[VAR_13].Ep_Desc[1].wMaxPacketSize;
      }
      else
      {
        VAR_14->DataItf.OutEp = VAR_11->device.CfgDesc.Itf_Desc[VAR_13].Ep_Desc[1].bEndpointAddress;
        VAR_14->DataItf.OutEpSize = VAR_11->device.CfgDesc.Itf_Desc[VAR_13].Ep_Desc[1].wMaxPacketSize;
      }


      VAR_14->DataItf.OutPipe = FUNC_0(VAR_11, VAR_14->DataItf.OutEp);


      VAR_14->DataItf.InPipe = FUNC_0(VAR_11, VAR_14->DataItf.InEp);


      FUNC_4 (VAR_11,
                      VAR_14->DataItf.OutPipe,
                      VAR_14->DataItf.OutEp,
                      VAR_11->device.address,
                      VAR_11->device.speed,
                      VAR_9,
                      VAR_14->DataItf.OutEpSize);

      FUNC_4 (VAR_11,
                      VAR_14->DataItf.InPipe,
                      VAR_14->DataItf.InEp,
                      VAR_11->device.address,
                      VAR_11->device.speed,
                      VAR_9,
                      VAR_14->DataItf.InEpSize);

      VAR_14->state = VAR_1;

      FUNC_3 (VAR_11, VAR_14->DataItf.OutPipe,0);
      FUNC_3 (VAR_11, VAR_14->DataItf.InPipe,0);
      VAR_12 = VAR_8;
    }
  }
  return VAR_12;
}
