
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char* LPSTR ;



LPSTR FUNC_0(LPSTR VAR_0,char VAR_1)
{
 static char VAR_2[1024];
 LPSTR VAR_3;

 VAR_3 = VAR_2;

 while(*VAR_0!=0 && *VAR_0!=VAR_1)
  *VAR_3++ = *VAR_0++;

 *VAR_3 = 0;

 return VAR_2;
}
