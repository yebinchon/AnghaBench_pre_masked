
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pthread_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (char*,int,int) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int *,int) ;
 scalar_t__ FUNC_4 (int *,int *,int ,int *) ;
 scalar_t__ FUNC_5 (int ,int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int VAR_6 ;

int
FUNC_7()
{
  int VAR_7, VAR_8, VAR_9;
  pthread_t VAR_10[VAR_1 + 1];

  for (VAR_8 = 1; VAR_8 <= VAR_1; VAR_8++)
    {
      int VAR_11 = VAR_8/2 + 1;

      FUNC_1("Barrier height = %d, Total threads %d\n", VAR_11, VAR_8);

      VAR_6 = 0;
      VAR_5 = 0;

      FUNC_0(FUNC_3(&VAR_2, ((void*)0), VAR_11) == 0);

      for (VAR_7 = 1; VAR_7 <= VAR_8; VAR_7++)
        {
          FUNC_0(FUNC_4(&VAR_10[VAR_7], ((void*)0), VAR_3, ((void*)0)) == 0);

          if (VAR_7 == VAR_11)
            {
              for (VAR_9 = 1; VAR_9 <= VAR_11; VAR_9++)
                {
                  FUNC_0(FUNC_5(VAR_10[VAR_9], ((void*)0)) == 0);
                }
              FUNC_0(FUNC_2(&VAR_2) == 0);
            }
        }

      for (VAR_7 = VAR_11+1; VAR_7 <= VAR_8; VAR_7++)
        {
          FUNC_0(FUNC_5(VAR_10[VAR_7], ((void*)0)) == 0);
        }

      FUNC_0(VAR_6 == 1);
      FUNC_0(VAR_5 == (VAR_11 - 1));

      FUNC_0(FUNC_2(&VAR_2) == VAR_0);
    }

  FUNC_0(FUNC_6(&VAR_4) == 0);

  return 0;
}
