
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ucontext_t ;


 int FUNC_0 (void**,int) ;
 int FUNC_1 (void**,int,int) ;
 int FUNC_2 (int) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 () ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int,char*,int ) ;

void FUNC_7(ucontext_t *VAR_0) {
    void *VAR_1[101];
    int VAR_2 = 0, VAR_3 = FUNC_4();

    if (VAR_3 == -1) return;


    VAR_2 = FUNC_0(VAR_1+1, 100);

    if (FUNC_3(VAR_0) != ((void*)0)) {
        char *VAR_4 = "EIP:\n";
        char *VAR_5 = "\nBacktrace:\n";
        if (FUNC_6(VAR_3,VAR_4,FUNC_5(VAR_4)) == -1) { };
        VAR_1[0] = FUNC_3(VAR_0);
        FUNC_1(VAR_1, 1, VAR_3);
        if (FUNC_6(VAR_3,VAR_5,FUNC_5(VAR_5)) == -1) { };
    }


    FUNC_1(VAR_1+1, VAR_2, VAR_3);


    FUNC_2(VAR_3);
}
