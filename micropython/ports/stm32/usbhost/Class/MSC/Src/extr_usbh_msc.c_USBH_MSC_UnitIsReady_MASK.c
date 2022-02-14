
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t uint8_t ;
struct TYPE_8__ {scalar_t__ gState; TYPE_1__* pActiveClass; } ;
typedef TYPE_3__ USBH_HandleTypeDef ;
struct TYPE_9__ {TYPE_2__* unit; } ;
struct TYPE_7__ {scalar_t__ error; } ;
struct TYPE_6__ {TYPE_4__* pData; } ;
typedef TYPE_4__ MSC_HandleTypeDef ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

uint8_t FUNC_0 (USBH_HandleTypeDef *VAR_2, uint8_t VAR_3)
{
  MSC_HandleTypeDef *VAR_4 = VAR_2->pActiveClass->pData;

  if(VAR_2->gState == VAR_0)
  {
    return (VAR_4->unit[VAR_3].error == VAR_1);
  }
  else
  {
    return 0;
  }
}
