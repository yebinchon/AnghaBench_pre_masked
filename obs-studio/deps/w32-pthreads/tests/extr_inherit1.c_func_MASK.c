
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sched_param {scalar_t__ sched_priority; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ,int*,struct sched_param*) ;
 int FUNC_2 () ;

void * FUNC_3(void * VAR_0)
{
  int VAR_1;
  struct sched_param VAR_2;

  FUNC_0(FUNC_1(FUNC_2(), &VAR_1, &VAR_2) == 0);
  return (void *) (size_t)VAR_2.sched_priority;
}
