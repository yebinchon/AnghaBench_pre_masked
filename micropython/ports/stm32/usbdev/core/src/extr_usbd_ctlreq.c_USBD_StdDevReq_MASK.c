
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_1__ ;


typedef int USBD_StatusTypeDef ;
struct TYPE_11__ {int bRequest; } ;
typedef TYPE_1__ USBD_SetupReqTypedef ;
typedef int USBD_HandleTypeDef ;


 int FUNC_0 (int *,TYPE_1__*) ;
 int FUNC_1 (int *,TYPE_1__*) ;
 int FUNC_2 (int *,TYPE_1__*) ;
 int FUNC_3 (int *,TYPE_1__*) ;
 int FUNC_4 (int *,TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_5 (int *,TYPE_1__*) ;
 int FUNC_6 (int *,TYPE_1__*) ;
 int FUNC_7 (int *,TYPE_1__*) ;
USBD_StatusTypeDef FUNC_8 (USBD_HandleTypeDef *VAR_1 , USBD_SetupReqTypedef *VAR_2)
{
  USBD_StatusTypeDef VAR_3 = VAR_0;

  switch (VAR_2->bRequest)
  {
  case 132:

    FUNC_3 (VAR_1, VAR_2) ;
    break;

  case 130:
    FUNC_5(VAR_1, VAR_2);
    break;

  case 129:
    FUNC_6 (VAR_1 , VAR_2);
    break;

  case 133:
    FUNC_2 (VAR_1 , VAR_2);
    break;

  case 131:
    FUNC_4 (VAR_1 , VAR_2);
    break;


  case 128:
    FUNC_7 (VAR_1 , VAR_2);
    break;

  case 134:
    FUNC_0 (VAR_1 , VAR_2);
    break;

  default:
    FUNC_1(VAR_1 , VAR_2);
    break;
  }

  return VAR_3;
}
