
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dim {int tune_state; int steps_left; int steps_right; } ;






bool FUNC_0(struct dim *VAR_0)
{
 switch (VAR_0->tune_state) {
 case 129:
 case 128:
  return 1;
 case 130:
  return (VAR_0->steps_left > 1) && (VAR_0->steps_right == 1);
 default:
  return (VAR_0->steps_right > 1) && (VAR_0->steps_left == 1);
 }
}
