
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int lshift; size_t* keys; scalar_t__ rshift; } ;
typedef TYPE_1__ HID_KEYBD_Info_TypeDef ;


 size_t* VAR_0 ;
 int * VAR_1 ;
 int * VAR_2 ;

uint8_t FUNC_0(HID_KEYBD_Info_TypeDef *VAR_3)
{
  uint8_t VAR_4;
  if((VAR_3->lshift == 1) || (VAR_3->rshift))
  {
  VAR_4 = VAR_2[VAR_0[VAR_3->keys[0]]];
  }
  else
  {
  VAR_4 = VAR_1[VAR_0[VAR_3->keys[0]]];
  }
  return VAR_4;
}
