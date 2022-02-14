
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sds ;


 int FUNC_0 () ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*,int,int) ;
 int FUNC_3 (int ,char*,size_t) ;
 int * FUNC_4 (char*,char*) ;

sds FUNC_5(sds VAR_0, char *VAR_1, size_t VAR_2, char *VAR_3) {
    if (!FUNC_0()) return FUNC_3(VAR_0,VAR_1,VAR_2);

    int VAR_4 = FUNC_4(VAR_3,"bold") != ((void*)0);
    int VAR_5 = 37;
    if (FUNC_4(VAR_3,"red")) VAR_5 = 31;
    else if (FUNC_4(VAR_3,"green")) VAR_5 = 32;
    else if (FUNC_4(VAR_3,"yellow")) VAR_5 = 33;
    else if (FUNC_4(VAR_3,"blue")) VAR_5 = 34;
    else if (FUNC_4(VAR_3,"magenta")) VAR_5 = 35;
    else if (FUNC_4(VAR_3,"cyan")) VAR_5 = 36;
    else if (FUNC_4(VAR_3,"white")) VAR_5 = 37;

    VAR_0 = FUNC_2(VAR_0,"\033[%i;%i;49m",VAR_4,VAR_5);
    VAR_0 = FUNC_3(VAR_0,VAR_1,VAR_2);
    VAR_0 = FUNC_1(VAR_0,"\033[0m");
    return VAR_0;
}
