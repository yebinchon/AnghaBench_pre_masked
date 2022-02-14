
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;


 size_t FUNC_0 (char*,int const*,size_t) ;

size_t FUNC_1(const wchar_t *VAR_0, size_t VAR_1, char *VAR_2, size_t VAR_3)
{
 size_t VAR_4;

 if (!VAR_0)
  return 0;

 VAR_4 = VAR_2 ? (VAR_3 - 1) : FUNC_0(((void*)0), VAR_0, VAR_1);

 if (VAR_2) {
  if (!VAR_3)
   return 0;

  if (VAR_4)
   VAR_4 = FUNC_0(VAR_2, VAR_0, VAR_4 + 1);

  VAR_2[VAR_4] = 0;
 }

 return VAR_4;
}
