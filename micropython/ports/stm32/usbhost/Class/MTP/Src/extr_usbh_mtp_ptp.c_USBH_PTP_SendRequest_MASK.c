
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


typedef int uint32_t ;
typedef int USBH_StatusTypeDef ;
struct TYPE_11__ {TYPE_1__* pActiveClass; } ;
typedef TYPE_3__ USBH_HandleTypeDef ;
struct TYPE_14__ {int param5; int param4; int param3; int param2; int param1; int trans_id; int code; int type; scalar_t__ length; } ;
struct TYPE_10__ {TYPE_6__ op_container; } ;
struct TYPE_13__ {TYPE_2__ ptp; } ;
struct TYPE_12__ {int Nparam; int Param5; int Param4; int Param3; int Param2; int Param1; int Transaction_ID; int Code; } ;
struct TYPE_9__ {TYPE_5__* pData; } ;
typedef int PTP_OpContainerTypedef ;
typedef TYPE_4__ PTP_ContainerTypedef ;
typedef TYPE_5__ MTP_HandleTypeDef ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_6__*,int ,int) ;

USBH_StatusTypeDef FUNC_1 (USBH_HandleTypeDef *VAR_3, PTP_ContainerTypedef *VAR_4)
{
  USBH_StatusTypeDef VAR_5 = VAR_2;
  MTP_HandleTypeDef *VAR_6 = VAR_3->pActiveClass->pData;


  FUNC_0(&(VAR_6->ptp.op_container), 0, sizeof(PTP_OpContainerTypedef));


  VAR_6->ptp.op_container.length = VAR_0- (sizeof(uint32_t)*(5-VAR_4->Nparam));
  VAR_6->ptp.op_container.type = VAR_1;
  VAR_6->ptp.op_container.code = VAR_4->Code;
  VAR_6->ptp.op_container.trans_id = VAR_4->Transaction_ID;
  VAR_6->ptp.op_container.param1 = VAR_4->Param1;
  VAR_6->ptp.op_container.param2 = VAR_4->Param2;
  VAR_6->ptp.op_container.param3 = VAR_4->Param3;
  VAR_6->ptp.op_container.param4 = VAR_4->Param4;
  VAR_6->ptp.op_container.param5 = VAR_4->Param5;

  return VAR_5;
}
