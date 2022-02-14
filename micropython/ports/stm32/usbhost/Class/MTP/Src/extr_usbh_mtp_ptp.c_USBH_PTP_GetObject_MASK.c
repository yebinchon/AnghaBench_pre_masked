
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int USBH_StatusTypeDef ;
struct TYPE_16__ {TYPE_1__* pActiveClass; } ;
typedef TYPE_5__ USBH_HandleTypeDef ;
struct TYPE_13__ {int data; } ;
struct TYPE_14__ {TYPE_2__ payload; } ;
struct TYPE_15__ {int req_state; TYPE_3__ data_container; int * object_ptr; int iteration; int state; int transaction_id; int session_id; int data_packet; int data_packet_counter; int data_length; int * data_ptr; int flags; } ;
struct TYPE_18__ {TYPE_4__ ptp; } ;
struct TYPE_17__ {int Nparam; int Param1; int Transaction_ID; int SessionID; int Code; } ;
struct TYPE_12__ {TYPE_7__* pData; } ;
typedef TYPE_6__ PTP_ContainerTypedef ;
typedef TYPE_7__ MTP_HandleTypeDef ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_5__*) ;
 int FUNC_1 (TYPE_5__*,TYPE_6__*) ;
 int FUNC_2 (int *,int ,int ) ;

USBH_StatusTypeDef FUNC_3 (USBH_HandleTypeDef *VAR_6,
                                           uint32_t VAR_7,
                                           uint8_t *VAR_8)
{
  USBH_StatusTypeDef VAR_9 = VAR_4;
  MTP_HandleTypeDef *VAR_10 = VAR_6->pActiveClass->pData;
  PTP_ContainerTypedef VAR_11;

  switch(VAR_10->ptp.req_state)
  {
  case 129:


    VAR_10->ptp.flags = VAR_0;
    VAR_10->ptp.data_ptr = (uint8_t *)&(VAR_10->ptp.data_container);
    VAR_10->ptp.data_length = 0;
    VAR_10->ptp.data_packet_counter = 0;
    VAR_10->ptp.data_packet = 0;


    VAR_10->ptp.object_ptr = VAR_8;


    VAR_11.Code = VAR_1;
    VAR_11.SessionID = VAR_10->ptp.session_id;
    VAR_11.Transaction_ID = VAR_10->ptp.transaction_id ++;
    VAR_11.Param1 = VAR_7;
    VAR_11.Nparam = 1;



    FUNC_1 (VAR_6, &VAR_11);


    VAR_10->ptp.state = VAR_2;
    VAR_10->ptp.req_state = 128;
    VAR_9 = VAR_4;
    break;

  case 128:
    VAR_9 = FUNC_0(VAR_6);

    if(VAR_9 == VAR_5)
    {

      if(VAR_10->ptp.iteration == 0)
      {

        FUNC_2(VAR_10->ptp.object_ptr, VAR_10->ptp.data_container.payload.data, VAR_3);
      }
    }
    break;

  default:
    break;
  }
  return VAR_9;
}
