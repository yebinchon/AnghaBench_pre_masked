
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct oom_control {int order; int gfp_mask; struct mem_cgroup* memcg; int * nodemask; int * zonelist; } ;
struct mem_cgroup {int dummy; } ;
typedef int gfp_t ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (struct oom_control*) ;
 scalar_t__ FUNC_3 () ;

__attribute__((used)) static bool FUNC_4(struct mem_cgroup *VAR_1, gfp_t VAR_2,
         int VAR_3)
{
 struct oom_control VAR_4 = {
  .zonelist = ((void*)0),
  .nodemask = ((void*)0),
  .memcg = VAR_1,
  .gfp_mask = VAR_2,
  .order = VAR_3,
 };
 bool VAR_5;

 if (FUNC_0(&VAR_0))
  return 1;




 VAR_5 = FUNC_3() || FUNC_2(&VAR_4);
 FUNC_1(&VAR_0);
 return VAR_5;
}
