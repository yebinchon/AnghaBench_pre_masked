
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ gState; TYPE_1__* pActiveClass; } ;
typedef TYPE_2__ USBH_HandleTypeDef ;
struct TYPE_5__ {int (* SOFProcess ) (TYPE_2__*) ;} ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;

void FUNC_1 (USBH_HandleTypeDef *VAR_1)
{
  if((VAR_1->gState == VAR_0)&&(VAR_1->pActiveClass != ((void*)0)))
  {
    VAR_1->pActiveClass->SOFProcess(VAR_1);
  }
}
