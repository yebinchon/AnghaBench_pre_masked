
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int USBD_StatusTypeDef ;
struct TYPE_12__ {int wLength; int wIndex; } ;
typedef TYPE_2__ USBD_SetupReqTypedef ;
struct TYPE_13__ {int dev_state; TYPE_1__* pClass; } ;
typedef TYPE_3__ USBD_HandleTypeDef ;
struct TYPE_11__ {int (* Setup ) (TYPE_3__*,TYPE_2__*) ;} ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int VAR_0 ;
 int VAR_1 ;

 int FUNC_3 (TYPE_3__*,TYPE_2__*) ;

USBD_StatusTypeDef FUNC_4 (USBD_HandleTypeDef *VAR_2 , USBD_SetupReqTypedef *VAR_3)
{
  USBD_StatusTypeDef VAR_4 = VAR_1;

  switch (VAR_2->dev_state)
  {
  case 128:

    if (FUNC_0(VAR_3->wIndex) <= VAR_0)
    {
      VAR_2->pClass->Setup (VAR_2, VAR_3);

      if((VAR_3->wLength == 0)&& (VAR_4 == VAR_1))
      {
         FUNC_2(VAR_2);
      }
    }
    else
    {
       FUNC_1(VAR_2 , VAR_3);
    }
    break;

  default:
     FUNC_1(VAR_2 , VAR_3);
    break;
  }
  return VAR_1;
}
