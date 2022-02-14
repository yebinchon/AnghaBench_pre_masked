
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;


 int VAR_0 ;
 int VAR_1 ;
 int ** VAR_2 ;
 int ** FUNC_0 (int) ;
 int ** FUNC_1 (int **,int) ;

int FUNC_2(wchar_t* VAR_3)
{
   wchar_t** VAR_4;
   if ((VAR_1 % VAR_0) == 0)
   {
      if (VAR_2 == ((void*)0))
         VAR_4 = FUNC_0(sizeof(wchar_t*) * (1 + VAR_0));
      else
         VAR_4 = FUNC_1(VAR_2, sizeof(wchar_t*) * (VAR_1 + 1 + VAR_0));
      if (VAR_4 == ((void*)0))
         return -1;
      VAR_2 = VAR_4;
   }
   VAR_2[VAR_1++] = VAR_3;
   VAR_2[VAR_1] = ((void*)0);
   return 0;
}
