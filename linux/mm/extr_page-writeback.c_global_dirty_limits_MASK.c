
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dirty_throttle_control {unsigned long bg_thresh; unsigned long thresh; int avail; int member_0; } ;


 int VAR_0 ;
 int FUNC_0 (struct dirty_throttle_control*) ;
 int FUNC_1 () ;

void FUNC_2(unsigned long *VAR_1, unsigned long *VAR_2)
{
 struct dirty_throttle_control VAR_3 = { VAR_0 };

 VAR_3.avail = FUNC_1();
 FUNC_0(&VAR_3);

 *VAR_1 = VAR_3.bg_thresh;
 *VAR_2 = VAR_3.thresh;
}
