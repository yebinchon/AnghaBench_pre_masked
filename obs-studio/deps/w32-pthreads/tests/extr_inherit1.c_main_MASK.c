
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sched_param {int sched_priority; } ;
typedef int pthread_t ;
typedef int pthread_attr_t ;
typedef int HANDLE ;


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
 scalar_t__ FUNC_3 (int *,int*) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,int) ;
 scalar_t__ FUNC_6 (int *,struct sched_param*) ;
 scalar_t__ FUNC_7 (int *,int *,int ,int *) ;
 scalar_t__ FUNC_8 (int ,int*,struct sched_param*) ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ,void**) ;
 int FUNC_11 () ;
 scalar_t__ FUNC_12 (int ,int,struct sched_param*) ;
 int FUNC_13 (int) ;
 int FUNC_14 (int) ;
 scalar_t__* VAR_8 ;

int
FUNC_15()
{
  pthread_t VAR_9;
  pthread_t VAR_10 = FUNC_11();
  pthread_attr_t VAR_11;
  void * VAR_12 = ((void*)0);
  struct sched_param VAR_13;
  struct sched_param VAR_14;
  int VAR_15;
  int VAR_16;
  int VAR_17 = -1;
  pthread_t VAR_18 = FUNC_11();
  HANDLE VAR_19 = FUNC_9(VAR_18);

  FUNC_2((VAR_6 = FUNC_13(VAR_3)) != -1);
  FUNC_2((VAR_7 = FUNC_14(VAR_3)) != -1);

  FUNC_2(FUNC_7(&VAR_9, ((void*)0), VAR_5, ((void*)0)) == 0);
  FUNC_2(FUNC_10(VAR_9, &VAR_12) == 0);

  FUNC_2(FUNC_4(&VAR_11) == 0);
  FUNC_2(FUNC_5(&VAR_11, VAR_0) == 0);
  FUNC_2(FUNC_3(&VAR_11, &VAR_17) == 0);
  FUNC_2(VAR_17 == VAR_0);

  for (VAR_15 = VAR_7; VAR_15 <= VAR_6; VAR_15++)
    {
      VAR_14.sched_priority = VAR_15;


      FUNC_1(VAR_19, VAR_2);


      FUNC_2(FUNC_12(VAR_10, VAR_3, &VAR_14) == 0);
      FUNC_2(FUNC_8(VAR_10, &VAR_16, &VAR_14) == 0);
      FUNC_2(VAR_16 == VAR_3);

      FUNC_2(VAR_14.sched_priority == VAR_15);
      FUNC_2(FUNC_0(VAR_19) ==
               VAR_8[VAR_15+(VAR_1/2)]);

      for (VAR_13.sched_priority = VAR_15;
           VAR_13.sched_priority <= VAR_6;
           VAR_13.sched_priority++)
        {

          FUNC_2(FUNC_6(&VAR_11, &VAR_13) == 0);
          FUNC_2(FUNC_7(&VAR_9, &VAR_11, VAR_4, ((void*)0)) == 0);
          FUNC_10(VAR_9, &VAR_12);
          FUNC_2((int)(size_t) VAR_12 == VAR_14.sched_priority);
        }
    }

  return 0;
}
