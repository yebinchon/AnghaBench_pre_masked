
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t ULONG ;
typedef int* PWSTR ;
typedef char* LPSTR ;



void FUNC_0(LPSTR VAR_0,PWSTR VAR_1)
{
ULONG VAR_2;

 for(VAR_2=0;VAR_1[VAR_2]!=0;VAR_2++)
 {
        if((char)(VAR_1[VAR_2]>>8)==0)
      VAR_0[VAR_2]=(char)(VAR_1[VAR_2]);
        else
            VAR_0[VAR_2]=0x20;
 }
 VAR_0[VAR_2]=0;

}
