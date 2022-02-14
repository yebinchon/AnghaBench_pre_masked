
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sem_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *,int*) ;
 scalar_t__ FUNC_2 (int *,int ,int) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;

int
FUNC_5()
{
  sem_t VAR_2;
 int VAR_3 = 0;
 int VAR_4;

  FUNC_0(FUNC_2(&VAR_2, VAR_1, VAR_0) == 0);
 FUNC_0(FUNC_1(&VAR_2, &VAR_3) == 0);
 FUNC_0(VAR_3 == VAR_0);


 for (VAR_4 = VAR_0 - 1; VAR_4 >= 0; VAR_4--)
  {
   FUNC_0(FUNC_4(&VAR_2) == 0);
   FUNC_0(FUNC_1(&VAR_2, &VAR_3) == 0);

   FUNC_0(VAR_3 == VAR_4);
  }

 for (VAR_4 = 1; VAR_4 <= VAR_0; VAR_4++)
  {
   FUNC_0(FUNC_3(&VAR_2) == 0);
   FUNC_0(FUNC_1(&VAR_2, &VAR_3) == 0);

   FUNC_0(VAR_3 == VAR_4);
  }

  return 0;
}
