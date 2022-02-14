
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pthread_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*,int) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int *,int) ;
 scalar_t__ FUNC_4 (int *,int *,int ,int *) ;
 scalar_t__ FUNC_5 (int ,int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int VAR_4 ;

int
FUNC_7()
{
  int VAR_5, VAR_6;
  pthread_t VAR_7[VAR_0 + 1];

  for (VAR_6 = 1; VAR_6 <= VAR_0; VAR_6++)
    {
      FUNC_1("Barrier height = %d\n", VAR_6);

      VAR_4 = 0;

      FUNC_0(FUNC_3(&VAR_1, ((void*)0), VAR_6) == 0);

      for (VAR_5 = 1; VAR_5 <= VAR_6; VAR_5++)
        {
          FUNC_0(FUNC_4(&VAR_7[VAR_5], ((void*)0), VAR_2, ((void*)0)) == 0);
        }

      for (VAR_5 = 1; VAR_5 <= VAR_6; VAR_5++)
        {
          FUNC_0(FUNC_5(VAR_7[VAR_5], ((void*)0)) == 0);
        }

      FUNC_0(VAR_4 == 1);

      FUNC_0(FUNC_2(&VAR_1) == 0);
    }

  FUNC_0(FUNC_6(&VAR_3) == 0);

  return 0;
}
