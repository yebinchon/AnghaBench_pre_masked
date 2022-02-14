
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int uint8_t ;
typedef void* uint32_t ;
typedef int USBH_StatusTypeDef ;
struct TYPE_18__ {TYPE_1__* pActiveClass; } ;
typedef TYPE_5__ USBH_HandleTypeDef ;
struct TYPE_15__ {int data; } ;
struct TYPE_16__ {TYPE_2__ payload; } ;
struct TYPE_17__ {int req_state; TYPE_3__ data_container; int state; int transaction_id; int session_id; int data_packet; int data_packet_counter; int data_length; int * data_ptr; int flags; } ;
struct TYPE_21__ {TYPE_4__ ptp; } ;
struct TYPE_20__ {int Nparam; void* Param3; void* Param2; void* Param1; int Transaction_ID; int SessionID; int Code; } ;
struct TYPE_19__ {int Handler; int n; } ;
struct TYPE_14__ {TYPE_8__* pData; } ;
typedef TYPE_6__ PTP_ObjectHandlesTypedef ;
typedef TYPE_7__ PTP_ContainerTypedef ;
typedef TYPE_8__ MTP_HandleTypeDef ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (TYPE_5__*,TYPE_7__*) ;

USBH_StatusTypeDef FUNC_3 (USBH_HandleTypeDef *VAR_5,
                                           uint32_t VAR_6,
                                           uint32_t VAR_7,
                                           uint32_t VAR_8,
                                           PTP_ObjectHandlesTypedef* VAR_9)
{
  USBH_StatusTypeDef VAR_10 = VAR_3;
  MTP_HandleTypeDef *VAR_11 = VAR_5->pActiveClass->pData;
  PTP_ContainerTypedef VAR_12;

  switch(VAR_11->ptp.req_state)
  {
  case 129:


    VAR_11->ptp.flags = VAR_0;
    VAR_11->ptp.data_ptr = (uint8_t *)&(VAR_11->ptp.data_container);
    VAR_11->ptp.data_length = 0;
    VAR_11->ptp.data_packet_counter = 0;
    VAR_11->ptp.data_packet = 0;


    VAR_12.Code = VAR_1;
    VAR_12.SessionID = VAR_11->ptp.session_id;
    VAR_12.Transaction_ID = VAR_11->ptp.transaction_id ++;
    VAR_12.Param1 = VAR_6;
    VAR_12.Param2 = VAR_7;
    VAR_12.Param3 = VAR_8;
    VAR_12.Nparam = 3;


    FUNC_2 (VAR_5, &VAR_12);


    VAR_11->ptp.state = VAR_2;
    VAR_11->ptp.req_state = 128;
    VAR_10 = VAR_3;
    break;

  case 128:
    VAR_10 = FUNC_1(VAR_5);

    if(VAR_10 == VAR_4)
    {
       VAR_9->n = FUNC_0 (VAR_9->Handler,
                                          VAR_11->ptp.data_container.payload.data,
                                          0);
    }
    break;

  default:
    break;
  }
  return VAR_10;
}
