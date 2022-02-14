
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dim {int tired; int tune_state; int profile_ix; int steps_left; int steps_right; } ;




 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_0(struct dim *VAR_4)
{
 if (VAR_4->tired == (VAR_3 * 2))
  return VAR_2;

 switch (VAR_4->tune_state) {
 case 129:
 case 128:
  break;
 case 130:
  if (VAR_4->profile_ix == (VAR_3 - 1))
   return VAR_0;
  VAR_4->profile_ix++;
  VAR_4->steps_right++;
  break;
 case 131:
  if (VAR_4->profile_ix == 0)
   return VAR_0;
  VAR_4->profile_ix--;
  VAR_4->steps_left++;
  break;
 }

 VAR_4->tired++;
 return VAR_1;
}
