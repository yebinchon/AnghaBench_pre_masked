
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct timeval {int dummy; } ;
typedef int sds ;
typedef int hashseed ;
struct TYPE_2__ {char* configfile; scalar_t__ ipfd_count; scalar_t__ tlsfd_count; scalar_t__ sofd; int unixsocket; int maxmemory; int el; scalar_t__ cluster_enabled; scalar_t__ sentinel_mode; scalar_t__ pidfile; int supervised; scalar_t__ daemonize; int supervised_mode; int ** exec_argv; void* executable; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 scalar_t__ VAR_0 ;
 int FUNC_2 () ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int VAR_5 ;
 int FUNC_7 (char*) ;
 int VAR_6 ;
 scalar_t__ FUNC_8 (int,char**) ;
 int FUNC_9 () ;
 int FUNC_10 (int,char**) ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int,char**) ;
 int FUNC_15 (int) ;
 int FUNC_16 (int ,char*) ;
 void* FUNC_17 (char*) ;
 int FUNC_18 (int *,int) ;
 int FUNC_19 () ;
 int FUNC_20 (struct timeval*,int *) ;
 int FUNC_21 () ;
 int FUNC_22 () ;
 int FUNC_23 () ;
 int FUNC_24 () ;
 int FUNC_25 (int,char**) ;
 int FUNC_26 () ;
 int FUNC_27 () ;
 int FUNC_28 (char*,int ) ;
 int FUNC_29 (int ,int) ;
 int FUNC_30 () ;
 int FUNC_31 () ;
 int FUNC_32 (int,char**) ;
 int FUNC_33 () ;
 int FUNC_34 () ;
 int FUNC_35 () ;
 int FUNC_36 (int ) ;
 int VAR_7 ;
 int FUNC_37 (char*) ;
 int FUNC_38 (int,char**) ;
 int FUNC_39 (int,char**,int *) ;
 int FUNC_40 () ;
 int FUNC_41 (int ,char*) ;
 int FUNC_42 (int ,char*,int ) ;
 int FUNC_43 () ;
 int FUNC_44 (int ) ;
 scalar_t__ FUNC_45 (int ) ;
 int FUNC_46 () ;
 TYPE_1__ VAR_8 ;
 int FUNC_47 (int ,char*,...) ;
 int FUNC_48 (int ,char*) ;
 int FUNC_49 (int,char**) ;
 int FUNC_50 (int,char**) ;
 int FUNC_51 (int) ;
 int VAR_9 ;
 int FUNC_52 (char*,char*) ;
 scalar_t__ FUNC_53 (char*,char*) ;
 int FUNC_54 (char*) ;
 int * FUNC_55 (char*,char*) ;
 scalar_t__ FUNC_56 (int ,int *,int) ;
 int FUNC_57 (int *) ;
 int FUNC_58 () ;
 int FUNC_59 () ;
 int FUNC_60 () ;
 int FUNC_61 (int,char**) ;
 scalar_t__ FUNC_62 () ;
 int FUNC_63 () ;
 int FUNC_64 (int *) ;
 int FUNC_65 (int,char**) ;
 int FUNC_66 (int,char**) ;
 int ** FUNC_67 (int) ;
 int FUNC_68 (int ) ;
 int FUNC_69 (int,char**) ;
 void* FUNC_70 (char*) ;

int FUNC_71(int VAR_10, char **VAR_11) {
    struct timeval VAR_12;
    int VAR_13;
    FUNC_48(VAR_1,"");
    FUNC_59();
    FUNC_68(VAR_7);
    FUNC_51(FUNC_57(((void*)0))^FUNC_19());
    FUNC_20(&VAR_12,((void*)0));

    uint8_t VAR_14[16];
    FUNC_18(VAR_14,sizeof(VAR_14));
    FUNC_13(VAR_14);
    VAR_8.sentinel_mode = FUNC_8(VAR_10,VAR_11);
    FUNC_24();
    FUNC_0();

    FUNC_30();
    FUNC_58();



    VAR_8.executable = FUNC_17(VAR_11[0]);
    VAR_8.exec_argv = FUNC_67(sizeof(char*)*(VAR_10+1));
    VAR_8.exec_argv[VAR_10] = ((void*)0);
    for (VAR_13 = 0; VAR_13 < VAR_10; VAR_13++) VAR_8.exec_argv[VAR_13] = FUNC_70(VAR_11[VAR_13]);




    if (VAR_8.sentinel_mode) {
        FUNC_22();
        FUNC_21();
    }




    if (FUNC_55(VAR_11[0],"redis-check-rdb") != ((void*)0))
        FUNC_39(VAR_10,VAR_11,((void*)0));
    else if (FUNC_55(VAR_11[0],"redis-check-aof") != ((void*)0))
        FUNC_38(VAR_10,VAR_11);

    if (VAR_10 >= 2) {
        VAR_13 = 1;
        sds VAR_15 = FUNC_43();
        char *VAR_16 = ((void*)0);


        if (FUNC_53(VAR_11[1], "-v") == 0 ||
            FUNC_53(VAR_11[1], "--version") == 0) FUNC_63();
        if (FUNC_53(VAR_11[1], "--help") == 0 ||
            FUNC_53(VAR_11[1], "-h") == 0) FUNC_60();
        if (FUNC_53(VAR_11[1], "--test-memory") == 0) {
            if (VAR_10 == 3) {
                FUNC_29(FUNC_7(VAR_11[2]),50);
                FUNC_15(0);
            } else {
                FUNC_16(VAR_9,"Please specify the amount of memory to test in megabytes.\n");
                FUNC_16(VAR_9,"Example: ./redis-server --test-memory 4096\n\n");
                FUNC_15(1);
            }
        }


        if (VAR_11[VAR_13][0] != '-' || VAR_11[VAR_13][1] != '-') {
            VAR_16 = VAR_11[VAR_13];
            VAR_8.configfile = FUNC_17(VAR_16);


            FUNC_64(VAR_8.exec_argv[VAR_13]);
            VAR_8.exec_argv[VAR_13] = FUNC_70(VAR_8.configfile);
            VAR_13++;
        }





        while(VAR_13 != VAR_10) {
            if (VAR_11[VAR_13][0] == '-' && VAR_11[VAR_13][1] == '-') {

                if (!FUNC_53(VAR_11[VAR_13], "--check-rdb")) {

                    VAR_13++;
                    continue;
                }
                if (FUNC_45(VAR_15)) VAR_15 = FUNC_41(VAR_15,"\n");
                VAR_15 = FUNC_41(VAR_15,VAR_11[VAR_13]+2);
                VAR_15 = FUNC_41(VAR_15," ");
            } else {

                VAR_15 = FUNC_42(VAR_15,VAR_11[VAR_13],FUNC_54(VAR_11[VAR_13]));
                VAR_15 = FUNC_41(VAR_15," ");
            }
            VAR_13++;
        }
        if (VAR_8.sentinel_mode && VAR_16 && *VAR_16 == '-') {
            FUNC_47(VAR_3,
                "Sentinel config from STDIN not allowed.");
            FUNC_47(VAR_3,
                "Sentinel needs config file on disk to save state.  Exiting...");
            FUNC_15(1);
        }
        FUNC_40();
        FUNC_28(VAR_16,VAR_15);
        FUNC_44(VAR_15);
    }

    FUNC_47(VAR_3, "oO0OoO0OoO0Oo Redis is starting oO0OoO0OoO0Oo");
    FUNC_47(VAR_3,
        "Redis version=%s, bits=%d, commit=%s, modified=%d, pid=%d, just started",
            VAR_4,
            (sizeof(long) == 8) ? 64 : 32,
            FUNC_35(),
            FUNC_56(FUNC_34(),((void*)0),10) > 0,
            (int)FUNC_19());

    if (VAR_10 == 1) {
        FUNC_47(VAR_3, "Warning: no config file specified, using the default config. In order to specify a config file use %s /path/to/%s.conf", VAR_11[0], VAR_8.sentinel_mode ? "sentinel" : "redis");
    } else {
        FUNC_47(VAR_3, "Configuration loaded");
    }

    VAR_8.supervised = FUNC_36(VAR_8.supervised_mode);
    int VAR_17 = VAR_8.daemonize && !VAR_8.supervised;
    if (VAR_17) FUNC_12();

    FUNC_23();
    if (VAR_17 || VAR_8.pidfile) FUNC_11();
    FUNC_37(VAR_11[0]);
    FUNC_33();
    FUNC_9();

    if (!VAR_8.sentinel_mode) {

        FUNC_47(VAR_3,"Server initialized");

        FUNC_26();

        FUNC_31();
        FUNC_1();
        FUNC_2();
        FUNC_27();
        if (VAR_8.cluster_enabled) {
            if (FUNC_62() == VAR_0) {
                FUNC_47(VAR_3,
                    "You can't have keys in a DB different than DB 0 when in "
                    "Cluster mode. Exiting.");
                FUNC_15(1);
            }
        }
        if (VAR_8.ipfd_count > 0 || VAR_8.tlsfd_count > 0)
            FUNC_47(VAR_2,"Ready to accept connections");
        if (VAR_8.sofd > 0)
            FUNC_47(VAR_2,"The server is now ready to accept connections at %s", VAR_8.unixsocket);
    } else {
        FUNC_2();
        FUNC_46();
    }


    if (VAR_8.maxmemory > 0 && VAR_8.maxmemory < 1024*1024) {
        FUNC_47(VAR_3,"WARNING: You specified a maxmemory value that is less than 1MB (current value is %llu bytes). Are you sure this is what you really want?", VAR_8.maxmemory);
    }

    FUNC_6(VAR_8.el,VAR_6);
    FUNC_5(VAR_8.el,VAR_5);
    FUNC_4(VAR_8.el);
    FUNC_3(VAR_8.el);
    return 0;
}
