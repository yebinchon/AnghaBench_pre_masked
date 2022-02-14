
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pthread_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int *,int *,int ,void*) ;
 scalar_t__ FUNC_3 (int ,void**) ;

int
FUNC_4(int VAR_1, char * VAR_2[])
{
 pthread_t VAR_3[4];
 int VAR_4;
 void* VAR_5 = (void*)-1;


 for (VAR_4 = 0; VAR_4 < 4; VAR_4++)
   {
     FUNC_1(FUNC_2(&VAR_3[VAR_4], ((void*)0), VAR_0, (void *)(size_t)VAR_4) == 0);
   }


 FUNC_0(2 * 100 + 50);

 for (VAR_4 = 0; VAR_4 < 4; VAR_4++)
   {
     FUNC_1(FUNC_3(VAR_3[VAR_4], &VAR_5) == 0);
     FUNC_1((int)(size_t)VAR_5 == VAR_4);
   }


 return 0;
}
