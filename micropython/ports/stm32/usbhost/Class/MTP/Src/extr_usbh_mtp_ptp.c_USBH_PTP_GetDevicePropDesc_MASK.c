
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
typedef int uint16_t ;
typedef int USBH_StatusTypeDef ;
struct TYPE_18__ {TYPE_1__* pActiveClass; } ;
typedef TYPE_5__ USBH_HandleTypeDef ;
struct TYPE_15__ {int * data; } ;
struct TYPE_16__ {TYPE_2__ payload; } ;
struct TYPE_17__ {int req_state; int state; int transaction_id; int session_id; int data_packet; int data_packet_counter; int data_length; TYPE_3__ data_container; int * data_ptr; int flags; } ;
struct TYPE_21__ {TYPE_4__ ptp; } ;
struct TYPE_20__ {int Nparam; int Param1; int Transaction_ID; int SessionID; int Code; } ;
struct TYPE_19__ {int FormFlag; int GetSet; void* DataType; void* DevicePropertyCode; } ;
struct TYPE_14__ {TYPE_8__* pData; } ;
typedef TYPE_6__ PTP_DevicePropDescTypdef ;
typedef TYPE_7__ PTP_ContainerTypedef ;
typedef TYPE_8__ MTP_HandleTypeDef ;


 void* FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (TYPE_5__*,TYPE_7__*) ;

USBH_StatusTypeDef FUNC_3 (USBH_HandleTypeDef *VAR_9,
                                                uint16_t VAR_10,
   PTP_DevicePropDescTypdef* VAR_11)
{
  USBH_StatusTypeDef VAR_12 = VAR_7;
  MTP_HandleTypeDef *VAR_13 = VAR_9->pActiveClass->pData;
  PTP_ContainerTypedef VAR_14;
  uint8_t *VAR_15 = VAR_13->ptp.data_container.payload.data;
  switch(VAR_13->ptp.req_state)
  {
  case 129:


    VAR_13->ptp.flags = VAR_1;
    VAR_13->ptp.data_ptr = (uint8_t *)&(VAR_13->ptp.data_container);
    VAR_13->ptp.data_length = 0;
    VAR_13->ptp.data_packet_counter = 0;
    VAR_13->ptp.data_packet = 0;


    VAR_14.Code = VAR_2;
    VAR_14.SessionID = VAR_13->ptp.session_id;
    VAR_14.Transaction_ID = VAR_13->ptp.transaction_id ++;
    VAR_14.Param1 = VAR_10;
    VAR_14.Nparam = 1;


    FUNC_2 (VAR_9, &VAR_14);


    VAR_13->ptp.state = VAR_3;
    VAR_13->ptp.req_state = 128;
    VAR_12 = VAR_7;
    break;

  case 128:
    VAR_12 = FUNC_1(VAR_9);

    if(VAR_12 == VAR_8)
    {
 VAR_11->DevicePropertyCode = FUNC_0(&VAR_15[VAR_5]);
 VAR_11->DataType = FUNC_0(&VAR_15[VAR_4]);
 VAR_11->GetSet = *(uint8_t *)(&VAR_15[VAR_6]);
 VAR_11->FormFlag = VAR_0;
    }
    break;

  default:
    break;
  }
  return VAR_12;
}
