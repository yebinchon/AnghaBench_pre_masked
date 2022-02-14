
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char* LPCWSTR ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static BOOL FUNC_0(LPCWSTR VAR_2, LPCWSTR VAR_3)
{
 for( ; *VAR_2&&*VAR_3; VAR_2++,VAR_3++) {
  if (*VAR_3 == '*') {
   do VAR_3++;
   while(*VAR_3 == '*');

   if (!*VAR_3)
    return VAR_1;

   for(; *VAR_2; VAR_2++)
    if (*VAR_2==*VAR_3 && FUNC_0(VAR_2, VAR_3))
     return VAR_1;

   return VAR_0;
  }
  else if (*VAR_2!=*VAR_3 && *VAR_3!='?')
   return VAR_0;
 }

 if (*VAR_2 || *VAR_3)
  if (*VAR_3!='*' || VAR_3[1]!='\0')
   return VAR_0;

 return VAR_1;
}
