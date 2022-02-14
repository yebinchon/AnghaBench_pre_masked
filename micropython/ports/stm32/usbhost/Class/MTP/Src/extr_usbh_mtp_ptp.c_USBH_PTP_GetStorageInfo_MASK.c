
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
typedef int uint32_t ;
typedef int USBH_StatusTypeDef ;
struct TYPE_13__ {TYPE_1__* pActiveClass; } ;
typedef TYPE_3__ USBH_HandleTypeDef ;
struct TYPE_12__ {int req_state; int state; int transaction_id; int session_id; int data_packet; int data_packet_counter; int data_length; int data_container; int * data_ptr; int flags; } ;
struct TYPE_15__ {TYPE_2__ ptp; } ;
struct TYPE_14__ {int Nparam; int Param1; int Transaction_ID; int SessionID; int Code; } ;
struct TYPE_11__ {TYPE_5__* pData; } ;
typedef int PTP_StorageInfoTypedef ;
typedef TYPE_4__ PTP_ContainerTypedef ;
typedef TYPE_5__ MTP_HandleTypeDef ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,int ,int *) ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*,TYPE_4__*) ;

USBH_StatusTypeDef FUNC_3 (USBH_HandleTypeDef *VAR_5, uint32_t VAR_6, PTP_StorageInfoTypedef *VAR_7)
{
  USBH_StatusTypeDef VAR_8 = VAR_3;
  MTP_HandleTypeDef *VAR_9 = VAR_5->pActiveClass->pData;
  PTP_ContainerTypedef VAR_10;

  switch(VAR_9->ptp.req_state)
  {
  case 129:


    VAR_9->ptp.flags = VAR_0;
    VAR_9->ptp.data_ptr = (uint8_t *)&(VAR_9->ptp.data_container);
    VAR_9->ptp.data_length = 0;
    VAR_9->ptp.data_packet_counter = 0;
    VAR_9->ptp.data_packet = 0;


    VAR_10.Code = VAR_1;
    VAR_10.SessionID = VAR_9->ptp.session_id;
    VAR_10.Transaction_ID = VAR_9->ptp.transaction_id ++;
    VAR_10.Param1 = VAR_6;
    VAR_10.Nparam = 1;


    FUNC_2 (VAR_5, &VAR_10);


    VAR_9->ptp.state = VAR_2;
    VAR_9->ptp.req_state = 128;
    VAR_8 = VAR_3;
    break;

  case 128:
    VAR_8 = FUNC_1(VAR_5);

    if(VAR_8 == VAR_4)
    {
      FUNC_0 (VAR_5, VAR_6, VAR_7);
    }
    break;

  default:
    break;
  }
  return VAR_8;
}
