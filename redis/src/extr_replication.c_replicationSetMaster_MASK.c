
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int masterport; scalar_t__ repl_state; scalar_t__ master; int * masterhost; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ,int ,int *) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (char*) ;
 TYPE_1__ VAR_6 ;

void FUNC_9(char *VAR_7, int VAR_8) {
    int VAR_9 = VAR_6.masterhost == ((void*)0);

    FUNC_7(VAR_6.masterhost);
    VAR_6.masterhost = FUNC_8(VAR_7);
    VAR_6.masterport = VAR_8;
    if (VAR_6.master) {
        FUNC_3(VAR_6.master);
    }
    FUNC_1();



    FUNC_2();
    FUNC_0();


    if (VAR_9) {
        FUNC_6();
        FUNC_5();
    }


    FUNC_4(VAR_1,
                          VAR_2,
                          ((void*)0));


    if (VAR_6.repl_state == VAR_5)
        FUNC_4(VAR_0,
                              VAR_3,
                              ((void*)0));

    VAR_6.repl_state = VAR_4;
}
