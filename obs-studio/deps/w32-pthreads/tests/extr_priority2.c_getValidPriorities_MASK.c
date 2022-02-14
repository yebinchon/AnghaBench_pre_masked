
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sched_param {int sched_priority; } ;
typedef int pthread_t ;
typedef int HANDLE ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int ,int ,struct sched_param*) ;
 int * VAR_4 ;

void *
FUNC_5(void * VAR_5)
{
  int VAR_6;
  pthread_t VAR_7 = FUNC_3();
  HANDLE VAR_8 = FUNC_2(VAR_7);
  struct sched_param VAR_9;

  for (VAR_6 = VAR_3;
       VAR_6 <= VAR_2;
       VAR_6++)
    {





        VAR_9.sched_priority = VAR_6;
 FUNC_1(FUNC_4(VAR_7, VAR_1, &VAR_9) == 0);
 VAR_4[VAR_6+(VAR_0/2)] = FUNC_0(VAR_8);
    }

  return (void *) 0;
}
