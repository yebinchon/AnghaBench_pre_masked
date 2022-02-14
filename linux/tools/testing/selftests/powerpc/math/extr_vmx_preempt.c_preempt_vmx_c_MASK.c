
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int **,int *,int *) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int VAR_0 ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int ** VAR_2 ;

void *FUNC_4(void *VAR_3)
{
 int VAR_4, VAR_5;
 FUNC_3(FUNC_1());
 for (VAR_4 = 0; VAR_4 < 12; VAR_4++)
  for (VAR_5 = 0; VAR_5 < 4; VAR_5++)
   VAR_2[VAR_4][VAR_5] = FUNC_2();


 FUNC_0(VAR_2, &VAR_1, &VAR_0);
 return VAR_3;
}
