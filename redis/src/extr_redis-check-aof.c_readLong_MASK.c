
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;
typedef int FILE ;


 int FUNC_0 (char*,char,char) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int * FUNC_2 (char*,int,int *) ;
 int FUNC_3 (int *) ;
 long FUNC_4 (char*,char**,int) ;

int FUNC_5(FILE *VAR_1, char VAR_2, long *VAR_3) {
    char VAR_4[128], *VAR_5;
    VAR_0 = FUNC_3(VAR_1);
    if (FUNC_2(VAR_4,sizeof(VAR_4),VAR_1) == ((void*)0)) {
        return 0;
    }
    if (VAR_4[0] != VAR_2) {
        FUNC_0("Expected prefix '%c', got: '%c'",VAR_2,VAR_4[0]);
        return 0;
    }
    *VAR_3 = FUNC_4(VAR_4+1,&VAR_5,10);
    return FUNC_1(VAR_5);
}
