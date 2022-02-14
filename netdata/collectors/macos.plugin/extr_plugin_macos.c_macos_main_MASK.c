
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int usec_t ;
typedef int heartbeat_t ;
struct TYPE_2__ {int rrd_update_every; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 () ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int) ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_8 (int) ;
 int FUNC_9 (int ,void*) ;
 int FUNC_10 () ;
 scalar_t__ FUNC_11 (int ) ;

void *FUNC_12(void *VAR_5) {
    FUNC_9(VAR_3, VAR_5);


    int VAR_6 = !FUNC_0("plugin:macos", "netdata server resources", 1);
    int VAR_7 = !FUNC_0("plugin:macos", "sysctl", 1);
    int VAR_8 = !FUNC_0("plugin:macos", "mach system management interface", 1);
    int VAR_9 = !FUNC_0("plugin:macos", "iokit", 1);


    unsigned long long VAR_10 = 0ULL;
    unsigned long long VAR_11 = 0ULL;
    unsigned long long VAR_12 = 0ULL;

    usec_t VAR_13 = VAR_2->rrd_update_every * VAR_1;
    heartbeat_t VAR_14;
    FUNC_6(&VAR_14);

    while(!VAR_4) {
        usec_t VAR_15 = FUNC_7(&VAR_14, VAR_13);

        if(FUNC_11(VAR_4)) break;



        if(!VAR_7) {
            FUNC_1(VAR_0, "MACOS: calling do_macos_sysctl().");
            VAR_7 = FUNC_4(VAR_2->rrd_update_every, VAR_15);
        }
        if(FUNC_11(VAR_4)) break;

        if(!VAR_8) {
            FUNC_1(VAR_0, "MACOS: calling do_macos_mach_smi().");
            VAR_8 = FUNC_3(VAR_2->rrd_update_every, VAR_15);
        }
        if(FUNC_11(VAR_4)) break;

        if(!VAR_9) {
            FUNC_1(VAR_0, "MACOS: calling do_macos_iokit().");
            VAR_9 = FUNC_2(VAR_2->rrd_update_every, VAR_15);
        }
        if(FUNC_11(VAR_4)) break;





        if(!VAR_6) {
            FUNC_5();
            FUNC_10();
        }
    }

    FUNC_8(1);
    return ((void*)0);
}
