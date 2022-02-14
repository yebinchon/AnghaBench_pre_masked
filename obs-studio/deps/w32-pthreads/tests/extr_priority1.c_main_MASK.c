
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sched_param {int sched_priority; } ;
typedef int pthread_t ;
typedef int pthread_attr_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (char*,...) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,int ) ;
 scalar_t__ FUNC_6 (int *,struct sched_param*) ;
 scalar_t__ FUNC_7 (int *,int *,int ,void*) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ,void**) ;
 int FUNC_10 () ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int* VAR_8 ;

int
FUNC_13()
{
  pthread_t VAR_9;
  pthread_attr_t VAR_10;
  void * VAR_11 = ((void*)0);
  struct sched_param VAR_12;

  FUNC_2((VAR_6 = FUNC_11(VAR_3)) != -1);
  FUNC_2((VAR_7 = FUNC_12(VAR_3)) != -1);

  FUNC_2(FUNC_7(&VAR_9, ((void*)0), VAR_5, ((void*)0)) == 0);
  FUNC_2(FUNC_9(VAR_9, &VAR_11) == 0);

  FUNC_2(FUNC_4(&VAR_10) == 0);
  FUNC_2(FUNC_5(&VAR_10, VAR_0) == 0);


  FUNC_1(FUNC_8(FUNC_10()),
                    VAR_2);

  FUNC_3("Using pthread_getschedparam\n");
  FUNC_3("%10s %10s %10s\n", "Set value", "Get value", "Win priority");

  for (VAR_12.sched_priority = VAR_7;
       VAR_12.sched_priority <= VAR_6;
       VAR_12.sched_priority++)
    {
      int VAR_13;

      FUNC_2(FUNC_6(&VAR_10, &VAR_12) == 0);
      FUNC_2(FUNC_7(&VAR_9, &VAR_10, VAR_4, (void *) &VAR_10) == 0);

      FUNC_2((VAR_13 = FUNC_0(FUNC_8(VAR_9)))
             == VAR_8[VAR_12.sched_priority+(VAR_1/2)]);

      FUNC_2(FUNC_9(VAR_9, &VAR_11) == 0);

      FUNC_2(VAR_12.sched_priority == (int)(size_t) VAR_11);
      FUNC_3("%10d %10d %10d\n", VAR_12.sched_priority, (int)(size_t) VAR_11, VAR_13);
    }

  return 0;
}
