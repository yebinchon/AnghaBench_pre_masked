
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONG ;
typedef char UCHAR ;
typedef char* LPSTR ;
typedef int FlagNames ;


 int FUNC_0 (char*) ;
 char FUNC_1 (char) ;

LPSTR FUNC_2(ULONG VAR_0)
{
    static UCHAR VAR_1[]={'c',0,'p',0,'a',0,'z','s','t','i','d','o'};
    ULONG VAR_2,VAR_3;
    static char VAR_4[32];

 for(VAR_3=0,VAR_2=0;VAR_2<sizeof(VAR_1);VAR_2++)
 {
  if(VAR_1[VAR_2]!=0)
  {
   if(VAR_0&1)
    VAR_4[VAR_3++] = FUNC_1(VAR_1[VAR_2]);
   else
    VAR_4[VAR_3++] = VAR_1[VAR_2];
   VAR_4[VAR_3++]=' ';
  }
  VAR_0>>=1;
 }
 VAR_4[VAR_3]=0;
 FUNC_0(VAR_4);
 return VAR_4;
}
