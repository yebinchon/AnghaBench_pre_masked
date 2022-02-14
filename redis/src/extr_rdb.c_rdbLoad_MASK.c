
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rio ;
typedef int rdbSaveInfo ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,char*) ;
 int FUNC_2 (int *,int,int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,char*,int) ;
 int FUNC_5 (int) ;

int FUNC_6(char *VAR_2, rdbSaveInfo *VAR_3, int VAR_4) {
    FILE *VAR_5;
    rio VAR_6;
    int VAR_7;

    if ((VAR_5 = FUNC_1(VAR_2,"r")) == ((void*)0)) return VAR_0;
    FUNC_4(VAR_5, VAR_2,VAR_4);
    FUNC_3(&VAR_6,VAR_5);
    VAR_7 = FUNC_2(&VAR_6,VAR_4,VAR_3);
    FUNC_0(VAR_5);
    FUNC_5(VAR_7==VAR_1);
    return VAR_7;
}
