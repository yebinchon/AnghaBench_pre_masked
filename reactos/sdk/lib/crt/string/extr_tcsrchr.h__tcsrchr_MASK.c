
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ _XINT ;
typedef scalar_t__ const _TCHAR ;



_TCHAR * FUNC_0(const _TCHAR * VAR_0, _XINT VAR_1)
{
 _TCHAR VAR_2 = VAR_1;
 const _TCHAR * VAR_3 = (_TCHAR *)0;

 while(*VAR_0)
 {
  if(*VAR_0 == VAR_2) VAR_3 = VAR_0;
  VAR_0 ++;
 }

 if(VAR_2 == 0) VAR_3 = VAR_0;

 return (_TCHAR *)VAR_3;
}
