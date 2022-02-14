
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_4__ {int* Pipes; } ;
typedef TYPE_1__ USBH_HandleTypeDef ;


 int FUNC_0 (TYPE_1__*) ;

uint8_t FUNC_1 (USBH_HandleTypeDef *VAR_0, uint8_t VAR_1)
{
  uint16_t VAR_2;

  VAR_2 = FUNC_0(VAR_0);

  if (VAR_2 != 0xFFFF)
  {
 VAR_0->Pipes[VAR_2] = 0x8000 | VAR_1;
  }
  return VAR_2;
}
