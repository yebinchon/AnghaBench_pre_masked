
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int pthread_t ;
struct TYPE_4__ {int i; int cs; } ;
struct TYPE_3__ {int cs; int i; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 int VAR_2 ;
 TYPE_2__ VAR_3 ;
 TYPE_1__ VAR_4 ;
 int VAR_5 ;
 int * VAR_6 ;
 int FUNC_3 (char*,int,int) ;
 scalar_t__ FUNC_4 (int *,int *,int ,void*) ;
 scalar_t__ FUNC_5 (int ,int *) ;
 int FUNC_6 () ;

int
FUNC_7()
{
  pthread_t VAR_7[VAR_1][VAR_0];
  int VAR_8, VAR_9;

  FUNC_1(&VAR_4.cs);
  FUNC_1(&VAR_3.cs);

  for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++)
    {
      VAR_6[VAR_9] = VAR_5;

      for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++)
        {

          while (0 != FUNC_4(&VAR_7[VAR_8][VAR_9], ((void*)0), VAR_2, (void *)(size_t)VAR_9))
            FUNC_6();
        }
    }

  for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++)
    for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++)
      if (FUNC_5(VAR_7[VAR_8][VAR_9], ((void*)0)) != 0)
        FUNC_3("Join failed for [thread,once] = [%d,%d]\n", VAR_8, VAR_9);






  FUNC_2(VAR_3.i == VAR_0 * VAR_1);
  FUNC_2(VAR_4.i == 0);

  FUNC_0(&VAR_3.cs);
  FUNC_0(&VAR_4.cs);

  return 0;
}
