
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int USBH_StatusTypeDef ;
struct TYPE_7__ {TYPE_1__* pActiveClass; int * pData; } ;
typedef TYPE_2__ USBH_HandleTypeDef ;
struct TYPE_6__ {int * pData; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_0 ;

USBH_StatusTypeDef FUNC_2(USBH_HandleTypeDef *VAR_1)
{
  FUNC_0(VAR_1);

  if(VAR_1->pData != ((void*)0))
  {
    VAR_1->pActiveClass->pData = ((void*)0);
    FUNC_1(VAR_1);
  }

  return VAR_0;
}
