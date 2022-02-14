
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sched_param {scalar_t__ sched_priority; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ,int*,struct sched_param*) ;
 int FUNC_3 () ;
 int VAR_3 ;

void * FUNC_4(void * VAR_4)
{
  int VAR_5;
  int VAR_6;
  struct sched_param VAR_7;

  VAR_6 = FUNC_1(&VAR_3);
  FUNC_0(VAR_6 == 0 || VAR_6 == VAR_0);
  FUNC_0(FUNC_2(FUNC_3(), &VAR_5, &VAR_7) == 0);
  FUNC_0(VAR_5 == VAR_1);
  VAR_6 = FUNC_1(&VAR_2);
  FUNC_0(VAR_6 == 0 || VAR_6 == VAR_0);
  return (void *) (size_t)VAR_7.sched_priority;
}
