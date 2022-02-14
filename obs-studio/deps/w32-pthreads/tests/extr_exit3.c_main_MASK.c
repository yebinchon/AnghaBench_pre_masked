
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pthread_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int *,int *,int ,void*) ;

int
FUNC_3(int VAR_1, char * VAR_2[])
{
 pthread_t VAR_3[4];
 int VAR_4;


 for (VAR_4 = 0; VAR_4 < 4; VAR_4++)
   {
     FUNC_1(FUNC_2(&VAR_3[VAR_4], ((void*)0), VAR_0, (void *)(size_t)VAR_4) == 0);
   }

 FUNC_0(400);


 return 0;
}
