
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int ** VAR_2 ;
 scalar_t__ FUNC_1 (int **) ;
 scalar_t__ FUNC_2 (int **,int *) ;
 void* FUNC_3 (int *) ;
 int FUNC_4 () ;
 int FUNC_5 (unsigned int) ;
 scalar_t__ FUNC_6 (int *) ;

int
FUNC_7()
{
  int VAR_3, VAR_4;

  for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
    {

      FUNC_0(FUNC_3(((void*)0)) == (void *) 0);
      FUNC_0(FUNC_2(&VAR_2[VAR_3], ((void*)0)) == 0);
    }

  VAR_4 = VAR_0;
  (void) FUNC_5((unsigned)FUNC_6(((void*)0)));

  do
    {
      VAR_3 = (VAR_0 - 1) * FUNC_4() / VAR_1;
      if (VAR_2[VAR_3] != ((void*)0))
        {
          VAR_4--;
          FUNC_0(FUNC_1(&VAR_2[VAR_3]) == 0);

          FUNC_0(FUNC_3(((void*)0)) == (void *) 0);
        }
    }
  while (VAR_4 > 0);

  return 0;
}
