
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pthread_t ;
typedef int pthread_attr_t ;
typedef int LPLONG ;


 int FUNC_0 (int ,long) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int ) ;
 scalar_t__ FUNC_5 (int *,int *,int ,int *) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 () ;
 int* VAR_4 ;

int
FUNC_8()
{
  pthread_t VAR_5[VAR_0];
  pthread_attr_t VAR_6;
  int VAR_7;

  FUNC_2(FUNC_3(&VAR_6) == 0);
  FUNC_2(FUNC_4(&VAR_6, VAR_1) == 0);

  for (VAR_7 = 0; VAR_7 < VAR_0+2; VAR_7++)
    {
      VAR_4[VAR_7] = 0;
    }

  for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++)
    {
      if (VAR_0/2 == VAR_7)
        {

          VAR_4[(int)FUNC_6(FUNC_7())] = 1;
        }
      FUNC_2(FUNC_5(&VAR_5[VAR_7], &VAR_6, VAR_3, ((void*)0)) == 0);
    }

  while (VAR_0 > FUNC_0((LPLONG)&VAR_2, 0L))
    FUNC_1(100);

  FUNC_1(100);

  FUNC_2(VAR_4[0] == 0);
  for (VAR_7 = 1; VAR_7 < VAR_0+2; VAR_7++)
    {
      FUNC_2(VAR_4[VAR_7] == 1);
    }

  return 0;
}
