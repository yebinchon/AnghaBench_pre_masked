
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_1 (int ,char*) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int) ;
 int * VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (char*,int ) ;

int
FUNC_6(char* VAR_4)
{
    int VAR_5=0;
    char *VAR_6=(char*)FUNC_3(sizeof(char)*VAR_0);

    FUNC_5(VAR_6, VAR_3);

    if((VAR_2=FUNC_1((FUNC_4(VAR_6,VAR_4)),"r"))!=((void*)0))
     {
      VAR_1=1;
      FUNC_0();
     }
    else
     VAR_5=-1;

    FUNC_2(VAR_6);
    return VAR_5;
}
