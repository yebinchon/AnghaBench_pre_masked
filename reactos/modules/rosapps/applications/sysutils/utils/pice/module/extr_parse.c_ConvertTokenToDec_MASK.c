
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONG ;
typedef int* PULONG ;
typedef char* LPSTR ;
typedef int BOOLEAN ;


 int VAR_0 ;
 int VAR_1 ;

BOOLEAN FUNC_0(LPSTR VAR_2,PULONG VAR_3)
{
    ULONG VAR_4=0;
    char VAR_5;

 while((VAR_5 = *VAR_2))
 {
  if(VAR_5 >= '0' && VAR_5 <= '9')
  {
   VAR_4 *= 10;
   VAR_4 += (ULONG)(VAR_5 - '0');
  }
  else
   return VAR_0;

        VAR_2++;
 }
    *VAR_3 = VAR_4;
    return VAR_1;
}
