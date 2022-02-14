
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t ULONG ;


 size_t FUNC_0 (char*) ;

char* FUNC_1(char* VAR_0)
{
ULONG VAR_1,VAR_2,VAR_3=FUNC_0(VAR_0)-1;
char VAR_4;

 for(VAR_1=0,VAR_2=VAR_3;VAR_1<VAR_2;VAR_1++,VAR_2--)
 {
  VAR_4=VAR_0[VAR_1]; VAR_0[VAR_1]=VAR_0[VAR_2]; VAR_0[VAR_2]=VAR_4;
 }

 return VAR_0;
}
