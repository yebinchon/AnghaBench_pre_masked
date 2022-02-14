
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (int*,int) ;
 int FUNC_2 (int*) ;
 int FUNC_3 (int*) ;
 int FUNC_4 (int*,int) ;

int FUNC_5(int VAR_0, char **VAR_1)
{
   int VAR_2;
   int *VAR_3 = ((void*)0);

   for (VAR_2=0; VAR_2 < 1000000; ++VAR_2)
      FUNC_4(VAR_3, VAR_2);

   FUNC_0(FUNC_2(VAR_3) == 1000000);
   for (VAR_2=0; VAR_2 < 1000000; ++VAR_2)
      FUNC_0(VAR_3[VAR_2] == VAR_2);

   FUNC_3(VAR_3);
   VAR_3 = ((void*)0);

   for (VAR_2=0; VAR_2 < 1000; ++VAR_2)
      FUNC_1(VAR_3, 1000);
   FUNC_0(FUNC_2(VAR_3) == 1000000);

   return 0;
}
