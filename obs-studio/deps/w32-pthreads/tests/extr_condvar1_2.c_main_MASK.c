
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pthread_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int ** VAR_3 ;
 scalar_t__ FUNC_1 (int **) ;
 scalar_t__ FUNC_2 (int **,int *) ;
 scalar_t__ FUNC_3 (int *,int *,int ,int *) ;
 scalar_t__ FUNC_4 (int ,void**) ;
 int VAR_4 ;
 int FUNC_5 () ;
 int FUNC_6 (unsigned int) ;
 scalar_t__ FUNC_7 (int *) ;

int
FUNC_8()
{
  int VAR_5, VAR_6, VAR_7;
  void* VAR_8 = (void*)-1;
  pthread_t VAR_9;

  for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++)
    {
      for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++)
        {
          FUNC_0(FUNC_2(&VAR_3[VAR_5], ((void*)0)) == 0);
        }

      VAR_6 = VAR_0;
      (void) FUNC_6((unsigned)FUNC_7(((void*)0)));


      FUNC_0(FUNC_3(&VAR_9, ((void*)0), VAR_4, ((void*)0)) == 0);

      do
        {
          VAR_5 = (VAR_0 - 1) * FUNC_5() / VAR_2;
          if (VAR_3[VAR_5] != ((void*)0))
            {
              VAR_6--;
              FUNC_0(FUNC_1(&VAR_3[VAR_5]) == 0);
            }
        }
      while (VAR_6 > 0);

      FUNC_0(FUNC_4(VAR_9, &VAR_8) == 0);
      FUNC_0 ((int)(size_t)VAR_8 == 0);
    }

  return 0;
}
