
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int USBH_StatusTypeDef ;
struct TYPE_6__ {scalar_t__ gState; int os_event; TYPE_1__* pActiveClass; } ;
typedef TYPE_2__ USBH_HandleTypeDef ;
struct TYPE_7__ {int * pUserLineCoding; int state; } ;
struct TYPE_5__ {TYPE_3__* pData; } ;
typedef int CDC_LineCodingTypeDef ;
typedef TYPE_3__ CDC_HandleTypeDef ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ) ;

USBH_StatusTypeDef FUNC_1(USBH_HandleTypeDef *VAR_4, CDC_LineCodingTypeDef *VAR_5)
{
  CDC_HandleTypeDef *VAR_6 = VAR_4->pActiveClass->pData;
  if(VAR_4->gState == VAR_1)
  {
    VAR_6->state = VAR_0;
    VAR_6->pUserLineCoding = VAR_5;




  }
  return VAR_3;
}
