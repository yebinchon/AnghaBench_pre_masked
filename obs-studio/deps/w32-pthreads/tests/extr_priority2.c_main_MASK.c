
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sched_param {int sched_priority; } ;
typedef int pthread_t ;


 scalar_t__ FUNC_0 (int ) ;
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
 int VAR_8 ;
 scalar_t__ FUNC_3 (int *,int *,int) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,int *,int ,int *) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ,void**) ;
 int FUNC_8 () ;
 scalar_t__ FUNC_9 (int ,int ,struct sched_param*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int VAR_9 ;
 scalar_t__* VAR_10 ;

int
FUNC_12()
{
  pthread_t VAR_11;
  void * VAR_12 = ((void*)0);
  int VAR_13;
  struct sched_param VAR_14;

  FUNC_2((VAR_7 = FUNC_10(VAR_3)) != -1);
  FUNC_2((VAR_8 = FUNC_11(VAR_3)) != -1);

  FUNC_2(FUNC_5(&VAR_11, ((void*)0), VAR_6, ((void*)0)) == 0);
  FUNC_2(FUNC_7(VAR_11, &VAR_12) == 0);

  FUNC_2(FUNC_3(&VAR_9, ((void*)0), 2) == 0);
  FUNC_2(FUNC_3(&VAR_4, ((void*)0), 2) == 0);





  FUNC_1(FUNC_6(FUNC_8()),
                    VAR_2);

  for (VAR_14.sched_priority = VAR_8;
       VAR_14.sched_priority <= VAR_7;
       VAR_14.sched_priority++)
    {
      FUNC_2(FUNC_5(&VAR_11, ((void*)0), VAR_5, ((void*)0)) == 0);
      FUNC_2(FUNC_9(VAR_11, VAR_3, &VAR_14) == 0);
      VAR_13 = FUNC_4(&VAR_9);
      FUNC_2(VAR_13 == 0 || VAR_13 == VAR_0);
      VAR_13 = FUNC_4(&VAR_4);
      FUNC_2(VAR_13 == 0 || VAR_13 == VAR_0);
      FUNC_2(FUNC_0(FUNC_6(VAR_11)) ==
   VAR_10[VAR_14.sched_priority+(VAR_1/2)]);
      FUNC_7(VAR_11, &VAR_12);
      FUNC_2(VAR_14.sched_priority == (int)(size_t)VAR_12);
    }

  return 0;
}
