
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int FUNC_1 (char*,scalar_t__*) ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*,...) ;
 scalar_t__* VAR_0 ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (char*,char*,char*) ;
 scalar_t__ FUNC_9 (scalar_t__*) ;

void FUNC_10(int VAR_1) {




    FUNC_2();
    FUNC_4("EXIT: netdata prepares to exit with code %d...", VAR_1);

    FUNC_8("EXIT", VAR_1?"ERROR":"OK","-");


    FUNC_4("EXIT: cleaning up the database...");
    FUNC_5();

    if(!VAR_1) {



        FUNC_4("EXIT: stopping master threads...");
        FUNC_0();


        FUNC_4("EXIT: freeing database memory...");
        FUNC_6();
    }


    if(VAR_0[0]) {
        FUNC_4("EXIT: removing netdata PID file '%s'...", VAR_0);
        if(FUNC_9(VAR_0) != 0)
            FUNC_1("EXIT: cannot unlink pidfile '%s'.", VAR_0);
    }





    FUNC_4("EXIT: all done - netdata is now exiting - bye bye...");
    FUNC_3(VAR_1);
}
