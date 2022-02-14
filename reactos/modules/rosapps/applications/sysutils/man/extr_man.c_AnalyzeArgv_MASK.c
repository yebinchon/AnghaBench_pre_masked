
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 () ;
 int FUNC_2 (char**) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (char*,char*) ;
 char* FUNC_5 (char*,char*) ;
 int FUNC_6 (char*,char*) ;
 int FUNC_7 (char*,char*) ;

int
FUNC_8(char *VAR_1)
{
    int VAR_2;
    char VAR_3=0;
    char *VAR_4[]={"--help","/h","/?","-h"};
    char *VAR_5[]={".1",".2",".3",".4",".5",".6",".7",".8",".9"};
    char *VAR_6=(char*)FUNC_3(sizeof(char)*VAR_0);

    FUNC_7(VAR_6,VAR_1);

    for(VAR_2=0;VAR_2<FUNC_2(VAR_4);VAR_2++)
    {
     if(!FUNC_6(VAR_4[VAR_2],VAR_1))
     {
      FUNC_1();
      VAR_3=1;
     }
    }

   VAR_2 = 0;

   if(!VAR_3)
   {

   if(FUNC_0(VAR_6))
   {
    while(VAR_2<FUNC_2(VAR_5)&&FUNC_0(FUNC_5(VAR_6,VAR_5[VAR_2])))
    {
     FUNC_7(VAR_6,VAR_1);
     VAR_2++;
    }

    if(VAR_2>=FUNC_2(VAR_5)) FUNC_4("No manual for %s\n",VAR_1);
   }

   }

    return VAR_2;
}
