
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;


 int *** FUNC_0 () ;
 int FUNC_1 (int *,int const*,size_t) ;
 int * FUNC_2 (int *,int) ;
 size_t FUNC_3 (int const*) ;

wchar_t *FUNC_4(const wchar_t *VAR_0)
{
   wchar_t **VAR_1;
   size_t VAR_2 = FUNC_3(VAR_0);

   for (VAR_1 = *FUNC_0(); *VAR_1; VAR_1++)
   {
      wchar_t *VAR_3 = *VAR_1;
      wchar_t *VAR_4 = FUNC_2(VAR_3, L'=');
      if (VAR_4 && ((unsigned int)(VAR_4 - VAR_3) == VAR_2) && !FUNC_1(VAR_3, VAR_0, VAR_2))
         return VAR_4 + 1;
   }
   return ((void*)0);
}
