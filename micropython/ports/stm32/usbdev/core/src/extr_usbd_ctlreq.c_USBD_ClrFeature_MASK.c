
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {int wValue; } ;
typedef TYPE_2__ USBD_SetupReqTypedef ;
struct TYPE_13__ {int dev_state; TYPE_1__* pClass; int dev_remote_wakeup; } ;
typedef TYPE_3__ USBD_HandleTypeDef ;
struct TYPE_11__ {int (* Setup ) (TYPE_3__*,TYPE_2__*) ;} ;


 int FUNC_0 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_1 (TYPE_3__*) ;


 int VAR_0 ;
 int FUNC_2 (TYPE_3__*,TYPE_2__*) ;

__attribute__((used)) static void FUNC_3(USBD_HandleTypeDef *VAR_1 ,
                            USBD_SetupReqTypedef *VAR_2)
{
  switch (VAR_1->dev_state)
  {
  case 129:
  case 128:
    if (VAR_2->wValue == VAR_0)
    {
      VAR_1->dev_remote_wakeup = 0;
      VAR_1->pClass->Setup (VAR_1, VAR_2);
      FUNC_1(VAR_1);
    }
    break;

  default :
     FUNC_0(VAR_1 , VAR_2);
    break;
  }
}
