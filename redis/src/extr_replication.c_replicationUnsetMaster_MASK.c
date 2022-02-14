
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ repl_state; int slaveseldb; int unixtime; int repl_no_slaves_since; scalar_t__ master; int * masterhost; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,int ,int *) ;
 int FUNC_4 () ;
 int FUNC_5 (int *) ;
 TYPE_1__ VAR_6 ;
 int FUNC_6 () ;

void FUNC_7(void) {
    if (VAR_6.masterhost == ((void*)0)) return;


    if (VAR_6.repl_state == VAR_4)
        FUNC_3(VAR_0,
                              VAR_3,
                              ((void*)0));

    FUNC_5(VAR_6.masterhost);
    VAR_6.masterhost = ((void*)0);




    FUNC_6();
    if (VAR_6.master) FUNC_2(VAR_6.master);
    FUNC_4();
    FUNC_0();




    FUNC_1();
    VAR_6.repl_state = VAR_5;





    VAR_6.slaveseldb = -1;





    VAR_6.repl_no_slaves_since = VAR_6.unixtime;


    FUNC_3(VAR_1,
                          VAR_2,
                          ((void*)0));
}
