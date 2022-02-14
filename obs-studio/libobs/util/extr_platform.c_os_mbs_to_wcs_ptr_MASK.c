
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;


 int * FUNC_0 (size_t) ;
 size_t FUNC_1 (char const*,size_t,int *,size_t) ;

size_t FUNC_2(const char *VAR_0, size_t VAR_1, wchar_t **VAR_2)
{
 if (VAR_0) {
  size_t VAR_3 = FUNC_1(VAR_0, VAR_1, ((void*)0), 0);

  *VAR_2 = FUNC_0((VAR_3 + 1) * sizeof(wchar_t));
  return FUNC_1(VAR_0, VAR_1, *VAR_2, VAR_3 + 1);
 } else {
  *VAR_2 = ((void*)0);
  return 0;
 }
}
