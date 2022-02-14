
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int USBH_StatusTypeDef ;
struct TYPE_8__ {TYPE_1__* pActiveClass; } ;
typedef TYPE_3__ USBH_HandleTypeDef ;
struct TYPE_7__ {int req_state; int state; } ;
struct TYPE_9__ {TYPE_2__ ptp; } ;
struct TYPE_6__ {TYPE_4__* pData; } ;
typedef TYPE_4__ MTP_HandleTypeDef ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

USBH_StatusTypeDef FUNC_0(USBH_HandleTypeDef *VAR_3)
{
  MTP_HandleTypeDef *VAR_4 = VAR_3->pActiveClass->pData;


  VAR_4->ptp.state = VAR_0;
  VAR_4->ptp.req_state = VAR_1;

  return VAR_2;
}
