
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int USBH_StatusTypeDef ;
struct TYPE_12__ {TYPE_1__* pActiveClass; } ;
typedef TYPE_4__ USBH_HandleTypeDef ;
struct TYPE_10__ {int param5; int param4; int param3; int param2; int param1; int trans_id; int code; } ;
struct TYPE_11__ {TYPE_2__ resp_container; int session_id; } ;
struct TYPE_14__ {TYPE_3__ ptp; } ;
struct TYPE_13__ {int Param5; int Param4; int Param3; int Param2; int Param1; int Transaction_ID; int SessionID; int Code; } ;
struct TYPE_9__ {TYPE_6__* pData; } ;
typedef TYPE_5__ PTP_ContainerTypedef ;
typedef TYPE_6__ MTP_HandleTypeDef ;


 int VAR_0 ;

USBH_StatusTypeDef FUNC_0 (USBH_HandleTypeDef *VAR_1, PTP_ContainerTypedef *VAR_2)
{
  USBH_StatusTypeDef VAR_3 = VAR_0;
  MTP_HandleTypeDef *VAR_4 = VAR_1->pActiveClass->pData;


  VAR_2->Code = VAR_4->ptp.resp_container.code;
  VAR_2->SessionID = VAR_4->ptp.session_id;
  VAR_2->Transaction_ID = VAR_4->ptp.resp_container.trans_id;
  VAR_2->Param1 = VAR_4->ptp.resp_container.param1;
  VAR_2->Param2 = VAR_4->ptp.resp_container.param2;
  VAR_2->Param3 = VAR_4->ptp.resp_container.param3;
  VAR_2->Param4 = VAR_4->ptp.resp_container.param4;
  VAR_2->Param5 = VAR_4->ptp.resp_container.param5;

  return VAR_3;
}
