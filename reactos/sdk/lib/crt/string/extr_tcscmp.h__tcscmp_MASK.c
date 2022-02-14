
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ _TCHAR ;



int FUNC_0(const _TCHAR* VAR_0, const _TCHAR* VAR_1)
{
 while(*VAR_0 == *VAR_1)
 {
  if(*VAR_0 == 0) return 0;

  VAR_0 ++;
  VAR_1 ++;
 }

 return *VAR_0 - *VAR_1;
}
