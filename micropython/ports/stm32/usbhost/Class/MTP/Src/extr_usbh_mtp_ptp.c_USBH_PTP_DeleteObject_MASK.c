
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef void* uint32_t ;
typedef int USBH_StatusTypeDef ;
struct TYPE_12__ {TYPE_1__* pActiveClass; } ;
typedef TYPE_3__ USBH_HandleTypeDef ;
struct TYPE_11__ {int req_state; int state; int transaction_id; int session_id; int flags; } ;
struct TYPE_14__ {TYPE_2__ ptp; } ;
struct TYPE_13__ {int Nparam; void* Param2; void* Param1; int Transaction_ID; int SessionID; int Code; } ;
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
                                          uint32_t VAR_6)
{
  USBH_StatusTypeDef VAR_7 = VAR_3;
  MTP_HandleTypeDef *VAR_8 = VAR_4->pActiveClass->pData;
  PTP_ContainerTypedef VAR_9;

  switch(VAR_8->ptp.req_state)
  {
  case 129:


    VAR_8->ptp.flags = VAR_0;


    VAR_9.Code = VAR_1;
    VAR_9.SessionID = VAR_8->ptp.session_id;
    VAR_9.Transaction_ID = VAR_8->ptp.transaction_id ++;
    VAR_9.Param1 = VAR_5;
    VAR_9.Param2 = VAR_6;
    VAR_9.Nparam = 2;


    FUNC_1 (VAR_4, &VAR_9);


    VAR_8->ptp.state = VAR_2;
    VAR_8->ptp.req_state = 128;
    VAR_7 = VAR_3;
    break;

  case 128:
    VAR_7 = FUNC_0(VAR_4);
    break;

  default:
    break;
  }
  return VAR_7;
}
