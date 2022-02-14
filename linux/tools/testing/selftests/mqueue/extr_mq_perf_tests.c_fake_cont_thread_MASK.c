
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__* VAR_0 ;
 int* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int,int) ;
 scalar_t__ FUNC_1 () ;

void *FUNC_2(void *VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
  if (VAR_0[VAR_4] == FUNC_1())
   break;
 FUNC_0("\tStarted fake continuous mode thread %d on CPU %d\n", VAR_4,
        VAR_1[VAR_4]);
 while (1)
  ;
}
