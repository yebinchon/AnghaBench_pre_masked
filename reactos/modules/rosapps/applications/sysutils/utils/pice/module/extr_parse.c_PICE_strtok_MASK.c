
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t ULONG ;


 int FUNC_0 (char*) ;
 size_t FUNC_1 (char*) ;

char* FUNC_2(char *VAR_0)
{
static char* VAR_1;
char *VAR_2;
ULONG VAR_3;
ULONG VAR_4;

 if(VAR_0)
 {
  VAR_1=VAR_0;
  FUNC_0(VAR_1);
 }

 VAR_3=FUNC_1(VAR_1);
 if(!VAR_3)
 {
  VAR_1=0;
  return ((void*)0);
 }
 for(VAR_4=0;VAR_4<VAR_3;VAR_4++)
 {
  if(VAR_1[VAR_4]==' ')
  {
   VAR_1[VAR_4]=0;
   break;
  }
 }
 VAR_2=VAR_1;
 VAR_1=VAR_1+VAR_4+1;
 return VAR_2;
}
