
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int pthread_t ;
struct TYPE_5__ {int threadnum; int oncenum; } ;
typedef TYPE_1__ bag_t ;
struct TYPE_7__ {int i; int cs; } ;
struct TYPE_6__ {int cs; int i; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int) ;
 int VAR_3 ;
 TYPE_4__ VAR_4 ;
 TYPE_3__ VAR_5 ;
 int VAR_6 ;
 int * VAR_7 ;
 int VAR_8 ;
 int FUNC_7 (char*,...) ;
 scalar_t__ FUNC_8 (int *,int *,int ,void*) ;
 scalar_t__ FUNC_9 (int ,int *) ;
 int FUNC_10 () ;
 TYPE_1__** VAR_9 ;

int
FUNC_11()
{
  pthread_t VAR_10[VAR_1][VAR_0];
  int VAR_11, VAR_12;

  FUNC_3(&VAR_8);
  FUNC_3(&VAR_5.cs);
  FUNC_3(&VAR_4.cs);
  FUNC_4(FUNC_1(), VAR_2);

  FUNC_5(FUNC_2(), -2);

  for (VAR_12 = 0; VAR_12 < VAR_0; VAR_12++)
    {
      VAR_7[VAR_12] = VAR_6;

      for (VAR_11 = 0; VAR_11 < VAR_1; VAR_11++)
        {
   bag_t * VAR_13 = &VAR_9[VAR_11][VAR_12];
   VAR_13->threadnum = VAR_11;
   VAR_13->oncenum = VAR_12;

          while (0 != FUNC_8(&VAR_10[VAR_11][VAR_12], ((void*)0), VAR_3, (void *)VAR_13))
            FUNC_10();
        }
    }

  for (VAR_12 = 0; VAR_12 < VAR_0; VAR_12++)
    for (VAR_11 = 0; VAR_11 < VAR_1; VAR_11++)
      if (FUNC_9(VAR_10[VAR_11][VAR_12], ((void*)0)) != 0)
        FUNC_7("Join failed for [thread,once] = [%d,%d]\n", VAR_11, VAR_12);






  FUNC_6(VAR_4.i == VAR_0 * VAR_1);
  FUNC_6(VAR_5.i == 0);

  FUNC_0(&VAR_4.cs);
  FUNC_0(&VAR_5.cs);
  FUNC_0(&VAR_8);

  return 0;
}
