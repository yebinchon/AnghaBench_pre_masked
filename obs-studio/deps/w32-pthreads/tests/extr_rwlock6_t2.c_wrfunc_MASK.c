
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int VAR_3 ;

void * FUNC_4(void * VAR_4)
{
  int VAR_5;

  VAR_5 = FUNC_2(&VAR_3, &VAR_1);
  if ((int) (size_t)VAR_4 == 1)
    {
      FUNC_1(VAR_5 == 0);
      FUNC_0(2000);
      VAR_2 += 10;
      FUNC_1(FUNC_3(&VAR_3) == 0);
      return ((void *)(size_t)VAR_2);
    }
  else if ((int) (size_t)VAR_4 == 2)
    {
      FUNC_1(VAR_5 == VAR_0);
      return ((void *) 100);
    }

  return ((void *)(size_t)-1);
}
