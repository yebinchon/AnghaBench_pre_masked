
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_3__ {int* Pipes; } ;
typedef TYPE_1__ USBH_HandleTypeDef ;



__attribute__((used)) static uint16_t FUNC_0 (USBH_HandleTypeDef *VAR_0)
{
  uint8_t VAR_1 = 0;

  for (VAR_1 = 0 ; VAR_1 < 11 ; VAR_1++)
  {
 if ((VAR_0->Pipes[VAR_1] & 0x8000) == 0)
 {
    return VAR_1;
 }
  }
  return 0xFFFF;
}
