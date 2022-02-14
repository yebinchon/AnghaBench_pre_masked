
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONG ;
typedef scalar_t__ UCHAR ;
typedef int* PULONG ;
typedef char* LPSTR ;
typedef int BOOLEAN ;


 int VAR_0 ;
 int VAR_1 ;

BOOLEAN FUNC_0(LPSTR VAR_2,PULONG VAR_3)
{
    ULONG VAR_4=0,VAR_5;

 for(VAR_5=0;VAR_5<8 && VAR_2[VAR_5]!=0 && VAR_2[VAR_5]!=' ';VAR_5++)
 {
  if(VAR_2[VAR_5]>='0' && VAR_2[VAR_5]<='9')
  {
   VAR_4<<=4;
   VAR_4|=(ULONG)(UCHAR)(VAR_2[VAR_5]-'0');
  }
  else if(VAR_2[VAR_5]>='A' && VAR_2[VAR_5]<='F')
  {
   VAR_4<<=4;
   VAR_4|=(ULONG)(UCHAR)(VAR_2[VAR_5]-'A'+10);
  }
  else if(VAR_2[VAR_5]>='a' && VAR_2[VAR_5]<='f')
  {
   VAR_4<<=4;
   VAR_4|=(ULONG)(UCHAR)(VAR_2[VAR_5]-'a'+10);
  }
  else
   return VAR_0;
 }

    *VAR_3 = VAR_4;
    return VAR_1;
}
