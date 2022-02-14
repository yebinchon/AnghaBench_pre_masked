
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sched_param {scalar_t__ sched_priority; } ;
typedef int pthread_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ,int*,struct sched_param*) ;
 int FUNC_2 () ;

void *
FUNC_3(void * VAR_1)
{
  int VAR_2;
  struct sched_param VAR_3;
  pthread_t VAR_4 = FUNC_2();

  FUNC_0(FUNC_1(VAR_4, &VAR_2, &VAR_3) == 0);
  FUNC_0(VAR_2 == VAR_0);
  return (void *) (size_t)(VAR_3.sched_priority);
}
