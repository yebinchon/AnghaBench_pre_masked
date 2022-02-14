
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint8_t ;
typedef void* uint16_t ;
typedef int USBH_StatusTypeDef ;
struct TYPE_13__ {TYPE_1__* pActiveClass; } ;
typedef TYPE_3__ USBH_HandleTypeDef ;
struct TYPE_12__ {int req_state; int data_length; int state; int transaction_id; int session_id; int data_packet; int data_packet_counter; int data_container; int * data_ptr; int flags; } ;
struct TYPE_15__ {TYPE_2__ ptp; } ;
struct TYPE_14__ {int Nparam; void* Param2; void* Param1; int Transaction_ID; int SessionID; int Code; } ;
struct TYPE_11__ {TYPE_5__* pData; } ;
typedef int PTP_ObjectPropDescTypeDef ;
typedef TYPE_4__ PTP_ContainerTypedef ;
typedef TYPE_5__ MTP_HandleTypeDef ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*,TYPE_4__*) ;

USBH_StatusTypeDef FUNC_3 (USBH_HandleTypeDef *VAR_5,
                                                uint16_t VAR_6,
                                                uint16_t VAR_7,
                                                PTP_ObjectPropDescTypeDef *VAR_8)
{
  USBH_StatusTypeDef VAR_9 = VAR_3;
  MTP_HandleTypeDef *VAR_10 = VAR_5->pActiveClass->pData;
  PTP_ContainerTypedef VAR_11;

  switch(VAR_10->ptp.req_state)
  {
  case 129:


    VAR_10->ptp.flags = VAR_0;
    VAR_10->ptp.data_ptr = (uint8_t *)&(VAR_10->ptp.data_container);
    VAR_10->ptp.data_length = 0;
    VAR_10->ptp.data_packet_counter = 0;
    VAR_10->ptp.data_packet = 0;


    VAR_11.Code = VAR_1;
    VAR_11.SessionID = VAR_10->ptp.session_id;
    VAR_11.Transaction_ID = VAR_10->ptp.transaction_id ++;
    VAR_11.Param1 = VAR_6;
    VAR_11.Param2 = VAR_7;
    VAR_11.Nparam = 2;


    FUNC_2 (VAR_5, &VAR_11);


    VAR_10->ptp.state = VAR_2;
    VAR_10->ptp.req_state = 128;
    VAR_9 = VAR_3;
    break;

  case 128:
    VAR_9 = FUNC_1(VAR_5);

    if(VAR_9 == VAR_4)
    {
     FUNC_0(VAR_5, VAR_8, VAR_10->ptp.data_length);
    }
    break;

  default:
    break;
  }
  return VAR_9;
}
