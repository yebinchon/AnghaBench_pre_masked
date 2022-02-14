
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int usec_t ;
typedef char* uid_t ;
typedef int time_t ;
struct rlimit {int member_1; int member_0; } ;
struct pid_stat {int dummy; } ;
typedef int pid_t ;
typedef int heartbeat_t ;
struct TYPE_4__ {int filename; } ;
struct TYPE_3__ {int filename; } ;


 int * VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned long long VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 TYPE_2__ VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;
 TYPE_1__ VAR_14 ;
 int FUNC_0 () ;
 int VAR_15 ;
 int FUNC_1 () ;
 void* FUNC_2 (int,size_t) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 scalar_t__ VAR_16 ;
 int FUNC_6 (char*,int) ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_7 (char*,...) ;
 int VAR_19 ;
 scalar_t__ VAR_20 ;
 int VAR_21 ;
 int FUNC_8 (int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 void* FUNC_13 (char*) ;
 char* FUNC_14 () ;
 int FUNC_15 () ;
 char* FUNC_16 () ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *,int) ;
 int FUNC_19 (char*,...) ;
 scalar_t__ FUNC_20 (int ) ;
 void* VAR_24 ;
 int FUNC_21 (int ) ;
 int FUNC_22 () ;
 size_t VAR_25 ;
 int FUNC_23 (int,char**) ;
 scalar_t__ VAR_26 ;
 int FUNC_24 (int ,int,int ,int ,int ) ;
 int FUNC_25 (char*) ;
 int VAR_27 ;
 int VAR_28 ;
 char* VAR_29 ;
 int FUNC_26 (int ,char*,char*) ;
 int FUNC_27 (int ,char*,int) ;
 int FUNC_28 (int) ;
 scalar_t__ FUNC_29 (int ,struct rlimit*) ;
 int VAR_30 ;
 int VAR_31 ;
 int FUNC_30 (int,int ,char*,void*) ;
 int VAR_32 ;
 int * VAR_33 ;
 scalar_t__ FUNC_31 (int ) ;
 unsigned long long VAR_34 ;
 unsigned long long VAR_35 ;
 scalar_t__ FUNC_32 (int) ;
 int VAR_36 ;
 int * VAR_37 ;
 int VAR_38 ;
 int FUNC_33 () ;

int FUNC_34(int VAR_39, char **VAR_40) {


    VAR_25 = (size_t)FUNC_31(VAR_10);


    VAR_29 = "apps.plugin";


    VAR_20 = 0;


    VAR_19 = 100;
    VAR_21 = 3600;


    VAR_28 = VAR_4|VAR_3;

    VAR_24 = FUNC_13("NETDATA_HOST_PREFIX");
    if(FUNC_33() == -1) FUNC_8(1);

    VAR_37 = FUNC_13("NETDATA_USER_CONFIG_DIR");
    if(VAR_37 == ((void*)0)) {

        VAR_37 = VAR_0;
    }


    VAR_33 = FUNC_13("NETDATA_STOCK_CONFIG_DIR");
    if(VAR_33 == ((void*)0)) {

        VAR_33 = VAR_2;
    }
    VAR_27 = 1;

    time_t VAR_41 = FUNC_22();

    FUNC_10();



    VAR_35 = VAR_34;


    FUNC_12();
    FUNC_11();

    FUNC_23(VAR_39, VAR_40);

    if(!FUNC_3() && !FUNC_0() && !FUNC_4()) {
        uid_t VAR_42 = FUNC_16(), VAR_43 = FUNC_14();
        FUNC_7("apps.plugin should either run as root (now running with uid %u, euid %u) or have special capabilities. "
                      "Without these, apps.plugin cannot report disk I/O utilization of other processes. "
                      "Your system does not support capabilities. "
                      "To enable setuid to root run: sudo chown root:netdata %s; sudo chmod 4750 %s; "
              , VAR_42, VAR_43, VAR_40[0], VAR_40[0]
        );

    }

    FUNC_19("started on pid %d", FUNC_15());

    FUNC_30(VAR_14.filename, VAR_1, "%s/etc/passwd", VAR_24);
    FUNC_6("passwd file: '%s'", VAR_14.filename);

    FUNC_30(VAR_11.filename, VAR_1, "%s/etc/group", VAR_24);
    FUNC_6("group file: '%s'", VAR_11.filename);


    VAR_13 = FUNC_2(sizeof(pid_t), (size_t)VAR_26);


    VAR_12 = FUNC_2(sizeof(struct pid_stat *), (size_t) VAR_26);

    usec_t VAR_44 = VAR_36 * VAR_9;
    VAR_22 = 1;
    heartbeat_t VAR_45;
    FUNC_17(&VAR_45);
    for(;1; VAR_22++) {
        usec_t VAR_46 = FUNC_18(&VAR_45, VAR_44);


        if(!FUNC_5()) {
            FUNC_7("Cannot collect /proc data for running processes. Disabling apps.plugin...");
            FUNC_25("DISABLE\n");
            FUNC_8(1);
        }

        FUNC_1();
        FUNC_21(VAR_15);

        FUNC_28(VAR_46);


        FUNC_26(VAR_15, "apps", "Apps");

        if(FUNC_20(VAR_18))
            FUNC_26(VAR_38, "users", "Users");

        if(FUNC_20(VAR_17))
            FUNC_26(VAR_23, "groups", "User Groups");

        FUNC_27(VAR_15, "apps", VAR_46);

        if(FUNC_20(VAR_18))
            FUNC_27(VAR_38, "users", VAR_46);

        if(FUNC_20(VAR_17))
            FUNC_27(VAR_23, "groups", VAR_46);

        FUNC_9(VAR_32);

        VAR_31 = VAR_30;

        FUNC_6("done Loop No %zu", VAR_22);


        if(FUNC_22() - VAR_41 > 14400) FUNC_8(0);
    }
}
