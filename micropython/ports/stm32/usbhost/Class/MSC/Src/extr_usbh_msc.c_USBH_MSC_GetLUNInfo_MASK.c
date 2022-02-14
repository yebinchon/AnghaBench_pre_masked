
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef int USBH_StatusTypeDef ;
struct TYPE_6__ {scalar_t__ gState; TYPE_1__* pActiveClass; } ;
typedef TYPE_2__ USBH_HandleTypeDef ;
struct TYPE_7__ {int * unit; } ;
struct TYPE_5__ {TYPE_3__* pData; } ;
typedef int MSC_LUNTypeDef ;
typedef TYPE_3__ MSC_HandleTypeDef ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *,int) ;

USBH_StatusTypeDef FUNC_1(USBH_HandleTypeDef *VAR_3, uint8_t VAR_4, MSC_LUNTypeDef *VAR_5)
{
  MSC_HandleTypeDef *VAR_6 = VAR_3->pActiveClass->pData;
  if(VAR_3->gState == VAR_0)
  {
    FUNC_0(VAR_5,&VAR_6->unit[VAR_4], sizeof(MSC_LUNTypeDef));
    return VAR_2;
  }
  else
  {
    return VAR_1;
  }
}
