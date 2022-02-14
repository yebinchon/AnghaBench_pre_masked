
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_13__ {TYPE_1__* pActiveClass; } ;
typedef TYPE_5__ USBH_HandleTypeDef ;
struct TYPE_12__ {int session_id; } ;
struct TYPE_10__ {int code; int param1; } ;
struct TYPE_11__ {TYPE_2__ container; } ;
struct TYPE_14__ {TYPE_4__ ptp; TYPE_3__ events; } ;
struct TYPE_9__ {TYPE_6__* pData; } ;
typedef TYPE_6__ MTP_HandleTypeDef ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (TYPE_5__*,int,int ) ;

__attribute__((used)) static void FUNC_2 (USBH_HandleTypeDef *VAR_0)
{
  MTP_HandleTypeDef *VAR_1 = VAR_0->pActiveClass->pData;

  uint16_t VAR_2;
  uint32_t VAR_3;


  VAR_2 = VAR_1->events.container.code;
  VAR_3 = VAR_1->events.container.param1;

 switch(VAR_2)
 {
    case 129:
      FUNC_0("EVT: PTP_EC_Undefined in session %u", VAR_1->ptp.session_id);
      break;
    case 142:
      FUNC_0("EVT: PTP_EC_CancelTransaction in session %u", VAR_1->ptp.session_id);
      break;
    case 137:
      FUNC_0("EVT: PTP_EC_ObjectAdded in session %u", VAR_1->ptp.session_id);
      break;

    case 135:
      FUNC_0("EVT: PTP_EC_ObjectRemoved in session %u", VAR_1->ptp.session_id);
      break;

    case 132:
      FUNC_0("EVT: PTP_EC_StoreAdded in session %u", VAR_1->ptp.session_id);
      break;

    case 130:
      FUNC_0("EVT: PTP_EC_StoreRemoved in session %u", VAR_1->ptp.session_id);
      break;

    case 139:
      FUNC_0("EVT: PTP_EC_DevicePropChanged in session %u", VAR_1->ptp.session_id);
      break;

    case 136:
      FUNC_0("EVT: PTP_EC_ObjectInfoChanged in session %u", VAR_1->ptp.session_id);
      break;

    case 140:
      FUNC_0("EVT: PTP_EC_DeviceInfoChanged in session %u", VAR_1->ptp.session_id);
      break;

    case 134:
      FUNC_0("EVT: PTP_EC_RequestObjectTransfer in session %u", VAR_1->ptp.session_id);
      break;

    case 131:
      FUNC_0("EVT: PTP_EC_StoreFull in session %u", VAR_1->ptp.session_id);
      break;

    case 138:
      FUNC_0("EVT: PTP_EC_DeviceReset in session %u", VAR_1->ptp.session_id);
      break;

    case 133 :
      FUNC_0( "EVT: PTP_EC_StorageInfoChanged in session %u", VAR_1->ptp.session_id);
      break;

    case 141 :
      FUNC_0( "EVT: PTP_EC_CaptureComplete in session %u", VAR_1->ptp.session_id);
      break;

    case 128 :
      FUNC_0( "EVT: PTP_EC_UnreportedStatus in session %u", VAR_1->ptp.session_id);
      break;

    default :
      FUNC_0( "Received unknown event in session %u", VAR_1->ptp.session_id);
      break;
  }

 FUNC_1(VAR_0, VAR_2, VAR_3);
}
