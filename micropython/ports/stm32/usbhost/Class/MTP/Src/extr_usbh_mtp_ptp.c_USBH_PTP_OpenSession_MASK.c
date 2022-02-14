
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
struct TYPE_11__ {int req_state; int transaction_id; int state; int flags; void* session_id; } ;
struct TYPE_14__ {TYPE_2__ ptp; } ;
struct TYPE_13__ {int Nparam; void* Param1; int Transaction_ID; void* SessionID; int Code; } ;
struct TYPE_10__ {TYPE_5__* pData; } ;
typedef TYPE_4__ PTP_ContainerTypedef ;
typedef TYPE_5__ MTP_HandleTypeDef ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*,TYPE_4__*) ;

USBH_StatusTypeDef FUNC_2 (USBH_HandleTypeDef *VAR_4, uint32_t VAR_5)
{
  USBH_StatusTypeDef VAR_6 = VAR_3;
  MTP_HandleTypeDef *VAR_7 = VAR_4->pActiveClass->pData;
  PTP_ContainerTypedef VAR_8;

  switch(VAR_7->ptp.req_state)
  {
  case 129:


    VAR_7->ptp.transaction_id = 0x00000000;
    VAR_7->ptp.session_id = VAR_5;
    VAR_7->ptp.flags = VAR_0;


    VAR_8.Code = VAR_1;
    VAR_8.SessionID = VAR_5;
    VAR_8.Transaction_ID = VAR_7->ptp.transaction_id ++;
    VAR_8.Param1 = VAR_5;
    VAR_8.Nparam = 1;


    FUNC_1 (VAR_4, &VAR_8);


    VAR_7->ptp.state = VAR_2;
    VAR_7->ptp.req_state = 128;
    VAR_6 = VAR_3;
    break;

  case 128:
    VAR_6 = FUNC_0(VAR_4);
    break;

  default:
    break;
  }
  return VAR_6;
}
