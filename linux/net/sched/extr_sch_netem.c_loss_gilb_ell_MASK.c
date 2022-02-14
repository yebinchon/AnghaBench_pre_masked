
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clgstate {int state; int a3; int a2; int a4; int a1; } ;
struct netem_sched_data {struct clgstate clg; } ;




 int FUNC_0 () ;

__attribute__((used)) static bool FUNC_1(struct netem_sched_data *VAR_0)
{
 struct clgstate *VAR_1 = &VAR_0->clg;

 switch (VAR_1->state) {
 case 128:
  if (FUNC_0() < VAR_1->a1)
   VAR_1->state = 129;
  if (FUNC_0() < VAR_1->a4)
   return 1;
  break;
 case 129:
  if (FUNC_0() < VAR_1->a2)
   VAR_1->state = 128;
  if (FUNC_0() > VAR_1->a3)
   return 1;
 }

 return 0;
}
