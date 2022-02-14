
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ wValue; } ;
typedef TYPE_2__ USBD_SetupReqTypedef ;
struct TYPE_11__ {int dev_remote_wakeup; TYPE_1__* pClass; } ;
typedef TYPE_3__ USBD_HandleTypeDef ;
struct TYPE_9__ {int (* Setup ) (TYPE_3__*,TYPE_2__*) ;} ;


 int FUNC_0 (TYPE_3__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (TYPE_3__*,TYPE_2__*) ;

__attribute__((used)) static void FUNC_2(USBD_HandleTypeDef *VAR_1 ,
                            USBD_SetupReqTypedef *VAR_2)
{

  if (VAR_2->wValue == VAR_0)
  {
    VAR_1->dev_remote_wakeup = 1;
    VAR_1->pClass->Setup (VAR_1, VAR_2);
    FUNC_0(VAR_1);
  }

}
