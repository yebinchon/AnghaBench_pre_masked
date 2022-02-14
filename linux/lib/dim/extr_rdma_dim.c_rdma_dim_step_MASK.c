
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dim {scalar_t__ tune_state; int profile_ix; int steps_left; int steps_right; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_0(struct dim *VAR_5)
{
 if (VAR_5->tune_state == VAR_1) {
  if (VAR_5->profile_ix == (VAR_4 - 1))
   return VAR_2;
  VAR_5->profile_ix++;
  VAR_5->steps_right++;
 }
 if (VAR_5->tune_state == VAR_0) {
  if (VAR_5->profile_ix == 0)
   return VAR_2;
  VAR_5->profile_ix--;
  VAR_5->steps_left++;
 }

 return VAR_3;
}
