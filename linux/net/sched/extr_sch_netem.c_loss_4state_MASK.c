
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct clgstate {int state; scalar_t__ a3; scalar_t__ a2; scalar_t__ a5; scalar_t__ a4; scalar_t__ a1; } ;
struct netem_sched_data {struct clgstate clg; } ;






 scalar_t__ FUNC_0 () ;

__attribute__((used)) static bool FUNC_1(struct netem_sched_data *VAR_0)
{
 struct clgstate *VAR_1 = &VAR_0->clg;
 u32 VAR_2 = FUNC_0();
 switch (VAR_1->state) {
 case 128:
  if (VAR_2 < VAR_1->a4) {
   VAR_1->state = 131;
   return 1;
  } else if (VAR_1->a4 < VAR_2 && VAR_2 < VAR_1->a1 + VAR_1->a4) {
   VAR_1->state = 130;
   return 1;
  } else if (VAR_1->a1 + VAR_1->a4 < VAR_2) {
   VAR_1->state = 128;
  }

  break;
 case 129:
  if (VAR_2 < VAR_1->a5) {
   VAR_1->state = 130;
   return 1;
  } else {
   VAR_1->state = 129;
  }

  break;
 case 130:
  if (VAR_2 < VAR_1->a3)
   VAR_1->state = 129;
  else if (VAR_1->a3 < VAR_2 && VAR_2 < VAR_1->a2 + VAR_1->a3) {
   VAR_1->state = 128;
  } else if (VAR_1->a2 + VAR_1->a3 < VAR_2) {
   VAR_1->state = 130;
   return 1;
  }
  break;
 case 131:
  VAR_1->state = 128;
  break;
 }

 return 0;
}
