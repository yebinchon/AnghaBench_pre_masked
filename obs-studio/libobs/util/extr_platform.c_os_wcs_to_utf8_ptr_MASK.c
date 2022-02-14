
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;


 char* FUNC_0 (size_t) ;
 size_t FUNC_1 (int const*,size_t,char*,size_t) ;

size_t FUNC_2(const wchar_t *VAR_0, size_t VAR_1, char **VAR_2)
{
 if (VAR_0) {
  size_t VAR_3 = FUNC_1(VAR_0, VAR_1, ((void*)0), 0);

  *VAR_2 = FUNC_0((VAR_3 + 1) * sizeof(char));
  return FUNC_1(VAR_0, VAR_1, *VAR_2, VAR_3 + 1);
 } else {
  *VAR_2 = ((void*)0);
  return 0;
 }
}
