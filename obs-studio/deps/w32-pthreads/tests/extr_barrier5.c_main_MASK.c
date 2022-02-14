
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pthread_t ;
typedef int LONG ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (char*,int,int) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int *,int) ;
 scalar_t__ FUNC_4 (int *,int *,int ,void*) ;
 scalar_t__ FUNC_5 (int ,void**) ;
 scalar_t__ FUNC_6 (int *) ;
 scalar_t__ VAR_6 ;

int
FUNC_7()
{
  int VAR_7, VAR_8;
  void* VAR_9;
  int VAR_10;
  LONG VAR_11;
  pthread_t VAR_12[VAR_2 + 1];

  for (VAR_8 = 1; VAR_8 <= VAR_2; VAR_8++)
    {
      int VAR_13 = VAR_8<VAR_1?VAR_8:VAR_1;

      VAR_6 = 0;
      VAR_11 = VAR_13 * VAR_0;

      FUNC_1("Threads=%d, Barrier height=%d\n", VAR_8, VAR_13);

      FUNC_0(FUNC_3(&VAR_3, ((void*)0), VAR_13) == 0);

      for (VAR_7 = 1; VAR_7 <= VAR_8; VAR_7++)
        {
          FUNC_0(FUNC_4(&VAR_12[VAR_7], ((void*)0), VAR_4, (void *)(size_t)VAR_11) == 0);
        }

      VAR_10 = 0;
      for (VAR_7 = 1; VAR_7 <= VAR_8; VAR_7++)
        {
          FUNC_0(FUNC_5(VAR_12[VAR_7], &VAR_9) == 0);
          VAR_10 += (int)(size_t)VAR_9;
        }

      FUNC_0(VAR_10 == VAR_0);

      FUNC_0(FUNC_2(&VAR_3) == 0);
    }

  FUNC_0(FUNC_6(&VAR_5) == 0);

  return 0;
}
