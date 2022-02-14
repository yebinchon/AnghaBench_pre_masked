
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int USBH_StatusTypeDef ;
struct TYPE_3__ {int* Pipes; } ;
typedef TYPE_1__ USBH_HandleTypeDef ;


 int VAR_0 ;

USBH_StatusTypeDef FUNC_0 (USBH_HandleTypeDef *VAR_1, uint8_t VAR_2)
{
   if(VAR_2 < 11)
   {
  VAR_1->Pipes[VAR_2] &= 0x7FFF;
   }
   return VAR_0;
}
