
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ULONG ;
typedef int * PULONG ;
typedef int* LPSTR ;
typedef int BOOLEAN ;


 int FUNC_0 (int*,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int VAR_0 ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (char*,char*) ;
 int VAR_1 ;
 int* VAR_2 ;
 int FUNC_5 (int*,char const*) ;
 int* FUNC_6 (int*,char const*) ;

BOOLEAN FUNC_7(const char *VAR_3,PULONG VAR_4)
{
 char VAR_5[256];
 LPSTR VAR_6=((void*)0);
 LPSTR VAR_7 = VAR_2;
 BOOLEAN VAR_8 = VAR_0;

 FUNC_2();
 FUNC_1(*(0,"ScanExports pValue: %x\n", VAR_4));
nomatch:
 if(VAR_2)
  VAR_6 = FUNC_6(VAR_7,VAR_3);

 if(VAR_6)
 {
  LPSTR VAR_9;
  ULONG VAR_10;
  LPSTR VAR_11 = VAR_6;

  for(;(*VAR_6!=0x0a && *VAR_6!=0x0d) && (ULONG)VAR_6>=(ULONG)VAR_2;VAR_6--);
  VAR_6++;
  VAR_9 = VAR_5;
  for(;(*VAR_6!=0x0a && *VAR_6!=0x0d);)*VAR_9++=*VAR_6++;
  *VAR_9=0;
  VAR_9 = (LPSTR) FUNC_4(VAR_5," ");
  VAR_10=0;
  while(VAR_9)
  {
   switch(VAR_10)
   {
    case 0:
     FUNC_0(VAR_9,VAR_4);
     break;
    case 1:
     break;
    case 2:
     if(FUNC_5(VAR_9,VAR_3)!=0)
     {
      FUNC_1(*(0,"Not: %s\n", VAR_9));
      VAR_7 = VAR_11+1;
      goto nomatch;
     }
     VAR_10 = -1;
     VAR_8 = VAR_1;
              FUNC_1((0,"%s @ %x\n",VAR_3,*VAR_4));
     goto exit;
     break;
   }
   VAR_10++;
   VAR_9 = (char*) FUNC_4(((void*)0)," ");
  }
 }
exit:
 FUNC_1((0,"%s %x @ %x\n",VAR_3,VAR_4,*VAR_4));

 FUNC_3();

 return VAR_8;
}
