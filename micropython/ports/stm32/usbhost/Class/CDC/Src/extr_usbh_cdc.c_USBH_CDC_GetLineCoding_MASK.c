
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int USBH_StatusTypeDef ;
struct TYPE_6__ {scalar_t__ gState; TYPE_1__* pActiveClass; } ;
typedef TYPE_2__ USBH_HandleTypeDef ;
struct TYPE_7__ {int LineCoding; } ;
struct TYPE_5__ {TYPE_3__* pData; } ;
typedef int CDC_LineCodingTypeDef ;
typedef TYPE_3__ CDC_HandleTypeDef ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

USBH_StatusTypeDef FUNC_0(USBH_HandleTypeDef *VAR_4, CDC_LineCodingTypeDef *VAR_5)
{
  CDC_HandleTypeDef *VAR_6 = VAR_4->pActiveClass->pData;

  if((VAR_4->gState == VAR_0) ||(VAR_4->gState == VAR_1))
  {
    *VAR_5 = VAR_6->LineCoding;
    return VAR_3;
  }
  else
  {
    return VAR_2;
  }
}
