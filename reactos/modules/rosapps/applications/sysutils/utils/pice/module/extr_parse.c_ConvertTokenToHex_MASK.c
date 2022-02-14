
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ USHORT ;
typedef int ULONG ;
typedef scalar_t__ UCHAR ;
typedef int* PULONG ;
typedef char* LPSTR ;
typedef int BOOLEAN ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;

BOOLEAN FUNC_1(LPSTR VAR_4,PULONG VAR_5)
{
ULONG VAR_6=0,VAR_7;

 VAR_3=0;
 VAR_2=0;
 for(VAR_7=0;VAR_7<8 && VAR_4[VAR_7]!=0 && VAR_4[VAR_7]!=' ' && VAR_4[VAR_7]!=':';VAR_7++)
 {
  if(VAR_4[VAR_7]>='0' && VAR_4[VAR_7]<='9')
  {
   VAR_6<<=4;
   VAR_6|=(ULONG)(UCHAR)(VAR_4[VAR_7]-'0');
  }
  else if(VAR_4[VAR_7]>='A' && VAR_4[VAR_7]<='F')
  {
   VAR_6<<=4;
   VAR_6|=(ULONG)(UCHAR)(VAR_4[VAR_7]-'A'+10);
  }
  else if(VAR_4[VAR_7]>='a' && VAR_4[VAR_7]<='f')
  {
   VAR_6<<=4;
   VAR_6|=(ULONG)(UCHAR)(VAR_4[VAR_7]-'a'+10);
  }
  else
   return VAR_0;
 }
 VAR_4+=(VAR_7+1);
 if(VAR_4[VAR_7]==':')
 {
  ULONG VAR_8=VAR_6;
  if(VAR_8>0xFFFF)
   return VAR_0;
  for(VAR_7=0;VAR_7<8 && VAR_4[VAR_7]!=0 && VAR_4[VAR_7]!=' ' && VAR_4[VAR_7]!=':';VAR_7++)
  {
   if(VAR_4[VAR_7]>='0' && VAR_4[VAR_7]<='9')
   {
    VAR_6<<=4;
    VAR_6|=(ULONG)(UCHAR)(VAR_4[VAR_7]-'0');
   }
   else if(VAR_4[VAR_7]>='A' && VAR_4[VAR_7]<='F')
   {
    VAR_6<<=4;
    VAR_6|=(ULONG)(UCHAR)(VAR_4[VAR_7]-'A'+10);
   }
   else if(VAR_4[VAR_7]>='a' && VAR_4[VAR_7]<='f')
   {
    VAR_6<<=4;
    VAR_6|=(ULONG)(UCHAR)(VAR_4[VAR_7]-'a'+10);
   }
   else
    return VAR_0;
  }
  VAR_3=(USHORT)VAR_8;
  VAR_2=VAR_6;
  VAR_6 = FUNC_0((USHORT)VAR_8,VAR_6);
 }
 *VAR_5=VAR_6;
 return VAR_1;
}
