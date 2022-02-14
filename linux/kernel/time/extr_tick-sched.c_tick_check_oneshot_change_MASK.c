
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tick_sched {scalar_t__ nohz_mode; int check_clocks; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int *) ;
 struct tick_sched* FUNC_1 (int *) ;
 int VAR_1 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;

int FUNC_5(int VAR_2)
{
 struct tick_sched *VAR_3 = FUNC_1(&VAR_1);

 if (!FUNC_0(0, &VAR_3->check_clocks))
  return 0;

 if (VAR_3->nohz_mode != VAR_0)
  return 0;

 if (!FUNC_4() || !FUNC_2())
  return 0;

 if (!VAR_2)
  return 1;

 FUNC_3();
 return 0;
}
