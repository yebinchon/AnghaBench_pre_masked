
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int USBH_StatusTypeDef ;
struct TYPE_12__ {TYPE_1__* pActiveClass; } ;
typedef TYPE_3__ USBH_HandleTypeDef ;
struct TYPE_11__ {int req_state; int state; int transaction_id; int session_id; int data_length; int * object_ptr; int iteration; int data_packet; int data_packet_counter; int data_container; int * data_ptr; int flags; } ;
struct TYPE_14__ {TYPE_2__ ptp; } ;
struct TYPE_13__ {int Nparam; int Transaction_ID; int SessionID; int Code; } ;
struct TYPE_10__ {TYPE_5__* pData; } ;
typedef TYPE_4__ PTP_ContainerTypedef ;
typedef TYPE_5__ MTP_HandleTypeDef ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*,TYPE_4__*) ;

USBH_StatusTypeDef FUNC_2 (USBH_HandleTypeDef *VAR_4,
                                           uint32_t VAR_5,
                                           uint8_t *VAR_6,
                                           uint32_t VAR_7)
{
  USBH_StatusTypeDef VAR_8 = VAR_3;
  MTP_HandleTypeDef *VAR_9 = VAR_4->pActiveClass->pData;
  PTP_ContainerTypedef VAR_10;

  switch(VAR_9->ptp.req_state)
  {
  case 129:


    VAR_9->ptp.flags = VAR_0;
    VAR_9->ptp.data_ptr = (uint8_t *)&(VAR_9->ptp.data_container);
    VAR_9->ptp.data_packet_counter = 0;
    VAR_9->ptp.data_packet = 0;
    VAR_9->ptp.iteration = 0;


    VAR_9->ptp.object_ptr = VAR_6;
    VAR_9->ptp.data_length = VAR_7;


    VAR_10.Code = VAR_1;
    VAR_10.SessionID = VAR_9->ptp.session_id;
    VAR_10.Transaction_ID = VAR_9->ptp.transaction_id ++;
    VAR_10.Nparam = 0;



    FUNC_1 (VAR_4, &VAR_10);


    VAR_9->ptp.state = VAR_2;
    VAR_9->ptp.req_state = 128;
    VAR_8 = VAR_3;
    break;

  case 128:
    VAR_8 = FUNC_0(VAR_4);
    break;

  default:
    break;
  }
  return VAR_8;
}
