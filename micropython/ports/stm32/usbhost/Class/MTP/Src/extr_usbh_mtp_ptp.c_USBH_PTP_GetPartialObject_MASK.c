
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int uint8_t ;
typedef void* uint32_t ;
typedef int USBH_StatusTypeDef ;
struct TYPE_18__ {TYPE_1__* pActiveClass; } ;
typedef TYPE_6__ USBH_HandleTypeDef ;
struct TYPE_15__ {int data; } ;
struct TYPE_16__ {TYPE_3__ payload; } ;
struct TYPE_14__ {void* param1; } ;
struct TYPE_17__ {int req_state; TYPE_4__ data_container; int * object_ptr; int iteration; TYPE_2__ resp_container; int state; int transaction_id; int session_id; int data_packet; int data_packet_counter; int data_length; int * data_ptr; int flags; } ;
struct TYPE_20__ {TYPE_5__ ptp; } ;
struct TYPE_19__ {int Nparam; void* Param3; void* Param2; void* Param1; int Transaction_ID; int SessionID; int Code; } ;
struct TYPE_13__ {TYPE_8__* pData; } ;
typedef TYPE_7__ PTP_ContainerTypedef ;
typedef TYPE_8__ MTP_HandleTypeDef ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_6__*) ;
 int FUNC_1 (TYPE_6__*,TYPE_7__*) ;
 int FUNC_2 (int *,int ,void*) ;

USBH_StatusTypeDef FUNC_3(USBH_HandleTypeDef *VAR_5,
                                           uint32_t VAR_6,
                                           uint32_t VAR_7,
                                           uint32_t VAR_8,
                                           uint8_t *VAR_9,
                                           uint32_t *VAR_10)
{
  USBH_StatusTypeDef VAR_11 = VAR_3;
  MTP_HandleTypeDef *VAR_12 = VAR_5->pActiveClass->pData;
  PTP_ContainerTypedef VAR_13;

  switch(VAR_12->ptp.req_state)
  {
  case 129:


    VAR_12->ptp.flags = VAR_0;
    VAR_12->ptp.data_ptr = (uint8_t *)&(VAR_12->ptp.data_container);
    VAR_12->ptp.data_length = 0;
    VAR_12->ptp.data_packet_counter = 0;
    VAR_12->ptp.data_packet = 0;


    VAR_12->ptp.object_ptr = VAR_9;


    VAR_13.Code = VAR_1;
    VAR_13.SessionID = VAR_12->ptp.session_id;
    VAR_13.Transaction_ID = VAR_12->ptp.transaction_id ++;
    VAR_13.Param1 = VAR_6;
    VAR_13.Param2 = VAR_7;
    VAR_13.Param3 = VAR_8;
    VAR_13.Nparam = 3;


    FUNC_1 (VAR_5, &VAR_13);


    VAR_12->ptp.state = VAR_2;
    VAR_12->ptp.req_state = 128;
    VAR_11 = VAR_3;
    break;

  case 128:
    VAR_11 = FUNC_0(VAR_5);

    if(VAR_11 == VAR_4)
    {
      *VAR_10 = VAR_12->ptp.resp_container.param1;

      if(VAR_12->ptp.iteration == 0)
      {

        FUNC_2(VAR_12->ptp.object_ptr, VAR_12->ptp.data_container.payload.data, *VAR_10);
      }
    }
    break;

  default:
    break;
  }
  return VAR_11;
}
