
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int _TCHAR ;



_TCHAR * FUNC_0(_TCHAR * VAR_0, const _TCHAR * VAR_1, size_t VAR_2)
{
 if(VAR_2 != 0)
 {
  _TCHAR * VAR_3 = VAR_0;
  const _TCHAR * VAR_4 = VAR_1;

  do
  {
   if((*VAR_3 ++ = *VAR_4 ++) == 0)
   {
    while (-- VAR_2 != 0) *VAR_3 ++ = 0;
    break;
   }
  }
  while(-- VAR_2 != 0);
 }

 return VAR_0;
}
