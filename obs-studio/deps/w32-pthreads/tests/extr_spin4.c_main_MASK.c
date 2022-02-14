
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pthread_t ;
typedef int PTW32_STRUCT_TIMEB ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (int *,int *,int ,int *) ;
 scalar_t__ FUNC_6 (int ,void**) ;
 int FUNC_7 () ;
 scalar_t__ FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int *) ;
 int FUNC_11 () ;
 int VAR_3 ;

int
FUNC_12()
{
  void* VAR_4 = (void*)0;
  pthread_t VAR_5;
  int VAR_6;
  PTW32_STRUCT_TIMEB VAR_7;

  if ((VAR_6 = FUNC_7()) == 1)
    {
      FUNC_4("Test not run - it requires multiple CPUs.\n");
 FUNC_3(0);
    }

  FUNC_2(FUNC_9(&VAR_2) == 0);

  FUNC_2(FUNC_5(&VAR_5, ((void*)0), VAR_1, ((void*)0)) == 0);

  while (VAR_3 == 0)
    {
      FUNC_11();
    }

  do
    {
      FUNC_11();
      FUNC_1(&VAR_7);
    }
  while (FUNC_0(VAR_0, VAR_7) <= 1000);

  FUNC_2(FUNC_10(&VAR_2) == 0);

  FUNC_2(FUNC_6(VAR_5, &VAR_4) == 0);
  FUNC_2((int)(size_t)VAR_4 > 1000);

  FUNC_2(FUNC_8(&VAR_2) == 0);

  FUNC_2(VAR_3 == 1);

  return 0;
}
