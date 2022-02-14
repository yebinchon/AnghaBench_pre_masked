
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int int8_t ;
struct TYPE_6__ {scalar_t__ gState; TYPE_1__* pActiveClass; } ;
typedef TYPE_2__ USBH_HandleTypeDef ;
struct TYPE_7__ {scalar_t__ state; int max_lun; } ;
struct TYPE_5__ {TYPE_3__* pData; } ;
typedef TYPE_3__ MSC_HandleTypeDef ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

int8_t FUNC_0 (USBH_HandleTypeDef *VAR_2)
{
  MSC_HandleTypeDef *VAR_3 = VAR_2->pActiveClass->pData;

  if ((VAR_2->gState != VAR_0) && (VAR_3->state == VAR_1))
  {
    return VAR_3->max_lun;
  }
  return 0xFF;
}
