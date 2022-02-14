
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;


 size_t FUNC_0 (int const*) ;
 scalar_t__ FUNC_1 (int const*,int const*,size_t) ;

wchar_t *FUNC_2(const wchar_t *VAR_0, const wchar_t *VAR_1)
{
 size_t VAR_2;

 if (!VAR_0 || !VAR_1)
  return ((void*)0);

 VAR_2 = FUNC_0(VAR_1);

 do {
  if (FUNC_1(VAR_0, VAR_1, VAR_2) == 0)
   return (wchar_t *)VAR_0;
 } while (*VAR_0++);

 return ((void*)0);
}
