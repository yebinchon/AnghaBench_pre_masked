
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int USBD_StatusTypeDef ;
struct TYPE_6__ {scalar_t__ dev_state; TYPE_1__* pClass; } ;
typedef TYPE_2__ USBD_HandleTypeDef ;
struct TYPE_5__ {int (* SOF ) (TYPE_2__*) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;

USBD_StatusTypeDef FUNC_1(USBD_HandleTypeDef *VAR_2)
{
  if(VAR_2->dev_state == VAR_1)
  {
    if(VAR_2->pClass->SOF != ((void*)0))
    {
      VAR_2->pClass->SOF(VAR_2);
    }
  }
  return VAR_0;
}
