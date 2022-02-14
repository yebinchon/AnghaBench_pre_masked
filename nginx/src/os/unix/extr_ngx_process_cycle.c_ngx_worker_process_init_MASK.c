
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_12__ ;


struct rlimit {void* rlim_max; void* rlim_cur; } ;
struct __user_cap_header_struct {int effective; int permitted; int version; } ;
struct __user_cap_data_struct {int effective; int permitted; int version; } ;
typedef int sigset_t ;
typedef void* rlim_t ;
typedef size_t ngx_uint_t ;
struct TYPE_18__ {unsigned int sec; unsigned int msec; } ;
typedef TYPE_4__ ngx_time_t ;
struct TYPE_19__ {int * previous; } ;
typedef TYPE_5__ ngx_listening_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_16__ {size_t nelts; TYPE_5__* elts; } ;
struct TYPE_20__ {int log; TYPE_3__** modules; TYPE_2__ listening; int conf_ctx; } ;
typedef TYPE_6__ ngx_cycle_t ;
typedef int ngx_cpuset_t ;
struct TYPE_15__ {scalar_t__ data; scalar_t__ len; } ;
struct TYPE_21__ {scalar_t__ priority; scalar_t__ rlimit_nofile; scalar_t__ rlimit_core; TYPE_1__ working_directory; scalar_t__ user; scalar_t__ transparent; int group; int username; } ;
typedef TYPE_7__ ngx_core_conf_t ;
struct TYPE_17__ {scalar_t__ (* init_process ) (TYPE_6__*) ;} ;
struct TYPE_14__ {int pid; int* channel; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (TYPE_6__*,int ,int ,int ) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ FUNC_7 (int ,int ) ;
 int * FUNC_8 (scalar_t__) ;
 scalar_t__ VAR_18 ;
 int FUNC_9 (int ,int ,int ,char*,...) ;
 int FUNC_10 (struct __user_cap_header_struct*,int) ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 TYPE_12__* VAR_21 ;
 int * FUNC_11 (TYPE_6__*,int *) ;
 int FUNC_12 (int *,int ) ;
 TYPE_4__* FUNC_13 () ;
 int FUNC_14 (int ,int,int ,int ,int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ,int ,scalar_t__) ;
 int FUNC_17 (int ,struct rlimit*) ;
 int FUNC_18 (scalar_t__) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int ,int *,int *) ;
 int FUNC_21 (unsigned int) ;
 scalar_t__ FUNC_22 (TYPE_6__*) ;
 int FUNC_23 (int ,struct __user_cap_header_struct*,struct __user_cap_header_struct*) ;

__attribute__((used)) static void
FUNC_24(ngx_cycle_t *VAR_22, ngx_int_t VAR_23)
{
    sigset_t VAR_24;
    ngx_int_t VAR_25;
    ngx_time_t *VAR_26;
    ngx_uint_t VAR_27;
    ngx_cpuset_t *VAR_28;
    struct rlimit VAR_29;
    ngx_core_conf_t *VAR_30;
    ngx_listening_t *VAR_31;

    if (FUNC_11(VAR_22, ((void*)0)) == ((void*)0)) {

        FUNC_3(2);
    }

    VAR_30 = (ngx_core_conf_t *) FUNC_7(VAR_22->conf_ctx, VAR_16);

    if (VAR_23 >= 0 && VAR_30->priority != 0) {
        if (FUNC_16(VAR_6, 0, VAR_30->priority) == -1) {
            FUNC_9(VAR_3, VAR_22->log, VAR_17,
                          "setpriority(%d) failed", VAR_30->priority);
        }
    }

    if (VAR_30->rlimit_nofile != VAR_1) {
        VAR_29.rlim_cur = (rlim_t) VAR_30->rlimit_nofile;
        VAR_29.rlim_max = (rlim_t) VAR_30->rlimit_nofile;

        if (FUNC_17(VAR_10, &VAR_29) == -1) {
            FUNC_9(VAR_3, VAR_22->log, VAR_17,
                          "setrlimit(RLIMIT_NOFILE, %i) failed",
                          VAR_30->rlimit_nofile);
        }
    }

    if (VAR_30->rlimit_core != VAR_1) {
        VAR_29.rlim_cur = (rlim_t) VAR_30->rlimit_core;
        VAR_29.rlim_max = (rlim_t) VAR_30->rlimit_core;

        if (FUNC_17(VAR_9, &VAR_29) == -1) {
            FUNC_9(VAR_3, VAR_22->log, VAR_17,
                          "setrlimit(RLIMIT_CORE, %O) failed",
                          VAR_30->rlimit_core);
        }
    }

    if (FUNC_4() == 0) {
        if (FUNC_15(VAR_30->group) == -1) {
            FUNC_9(VAR_4, VAR_22->log, VAR_17,
                          "setgid(%d) failed", VAR_30->group);

            FUNC_3(2);
        }

        if (FUNC_5(VAR_30->username, VAR_30->group) == -1) {
            FUNC_9(VAR_4, VAR_22->log, VAR_17,
                          "initgroups(%s, %d) failed",
                          VAR_30->username, VAR_30->group);
        }
        if (FUNC_18(VAR_30->user) == -1) {
            FUNC_9(VAR_4, VAR_22->log, VAR_17,
                          "setuid(%d) failed", VAR_30->user);

            FUNC_3(2);
        }
    }

    if (VAR_23 >= 0) {
        VAR_28 = FUNC_8(VAR_23);

        if (VAR_28) {
            FUNC_12(VAR_28, VAR_22->log);
        }
    }
    if (VAR_30->working_directory.len) {
        if (FUNC_1((char *) VAR_30->working_directory.data) == -1) {
            FUNC_9(VAR_3, VAR_22->log, VAR_17,
                          "chdir(\"%s\") failed", VAR_30->working_directory.data);

            FUNC_3(2);
        }
    }

    FUNC_19(&VAR_24);

    if (FUNC_20(VAR_11, &VAR_24, ((void*)0)) == -1) {
        FUNC_9(VAR_3, VAR_22->log, VAR_17,
                      "sigprocmask() failed");
    }

    VAR_26 = FUNC_13();
    FUNC_21(((unsigned) VAR_19 << 16) ^ VAR_26->sec ^ VAR_26->msec);





    VAR_31 = VAR_22->listening.elts;
    for (VAR_27 = 0; VAR_27 < VAR_22->listening.nelts; VAR_27++) {
        VAR_31[VAR_27].previous = ((void*)0);
    }

    for (VAR_27 = 0; VAR_22->modules[VAR_27]; VAR_27++) {
        if (VAR_22->modules[VAR_27]->init_process) {
            if (VAR_22->modules[VAR_27]->init_process(VAR_22) == VAR_2) {

                FUNC_3(2);
            }
        }
    }

    for (VAR_25 = 0; VAR_25 < VAR_18; VAR_25++) {

        if (VAR_21[VAR_25].pid == -1) {
            continue;
        }

        if (VAR_25 == VAR_20) {
            continue;
        }

        if (VAR_21[VAR_25].channel[1] == -1) {
            continue;
        }

        if (FUNC_2(VAR_21[VAR_25].channel[1]) == -1) {
            FUNC_9(VAR_3, VAR_22->log, VAR_17,
                          "close() channel failed");
        }
    }

    if (FUNC_2(VAR_21[VAR_20].channel[0]) == -1) {
        FUNC_9(VAR_3, VAR_22->log, VAR_17,
                      "close() channel failed");
    }





    if (FUNC_6(VAR_22, VAR_14, VAR_5,
                              VAR_15)
        == VAR_2)
    {

        FUNC_3(2);
    }
}
