
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dim {int tune_state; int steps_right; int steps_left; } ;







void FUNC_0(struct dim *VAR_0)
{
 switch (VAR_0->tune_state) {
 case 129:
 case 128:
  break;
 case 130:
  VAR_0->tune_state = 131;
  VAR_0->steps_left = 0;
  break;
 case 131:
  VAR_0->tune_state = 130;
  VAR_0->steps_right = 0;
  break;
 }
}
