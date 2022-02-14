
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct oom_control {int order; int gfp_mask; int * memcg; int * nodemask; int * zonelist; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int FUNC_3 (struct oom_control*) ;

void FUNC_4(void)
{
 struct oom_control VAR_1 = {
  .zonelist = ((void*)0),
  .nodemask = ((void*)0),
  .memcg = ((void*)0),
  .gfp_mask = 0,
  .order = 0,
 };

 if (FUNC_0(1))
  return;

 if (!FUNC_1(&VAR_0))
  return;
 FUNC_3(&VAR_1);
 FUNC_2(&VAR_0);
}
