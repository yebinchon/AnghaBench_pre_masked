
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef void* uint32_t ;
typedef int USBH_StatusTypeDef ;
struct TYPE_14__ {TYPE_1__* pActiveClass; } ;
typedef TYPE_4__ USBH_HandleTypeDef ;
struct TYPE_12__ {void* param1; } ;
struct TYPE_13__ {int req_state; TYPE_2__ resp_container; int state; int transaction_id; int session_id; int flags; } ;
struct TYPE_16__ {TYPE_3__ ptp; } ;
struct TYPE_15__ {int Nparam; void* Param3; void* Param2; void* Param1; int Transaction_ID; int SessionID; int Code; } ;
struct TYPE_11__ {TYPE_6__* pData; } ;
typedef TYPE_5__ PTP_ContainerTypedef ;
typedef TYPE_6__ MTP_HandleTypeDef ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_4__*,TYPE_5__*) ;

USBH_StatusTypeDef FUNC_2 (USBH_HandleTypeDef *VAR_5,
                                           uint32_t VAR_6,
                                           uint32_t VAR_7,
                                           uint32_t VAR_8,
                                           uint32_t* VAR_9)
{
  USBH_StatusTypeDef VAR_10 = VAR_3;
  MTP_HandleTypeDef *VAR_11 = VAR_5->pActiveClass->pData;
  PTP_ContainerTypedef VAR_12;

  switch(VAR_11->ptp.req_state)
  {
  case 129:


    VAR_11->ptp.flags = VAR_0;


    VAR_12.Code = VAR_1;
    VAR_12.SessionID = VAR_11->ptp.session_id;
    VAR_12.Transaction_ID = VAR_11->ptp.transaction_id ++;
    VAR_12.Param1 = VAR_6;
    VAR_12.Param2 = VAR_7;
    VAR_12.Param3 = VAR_8;
    VAR_12.Nparam = 3;


    FUNC_1 (VAR_5, &VAR_12);


    VAR_11->ptp.state = VAR_2;
    VAR_11->ptp.req_state = 128;
    VAR_10 = VAR_3;
    break;

  case 128:
    VAR_10 = FUNC_0(VAR_5);

    if(VAR_10 == VAR_4)
    {
      *VAR_9 = VAR_11->ptp.resp_container.param1;
    }
    break;

  default:
    break;
  }
  return VAR_10;
}
