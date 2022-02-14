
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int mstime_t ;
struct TYPE_2__ {int * exec_argv; int executable; scalar_t__ maxclients; scalar_t__ configfile; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int) ;
 int VAR_8 ;
 int FUNC_3 (int ,int *,int ) ;
 int FUNC_4 (int,int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (scalar_t__) ;
 TYPE_1__ VAR_9 ;
 int FUNC_7 (int ,char*,...) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;

int FUNC_11(int VAR_10, mstime_t VAR_11) {
    int VAR_12;



    if (FUNC_1(VAR_9.executable,VAR_7) == -1) {
        FUNC_7(VAR_3,"Can't restart: this process has no "
                             "permissions to execute %s", VAR_9.executable);
        return VAR_0;
    }


    if (VAR_10 & VAR_4 &&
        VAR_9.configfile &&
        FUNC_6(VAR_9.configfile) == -1)
    {
        FUNC_7(VAR_3,"Can't restart: configuration rewrite process "
                             "failed");
        return VAR_0;
    }


    if (VAR_10 & VAR_5 &&
        FUNC_5(VAR_6) != VAR_1)
    {
        FUNC_7(VAR_3,"Can't restart: error preparing for shutdown");
        return VAR_0;
    }



    for (VAR_12 = 3; VAR_12 < (int)VAR_9.maxclients + 1024; VAR_12++) {


        if (FUNC_4(VAR_12,VAR_2) != -1) FUNC_2(VAR_12);
    }


    if (VAR_11) FUNC_8(VAR_11*1000);
    FUNC_9(VAR_9.exec_argv[0]);
    VAR_9.exec_argv[0] = FUNC_10(VAR_9.executable);
    FUNC_3(VAR_9.executable,VAR_9.exec_argv,VAR_8);


    FUNC_0(1);

    return VAR_0;
}
