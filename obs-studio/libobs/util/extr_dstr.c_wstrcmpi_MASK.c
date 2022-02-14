
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ wchar_t ;


 int FUNC_0 (scalar_t__ const) ;
 scalar_t__* VAR_0 ;

int FUNC_1(const wchar_t *VAR_1, const wchar_t *VAR_2)
{
 if (!VAR_1)
  VAR_1 = VAR_0;
 if (!VAR_2)
  VAR_2 = VAR_0;

 do {
  wchar_t VAR_3 = (wchar_t)FUNC_0(*VAR_1);
  wchar_t VAR_4 = (wchar_t)FUNC_0(*VAR_2);

  if (VAR_3 < VAR_4)
   return -1;
  else if (VAR_3 > VAR_4)
   return 1;
 } while (*VAR_1++ && *VAR_2++);

 return 0;
}
