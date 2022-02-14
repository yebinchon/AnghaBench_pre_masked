
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int USBH_StatusTypeDef ;
struct TYPE_3__ {scalar_t__ ClassNumber; int ** pClass; } ;
typedef TYPE_1__ USBH_HandleTypeDef ;
typedef int USBH_ClassTypeDef ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

USBH_StatusTypeDef FUNC_1(USBH_HandleTypeDef *VAR_3, USBH_ClassTypeDef *VAR_4)
{
  USBH_StatusTypeDef VAR_5 = VAR_2;

  if(VAR_4 != 0)
  {
    if(VAR_3->ClassNumber < VAR_1)
    {

      VAR_3->pClass[VAR_3->ClassNumber++] = VAR_4;
      VAR_5 = VAR_2;
    }
    else
    {
      FUNC_0("Max Class Number reached");
      VAR_5 = VAR_0;
    }
  }
  else
  {
    FUNC_0("Invalid Class handle");
    VAR_5 = VAR_0;
  }

  return VAR_5;
}
