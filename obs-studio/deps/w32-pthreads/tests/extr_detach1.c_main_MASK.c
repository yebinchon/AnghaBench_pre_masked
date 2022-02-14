
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pthread_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int *,int *,int ,void*) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,int ) ;

int
FUNC_5(int VAR_3, char * VAR_4[])
{
 pthread_t VAR_5[VAR_1];
 int VAR_6;


 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++)
   {
     FUNC_1(FUNC_2(&VAR_5[VAR_6], ((void*)0), VAR_2, (void *)(size_t)VAR_6) == 0);
   }


 FUNC_0(VAR_1/2 * 10 + 50);

 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++)
   {
     FUNC_1(FUNC_3(VAR_5[VAR_6]) == 0);
   }

 FUNC_0(VAR_1 * 10 + 100);






 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++)
   {
     FUNC_1(FUNC_4(VAR_5[VAR_6], 0) == VAR_0);
   }


 return 0;
}
