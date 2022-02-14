
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int USBD_StatusTypeDef ;
struct TYPE_3__ {int const* pClass; } ;
typedef TYPE_1__ USBD_HandleTypeDef ;
typedef int USBD_ClassTypeDef ;


 int VAR_0 ;
 int VAR_1 ;

USBD_StatusTypeDef FUNC_0(USBD_HandleTypeDef *VAR_2, const USBD_ClassTypeDef *VAR_3)
{
  USBD_StatusTypeDef VAR_4 = VAR_1;
  if(VAR_3 != 0)
  {

    VAR_2->pClass = VAR_3;
    VAR_4 = VAR_1;
  }
  else
  {
    VAR_4 = VAR_0;
  }

  return VAR_4;
}
