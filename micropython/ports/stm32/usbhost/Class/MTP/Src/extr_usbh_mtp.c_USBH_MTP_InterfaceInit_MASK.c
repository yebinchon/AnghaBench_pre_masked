
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_8__ ;
typedef struct TYPE_25__ TYPE_7__ ;
typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


typedef int uint8_t ;
typedef int USBH_StatusTypeDef ;
struct TYPE_22__ {TYPE_3__* Itf_Desc; } ;
struct TYPE_23__ {int speed; int address; TYPE_4__ CfgDesc; } ;
struct TYPE_25__ {TYPE_5__ device; TYPE_1__* pActiveClass; } ;
typedef TYPE_7__ USBH_HandleTypeDef ;
struct TYPE_24__ {int state; int poll; } ;
struct TYPE_26__ {TYPE_6__ events; scalar_t__ is_ready; int state; void* DataOutPipe; int DataOutEpSize; int DataOutEp; void* DataInPipe; int DataInEpSize; int DataInEp; void* NotificationPipe; int NotificationEpSize; int NotificationEp; } ;
struct TYPE_21__ {TYPE_2__* Ep_Desc; } ;
struct TYPE_20__ {int wMaxPacketSize; int bEndpointAddress; int bInterval; } ;
struct TYPE_19__ {TYPE_8__* pData; } ;
typedef TYPE_8__ MTP_HandleTypeDef ;


 int VAR_0 ;
 int FUNC_0 (TYPE_7__*) ;
 int FUNC_1 (TYPE_7__*) ;
 int FUNC_2 (TYPE_7__*) ;
 int VAR_1 ;
 void* FUNC_3 (TYPE_7__*,int ) ;
 int FUNC_4 (char*) ;
 int VAR_2 ;
 int FUNC_5 (TYPE_7__*,int ,int,int) ;
 int FUNC_6 (TYPE_7__*,void*,int ) ;
 int VAR_3 ;
 int FUNC_7 (TYPE_7__*,void*,int ,int ,int ,int ,int ) ;
 int FUNC_8 (TYPE_7__*) ;
 int FUNC_9 (TYPE_7__*,int) ;
 scalar_t__ FUNC_10 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static USBH_StatusTypeDef FUNC_11 (USBH_HandleTypeDef *VAR_7)
{
  USBH_StatusTypeDef VAR_8 = VAR_3 ;
  uint8_t VAR_9, VAR_10;

  MTP_HandleTypeDef *VAR_11;

  VAR_9 = FUNC_5(VAR_7,
                                 VAR_6,
                                 1,
                                 1);

  if(VAR_9 == 0xFF)
  {
    VAR_8 = VAR_2;
    FUNC_4 ("Cannot Find the interface for Still Image Class.");
  }
  else
  {
    FUNC_9 (VAR_7, VAR_9);

    VAR_10 = FUNC_0(VAR_7);

    VAR_7->pActiveClass->pData = (MTP_HandleTypeDef *)FUNC_10 (sizeof(MTP_HandleTypeDef));
    VAR_11 = VAR_7->pActiveClass->pData;

    if( VAR_11 == ((void*)0))
    {
      VAR_8 = VAR_2;
      FUNC_4 ("Cannot allocate RAM for MTP Handle");
    }


    VAR_11->NotificationEp = VAR_7->device.CfgDesc.Itf_Desc[VAR_9].Ep_Desc[VAR_10].bEndpointAddress;
    VAR_11->NotificationEpSize = VAR_7->device.CfgDesc.Itf_Desc[VAR_9].Ep_Desc[VAR_10].wMaxPacketSize;
    VAR_11->NotificationPipe = FUNC_3(VAR_7, VAR_11->NotificationEp);
    VAR_11->events.poll = VAR_7->device.CfgDesc.Itf_Desc[VAR_9].Ep_Desc[VAR_10].bInterval;


    FUNC_7 (VAR_7,
                    VAR_11->NotificationPipe,
                    VAR_11->NotificationEp,
                    VAR_7->device.address,
                    VAR_7->device.speed,
                    VAR_5,
                    VAR_11->NotificationEpSize);

    FUNC_6 (VAR_7, VAR_11->NotificationPipe, 0);


    VAR_10 = FUNC_1(VAR_7);


    VAR_11->DataInEp = VAR_7->device.CfgDesc.Itf_Desc[VAR_9].Ep_Desc[VAR_10].bEndpointAddress;
    VAR_11->DataInEpSize = VAR_7->device.CfgDesc.Itf_Desc[VAR_9].Ep_Desc[VAR_10].wMaxPacketSize;
    VAR_11->DataInPipe = FUNC_3(VAR_7, VAR_11->DataInEp);


    FUNC_7 (VAR_7,
                    VAR_11->DataInPipe,
                    VAR_11->DataInEp,
                    VAR_7->device.address,
                    VAR_7->device.speed,
                    VAR_4,
                    VAR_11->DataInEpSize);

    FUNC_6 (VAR_7, VAR_11->DataInPipe, 0);

    VAR_10 = FUNC_2(VAR_7);


    VAR_11->DataOutEp = VAR_7->device.CfgDesc.Itf_Desc[VAR_9].Ep_Desc[VAR_10].bEndpointAddress;
    VAR_11->DataOutEpSize = VAR_7->device.CfgDesc.Itf_Desc[VAR_9].Ep_Desc[VAR_10].wMaxPacketSize;
    VAR_11->DataOutPipe = FUNC_3(VAR_7, VAR_11->DataOutEp);


    FUNC_7 (VAR_7,
                    VAR_11->DataOutPipe,
                    VAR_11->DataOutEp,
                    VAR_7->device.address,
                    VAR_7->device.speed,
                    VAR_4,
                    VAR_11->DataOutEpSize);

    FUNC_6 (VAR_7, VAR_11->DataOutPipe, 0);


  VAR_11->state = VAR_1;
  VAR_11->is_ready = 0;
  VAR_11->events.state = VAR_0;
  return FUNC_8(VAR_7);

  }
  return VAR_8;
}
