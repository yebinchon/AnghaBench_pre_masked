
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char wchar_t ;


 int VAR_0 ;
 int* FUNC_0 () ;
 char FUNC_1 (char) ;

int FUNC_2(wchar_t* VAR_1, size_t VAR_2)
{
  wchar_t *VAR_3=VAR_1;
  if (!VAR_1 || !VAR_2)
  {
    if (VAR_1) *VAR_1 = '\0';
    *FUNC_0() = VAR_0;
    return VAR_0;
  }

  while (VAR_2--)
  {
    if (!*VAR_3) return 0;
    *VAR_3 = FUNC_1(*VAR_3);
    VAR_3++;
  }



  *VAR_1 = '\0';
  *FUNC_0() = VAR_0;
  return VAR_0;
}
