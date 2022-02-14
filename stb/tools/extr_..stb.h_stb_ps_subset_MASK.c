
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int stb_ps ;


 void** FUNC_0 (int *,int*) ;
 scalar_t__ FUNC_1 (void*) ;
 int FUNC_2 (int *,void*) ;

int FUNC_3(stb_ps *VAR_0, stb_ps *VAR_1)
{
   int VAR_2, VAR_3;
   void **VAR_4 = FUNC_0(VAR_1, &VAR_3);
   for(VAR_2=0; VAR_2 < VAR_3; ++VAR_2)
      if (FUNC_1(VAR_4[VAR_2]))
         if (!FUNC_2(VAR_0, VAR_4[VAR_2]))
            return 0;
   return 1;
}
