
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int USBH_StatusTypeDef ;
struct TYPE_17__ {TYPE_1__* pActiveClass; } ;
typedef TYPE_5__ USBH_HandleTypeDef ;
struct TYPE_14__ {int data; } ;
struct TYPE_15__ {TYPE_2__ payload; } ;
struct TYPE_16__ {int req_state; int data_length; int state; int transaction_id; int session_id; int object_ptr; TYPE_3__ data_container; int data_packet; int data_packet_counter; int * data_ptr; int flags; } ;
struct TYPE_19__ {TYPE_4__ ptp; } ;
struct TYPE_18__ {int Param2; int Param3; int Param4; int Param5; int Nparam; int Param1; int Transaction_ID; int SessionID; int Code; } ;
struct TYPE_13__ {TYPE_7__* pData; } ;
typedef TYPE_6__ PTP_ContainerTypedef ;
typedef int MTP_PropertiesTypedef ;
typedef TYPE_7__ MTP_HandleTypeDef ;


 int VAR_0 ;
 int FUNC_0 (TYPE_5__*,int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (TYPE_5__*,TYPE_6__*) ;
 int FUNC_3 (int ,int ,int ) ;

USBH_StatusTypeDef FUNC_4 (USBH_HandleTypeDef *VAR_6,
                                                uint32_t VAR_7,
                                                MTP_PropertiesTypedef *VAR_8,
                                                uint32_t *VAR_9)
{
  USBH_StatusTypeDef VAR_10 = VAR_4;
  MTP_HandleTypeDef *VAR_11 = VAR_6->pActiveClass->pData;
  PTP_ContainerTypedef VAR_12;

  switch(VAR_11->ptp.req_state)
  {
  case 129:


    VAR_11->ptp.flags = VAR_0;
    VAR_11->ptp.data_ptr = (uint8_t *)&(VAR_11->ptp.data_container);
    VAR_11->ptp.data_length = 0;
    VAR_11->ptp.data_packet_counter = 0;
    VAR_11->ptp.data_packet = 0;


    FUNC_3(VAR_11->ptp.data_container.payload.data, VAR_11->ptp.object_ptr, VAR_3);


    VAR_12.Code = VAR_1;
    VAR_12.SessionID = VAR_11->ptp.session_id;
    VAR_12.Transaction_ID = VAR_11->ptp.transaction_id ++;
    VAR_12.Param1 = VAR_7;
    VAR_12.Param2 = 0x00000000U;
    VAR_12.Param3 = 0xFFFFFFFFU;
    VAR_12.Param4 = 0x00000000U;
    VAR_12.Param5 = 0xFFFFFFFFU;
    VAR_12.Nparam = 5;


    FUNC_2 (VAR_6, &VAR_12);


    VAR_11->ptp.state = VAR_2;
    VAR_11->ptp.req_state = 128;
    VAR_10 = VAR_4;
    break;

  case 128:
    VAR_10 = FUNC_1(VAR_6);

    if(VAR_10 == VAR_5)
    {
      FUNC_0 (VAR_6, VAR_8, VAR_11->ptp.data_length);
    }
    break;

  default:
    break;
  }
  return VAR_10;
}
