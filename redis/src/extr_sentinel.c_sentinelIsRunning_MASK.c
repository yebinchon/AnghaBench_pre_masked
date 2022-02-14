
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__* myid; } ;
struct TYPE_3__ {int * configfile; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (scalar_t__*,int) ;
 TYPE_2__ VAR_4 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 TYPE_1__ VAR_5 ;
 int FUNC_5 (int ,char*,...) ;
 int FUNC_6 (int ) ;

void FUNC_7(void) {
    int VAR_6;

    if (VAR_5.configfile == ((void*)0)) {
        FUNC_5(VAR_1,
            "Sentinel started without a config file. Exiting...");
        FUNC_1(1);
    } else if (FUNC_0(VAR_5.configfile,VAR_2) == -1) {
        FUNC_5(VAR_1,
            "Sentinel config file %s is not writable: %s. Exiting...",
            VAR_5.configfile,FUNC_6(VAR_3));
        FUNC_1(1);
    }




    for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++)
        if (VAR_4.myid[VAR_6] != 0) break;

    if (VAR_6 == VAR_0) {

        FUNC_2(VAR_4.myid,VAR_0);
        FUNC_3();
    }


    FUNC_5(VAR_1,"Sentinel ID is %s", VAR_4.myid);



    FUNC_4();
}
