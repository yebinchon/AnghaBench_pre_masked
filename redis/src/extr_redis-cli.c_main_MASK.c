
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int clusterManagerCommandProc ;
struct TYPE_4__ {int * backup_dir; int threshold; int pipeline; int timeout; scalar_t__ slots; scalar_t__ weight_argc; int * weight; int * to; int * from; scalar_t__ replicas; scalar_t__ flags; int * argv; scalar_t__ argc; int * name; } ;
struct TYPE_6__ {int hostport; int repeat; int interval; int last_cmd_type; int * eval; scalar_t__ intrinsic_latency_mode; scalar_t__ lru_test_mode; scalar_t__ scan_mode; scalar_t__ stat_mode; scalar_t__ hotkeys; int memkeys_samples; scalar_t__ memkeys; scalar_t__ bigkeys; scalar_t__ pipe_mode; scalar_t__ getrdb_mode; scalar_t__ slave_mode; scalar_t__ latency_dist_mode; scalar_t__ latency_mode; void* mb_delim; void* hostip; int output; TYPE_1__ cluster_manager_command; scalar_t__ no_auth_warning; scalar_t__ verbose; scalar_t__ enable_ldb_on_eval; scalar_t__ eval_ldb_sync; scalar_t__ eval_ldb_end; scalar_t__ eval_ldb; int * user; int * auth; scalar_t__ stdinarg; int pipe_timeout; int * rdb_filename; int * pattern; scalar_t__ cluster_mode; scalar_t__ lru_test_sample_size; scalar_t__ latency_history; scalar_t__ pubsub_mode; scalar_t__ monitor_mode; scalar_t__ shutdown; scalar_t__ interactive; scalar_t__ dbnum; int * hostsocket; } ;
struct TYPE_5__ {int hints; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 () ;
 int VAR_2 ;
 int FUNC_1 () ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 TYPE_3__ VAR_10 ;
 int FUNC_4 (int,char**) ;
 int FUNC_5 (int,char**) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int,int ) ;
 int FUNC_9 () ;
 int FUNC_10 (int *) ;
 int * FUNC_11 (char*) ;
 int FUNC_12 () ;
 int FUNC_13 (int ) ;
 int FUNC_14 () ;
 int FUNC_15 () ;
 int FUNC_16 (int,int ) ;
 int FUNC_17 () ;
 int FUNC_18 (int,char**) ;
 int FUNC_19 () ;
 TYPE_2__ VAR_11 ;
 int FUNC_20 () ;
 int FUNC_21 () ;
 int FUNC_22 (void*) ;
 void* FUNC_23 (char*) ;
 int FUNC_24 () ;
 int FUNC_25 (int ,int ) ;
 int FUNC_26 () ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_27 () ;
 int VAR_16 ;
 int * FUNC_28 () ;

int FUNC_29(int VAR_17, char **VAR_18) {
    int VAR_19;

    VAR_10.hostip = FUNC_23("127.0.0.1");
    VAR_10.hostport = 6379;
    VAR_10.hostsocket = ((void*)0);
    VAR_10.repeat = 1;
    VAR_10.interval = 0;
    VAR_10.dbnum = 0;
    VAR_10.interactive = 0;
    VAR_10.shutdown = 0;
    VAR_10.monitor_mode = 0;
    VAR_10.pubsub_mode = 0;
    VAR_10.latency_mode = 0;
    VAR_10.latency_dist_mode = 0;
    VAR_10.latency_history = 0;
    VAR_10.lru_test_mode = 0;
    VAR_10.lru_test_sample_size = 0;
    VAR_10.cluster_mode = 0;
    VAR_10.slave_mode = 0;
    VAR_10.getrdb_mode = 0;
    VAR_10.stat_mode = 0;
    VAR_10.scan_mode = 0;
    VAR_10.intrinsic_latency_mode = 0;
    VAR_10.pattern = ((void*)0);
    VAR_10.rdb_filename = ((void*)0);
    VAR_10.pipe_mode = 0;
    VAR_10.pipe_timeout = VAR_5;
    VAR_10.bigkeys = 0;
    VAR_10.hotkeys = 0;
    VAR_10.stdinarg = 0;
    VAR_10.auth = ((void*)0);
    VAR_10.user = ((void*)0);
    VAR_10.eval = ((void*)0);
    VAR_10.eval_ldb = 0;
    VAR_10.eval_ldb_end = 0;
    VAR_10.eval_ldb_sync = 0;
    VAR_10.enable_ldb_on_eval = 0;
    VAR_10.last_cmd_type = -1;
    VAR_10.verbose = 0;
    VAR_10.no_auth_warning = 0;
    VAR_10.cluster_manager_command.name = ((void*)0);
    VAR_10.cluster_manager_command.argc = 0;
    VAR_10.cluster_manager_command.argv = ((void*)0);
    VAR_10.cluster_manager_command.flags = 0;
    VAR_10.cluster_manager_command.replicas = 0;
    VAR_10.cluster_manager_command.from = ((void*)0);
    VAR_10.cluster_manager_command.to = ((void*)0);
    VAR_10.cluster_manager_command.weight = ((void*)0);
    VAR_10.cluster_manager_command.weight_argc = 0;
    VAR_10.cluster_manager_command.slots = 0;
    VAR_10.cluster_manager_command.timeout = VAR_1;
    VAR_10.cluster_manager_command.pipeline = VAR_0;
    VAR_10.cluster_manager_command.threshold =
        VAR_2;
    VAR_10.cluster_manager_command.backup_dir = ((void*)0);
    VAR_11.hints = 1;

    VAR_12 = VAR_13;
    VAR_15 = VAR_14;

    if (!FUNC_13(FUNC_7(VAR_16)) && (FUNC_11("FAKETTY") == ((void*)0)))
        VAR_10.output = VAR_3;
    else
        VAR_10.output = VAR_4;
    VAR_10.mb_delim = FUNC_23("\n");

    VAR_19 = FUNC_18(VAR_17,VAR_18);
    VAR_17 -= VAR_19;
    VAR_18 += VAR_19;

    FUNC_17();


    if (FUNC_0()) {
        clusterManagerCommandProc *VAR_20 = FUNC_28();
        if (!VAR_20) {
            FUNC_22(VAR_10.hostip);
            FUNC_22(VAR_10.mb_delim);
            FUNC_6(1);
        }
        FUNC_3(VAR_20);
    }


    if (VAR_10.latency_mode) {
        if (FUNC_2(0) == VAR_6) FUNC_6(1);
        FUNC_15();
    }


    if (VAR_10.latency_dist_mode) {
        if (FUNC_2(0) == VAR_6) FUNC_6(1);
        FUNC_14();
    }


    if (VAR_10.slave_mode) {
        if (FUNC_2(0) == VAR_6) FUNC_6(1);
        FUNC_24();
        FUNC_26();
    }


    if (VAR_10.getrdb_mode) {
        if (FUNC_2(0) == VAR_6) FUNC_6(1);
        FUNC_24();
        FUNC_10(((void*)0));
    }


    if (VAR_10.pipe_mode) {
        if (FUNC_2(0) == VAR_6) FUNC_6(1);
        FUNC_19();
    }


    if (VAR_10.bigkeys) {
        if (FUNC_2(0) == VAR_6) FUNC_6(1);
        FUNC_8(0, 0);
    }


    if (VAR_10.memkeys) {
        if (FUNC_2(0) == VAR_6) FUNC_6(1);
        FUNC_8(1, VAR_10.memkeys_samples);
    }


    if (VAR_10.hotkeys) {
        if (FUNC_2(0) == VAR_6) FUNC_6(1);
        FUNC_9();
    }


    if (VAR_10.stat_mode) {
        if (FUNC_2(0) == VAR_6) FUNC_6(1);
        if (VAR_10.interval == 0) VAR_10.interval = 1000000;
        FUNC_27();
    }


    if (VAR_10.scan_mode) {
        if (FUNC_2(0) == VAR_6) FUNC_6(1);
        FUNC_21();
    }


    if (VAR_10.lru_test_mode) {
        if (FUNC_2(0) == VAR_6) FUNC_6(1);
        FUNC_1();
    }


    if (VAR_10.intrinsic_latency_mode) FUNC_12();


    if (VAR_17 == 0 && !VAR_10.eval) {

        FUNC_25(VAR_8, VAR_9);



        FUNC_2(0);
        FUNC_20();
    }


    if (FUNC_2(0) != VAR_7) FUNC_6(1);
    if (VAR_10.eval) {
        return FUNC_5(VAR_17,VAR_18);
    } else {
        return FUNC_16(VAR_17,FUNC_4(VAR_17,VAR_18));
    }
}
