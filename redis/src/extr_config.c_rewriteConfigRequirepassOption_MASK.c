
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rewriteConfigState {int dummy; } ;
typedef int * sds ;


 int * FUNC_0 () ;
 int FUNC_1 (struct rewriteConfigState*,char*) ;
 int FUNC_2 (struct rewriteConfigState*,char*,int *,int) ;
 int * FUNC_3 (int *,char*,int) ;
 int * FUNC_4 (int *,int *) ;
 int * FUNC_5 (char*) ;

void FUNC_6(struct rewriteConfigState *VAR_0, char *VAR_1) {
    int VAR_2 = 1;
    sds VAR_3;
    sds VAR_4 = FUNC_0();



    if (VAR_4 == ((void*)0)) {
        FUNC_1(VAR_0,VAR_1);
        return;
    }

    VAR_3 = FUNC_5(VAR_1);
    VAR_3 = FUNC_3(VAR_3, " ", 1);
    VAR_3 = FUNC_4(VAR_3, VAR_4);

    FUNC_2(VAR_0,VAR_1,VAR_3,VAR_2);
}
