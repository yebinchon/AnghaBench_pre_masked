
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_13__ ;
typedef struct TYPE_14__ TYPE_11__ ;


typedef int ngx_uint_t ;
struct TYPE_19__ {scalar_t__ data; } ;
typedef TYPE_4__ ngx_str_t ;
struct TYPE_15__ {int handler; int log; TYPE_3__* data; } ;
struct TYPE_18__ {int fd; TYPE_1__* write; TYPE_13__* read; TYPE_5__* data; } ;
struct TYPE_16__ {TYPE_3__* data; } ;
struct TYPE_20__ {int active; int pid; int pipefd; int* save_pid; int log; TYPE_13__ read_evt; TYPE_3__ dummy_conn; TYPE_1__ write_evt; int * eval; int eval_ctx; int kill_signal; scalar_t__ managed; TYPE_6__* conf; } ;
typedef TYPE_5__ ngx_rtmp_exec_t ;
struct TYPE_14__ {scalar_t__ data; } ;
struct TYPE_17__ {int nelts; TYPE_4__* elts; } ;
struct TYPE_21__ {TYPE_11__ cmd; TYPE_2__ args; } ;
typedef TYPE_6__ ngx_rtmp_exec_conf_t ;
typedef int ngx_pid_t ;
typedef int ngx_int_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
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
 int VAR_14 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int ) ;
 int VAR_15 ;
 int FUNC_2 (char*,char**) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,int ,...) ;
 int FUNC_5 () ;
 int FUNC_6 (TYPE_13__*,int ,int ) ;
 char** FUNC_7 (int,int ) ;
 int VAR_16 ;
 int FUNC_8 (int ,int ,int ,char*,TYPE_11__*) ;
 int FUNC_9 (int ,int ,int ,char*,TYPE_11__*,int ) ;
 int FUNC_10 (int ,int ,int ,char*,...) ;
 int FUNC_11 (int ,TYPE_4__*,int *,TYPE_4__*,int ) ;
 int FUNC_12 (TYPE_4__*) ;
 int VAR_17 ;
 int FUNC_13 (int ,char*,int) ;
 int FUNC_14 (char*,int ) ;
 int FUNC_15 (int*) ;
 int FUNC_16 (int ,int ,int ,int ,int ) ;
 char* FUNC_17 (int ) ;
 int FUNC_18 (char*) ;
 int FUNC_19 (int ) ;

__attribute__((used)) static ngx_int_t
FUNC_20(ngx_rtmp_exec_t *VAR_18)
{
    int VAR_19, VAR_20, VAR_21, VAR_22[2];
    char **VAR_23, **VAR_24;
    ngx_pid_t VAR_25;
    ngx_str_t *VAR_26, VAR_27;
    ngx_uint_t VAR_28;
    ngx_rtmp_exec_conf_t *VAR_29;

    VAR_29 = VAR_18->conf;

    FUNC_10(VAR_6, VAR_18->log, 0,
                  "exec: starting %s child '%V'",
                  VAR_18->managed ? "managed" : "unmanaged", &VAR_29->cmd);

    VAR_22[0] = -1;
    VAR_22[1] = -1;

    if (VAR_18->managed) {

        if (VAR_18->active) {
            FUNC_8(VAR_5, VAR_18->log, 0,
                           "exec: already active '%V'", &VAR_29->cmd);
            return VAR_7;
        }

        if (FUNC_15(VAR_22) == -1) {
            FUNC_10(VAR_6, VAR_18->log, VAR_16,
                          "exec: pipe failed");
            return VAR_4;
        }



        VAR_20 = FUNC_4(VAR_22[1], VAR_1);

        if (VAR_20 != -1) {
            VAR_20 &= ~VAR_0;
            VAR_20 = FUNC_4(VAR_22[1], VAR_2, VAR_20);
        }

        if (VAR_20 == -1) {

            FUNC_0(VAR_22[0]);
            FUNC_0(VAR_22[1]);

            FUNC_10(VAR_6, VAR_18->log, VAR_16,
                          "exec: fcntl failed");

            return VAR_4;
        }
    }

    VAR_25 = FUNC_5();

    switch (VAR_25) {

        case -1:



            if (VAR_22[0] != -1) {
                FUNC_0(VAR_22[0]);
            }

            if (VAR_22[1] != -1) {
                FUNC_0(VAR_22[1]);
            }

            FUNC_10(VAR_6, VAR_18->log, VAR_16,
                          "exec: fork failed");

            return VAR_4;

        case 0:
            VAR_21 = FUNC_19(VAR_14);
            for (VAR_19 = 0; VAR_19 < VAR_21; ++VAR_19) {
                if (VAR_19 == VAR_22[1]) {
                    continue;
                }

                FUNC_0(VAR_19);
            }

            VAR_19 = FUNC_14("/dev/null", VAR_9);

            FUNC_1(VAR_19, VAR_12);
            FUNC_1(VAR_19, VAR_13);
            FUNC_1(VAR_19, VAR_11);

            VAR_23 = FUNC_7((VAR_29->args.nelts + 2) * sizeof(char *), VAR_18->log);
            if (VAR_23 == ((void*)0)) {
                FUNC_3(1);
            }

            VAR_26 = VAR_29->args.elts;
            VAR_24 = VAR_23;
            *VAR_24++ = (char *) VAR_29->cmd.data;

            for (VAR_28 = 0; VAR_28 < VAR_29->args.nelts; VAR_28++, ++VAR_26) {

                if (VAR_18->eval == ((void*)0)) {
                    VAR_27 = *VAR_26;
                } else {
                    FUNC_11(VAR_18->eval_ctx, VAR_26, VAR_18->eval, &VAR_27, VAR_18->log);
                }

                if (FUNC_12(&VAR_27) != VAR_3) {
                    continue;
                }

                *VAR_24++ = (char *) VAR_27.data;
            }

            *VAR_24 = ((void*)0);
            if (FUNC_2((char *) VAR_29->cmd.data, VAR_23) == -1) {
                char *VAR_30;

                VAR_30 = FUNC_17(VAR_15);

                FUNC_13(VAR_11, "execvp error: ", 14);
                FUNC_13(VAR_11, VAR_30, FUNC_18(VAR_30));
                FUNC_13(VAR_11, "\n", 1);

                FUNC_3(1);
            }

            break;

        default:



            if (VAR_22[1] != -1) {
                FUNC_0(VAR_22[1]);
            }

            if (VAR_22[0] != -1) {

                VAR_18->active = 1;
                VAR_18->pid = VAR_25;
                VAR_18->pipefd = VAR_22[0];

                if (VAR_18->save_pid) {
                    *VAR_18->save_pid = VAR_25;
                }

                VAR_18->dummy_conn.fd = VAR_18->pipefd;
                VAR_18->dummy_conn.data = VAR_18;
                VAR_18->dummy_conn.read = &VAR_18->read_evt;
                VAR_18->dummy_conn.write = &VAR_18->write_evt;
                VAR_18->read_evt.data = &VAR_18->dummy_conn;
                VAR_18->write_evt.data = &VAR_18->dummy_conn;

                VAR_18->read_evt.log = VAR_18->log;
                VAR_18->read_evt.handler = VAR_17;

                if (FUNC_6(&VAR_18->read_evt, VAR_8, 0) != VAR_7) {
                    FUNC_10(VAR_6, VAR_18->log, VAR_16,
                                  "exec: failed to add child control event");
                }
            }

            FUNC_9(VAR_5, VAR_18->log, 0,
                           "exec: child '%V' started pid=%i",
                           &VAR_29->cmd, (ngx_int_t) VAR_25);
            break;
    }

    return VAR_7;
}
