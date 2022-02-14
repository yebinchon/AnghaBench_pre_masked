
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u_long ;
typedef int u_char ;
typedef int * ngx_tid_t ;
typedef int ngx_log_t ;
typedef scalar_t__ ngx_err_t ;
struct TYPE_4__ {int * log; } ;
typedef TYPE_1__ ngx_cycle_t ;
typedef int * HANDLE ;


 int * FUNC_0 (int *,int,int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * FUNC_1 (int ,int ,char*) ;
 int * FUNC_2 (int ,int ,scalar_t__) ;
 scalar_t__ FUNC_3 (int *) ;
 int VAR_6 ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_5 (scalar_t__,int **,int ,int ) ;
 int FUNC_6 (int) ;
 int VAR_9 ;
 int * VAR_10 ;
 int * VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int **,int ,int *,int *) ;
 scalar_t__ VAR_14 ;
 int FUNC_9 (int ,int *,int ,char*) ;
 int FUNC_10 (int ,int *,int ,char*,scalar_t__) ;
 int FUNC_11 (int ,int *,scalar_t__,char*,...) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_12 (int *,char*,int ) ;
 int VAR_18 ;
 int FUNC_13 () ;
 int VAR_19 ;
 int FUNC_14 (TYPE_1__*) ;
 int VAR_20 ;

__attribute__((used)) static void
FUNC_15(ngx_cycle_t *VAR_21, char *VAR_22)
{
    char VAR_23[VAR_5];
    char VAR_24[VAR_5];
    char VAR_25[VAR_5];
    HANDLE VAR_26, VAR_27[3];
    u_long VAR_28, VAR_29;
    ngx_err_t VAR_30;
    ngx_tid_t VAR_31, VAR_32, VAR_33;
    ngx_log_t *VAR_34;

    VAR_34 = VAR_21->log;

    FUNC_9(VAR_3, VAR_34, 0, "worker started");

    FUNC_12((u_char *) VAR_23, "ngx_worker_term_%P%Z", VAR_15);
    VAR_27[0] = FUNC_0(((void*)0), 1, 0, VAR_23);
    if (VAR_27[0] == ((void*)0)) {
        FUNC_11(VAR_2, VAR_34, VAR_14,
                      "CreateEvent(\"%s\") failed", VAR_23);
        goto failed;
    }

    FUNC_12((u_char *) VAR_24, "ngx_worker_quit_%P%Z", VAR_15);
    VAR_27[1] = FUNC_0(((void*)0), 1, 0, VAR_24);
    if (VAR_27[1] == ((void*)0)) {
        FUNC_11(VAR_2, VAR_34, VAR_14,
                      "CreateEvent(\"%s\") failed", VAR_24);
        goto failed;
    }

    FUNC_12((u_char *) VAR_25, "ngx_worker_reopen_%P%Z", VAR_15);
    VAR_27[2] = FUNC_0(((void*)0), 1, 0, VAR_25);
    if (VAR_27[2] == ((void*)0)) {
        FUNC_11(VAR_2, VAR_34, VAR_14,
                      "CreateEvent(\"%s\") failed", VAR_25);
        goto failed;
    }

    VAR_26 = FUNC_1(VAR_0, 0, VAR_22);
    if (VAR_26 == ((void*)0)) {
        FUNC_11(VAR_2, VAR_34, VAR_14,
                      "OpenEvent(\"%s\") failed", VAR_22);
        goto failed;
    }

    if (FUNC_4(VAR_26) == 0) {
        FUNC_11(VAR_2, VAR_34, VAR_14,
                      "SetEvent(\"%s\") failed", VAR_22);
        goto failed;
    }


    FUNC_12((u_char *) VAR_12,
                "ngx_cache_manager_mutex_%s%Z", VAR_19);

    VAR_11 = FUNC_2(VAR_6, 0,
                                        VAR_12);
    if (VAR_11 == ((void*)0)) {
        FUNC_11(VAR_2, VAR_34, VAR_14,
                      "OpenMutex(\"%s\") failed", VAR_12);
        goto failed;
    }

    VAR_10 = FUNC_0(((void*)0), 1, 0, ((void*)0));
    if (VAR_10 == ((void*)0)) {
        FUNC_11(VAR_2, VAR_21->log, VAR_14,
                      "CreateEvent(\"ngx_cache_manager_event\") failed");
        goto failed;
    }


    if (FUNC_8(&VAR_31, VAR_20, ((void*)0), VAR_34) != 0) {
        goto failed;
    }

    if (FUNC_8(&VAR_32, VAR_13, ((void*)0), VAR_34) != 0) {
        goto failed;
    }

    if (FUNC_8(&VAR_33, VAR_9, ((void*)0), VAR_34) != 0) {
        goto failed;
    }

    for ( ;; ) {
        VAR_29 = FUNC_5(3, VAR_27, 0, VAR_1);

        VAR_30 = VAR_14;
        FUNC_13();

        FUNC_10(VAR_3, VAR_34, 0,
                       "worker WaitForMultipleObjects: %ul", VAR_29);

        if (VAR_29 == VAR_8) {
            VAR_18 = 1;
            FUNC_11(VAR_4, VAR_34, 0, "exiting");

            if (FUNC_3(VAR_27[0]) == 0) {
                FUNC_11(VAR_2, VAR_34, 0,
                              "ResetEvent(\"%s\") failed", VAR_23);
            }

            break;
        }

        if (VAR_29 == VAR_8 + 1) {
            VAR_16 = 1;
            FUNC_11(VAR_4, VAR_34, 0, "gracefully shutting down");
            break;
        }

        if (VAR_29 == VAR_8 + 2) {
            VAR_17 = 1;
            FUNC_11(VAR_4, VAR_34, 0, "reopening logs");

            if (FUNC_3(VAR_27[2]) == 0) {
                FUNC_11(VAR_2, VAR_34, 0,
                              "ResetEvent(\"%s\") failed", VAR_25);
            }

            continue;
        }

        if (VAR_29 == VAR_7) {
            FUNC_11(VAR_2, VAR_34, VAR_30,
                          "WaitForMultipleObjects() failed");

            goto failed;
        }
    }



    if (FUNC_4(VAR_10) == 0) {
        FUNC_11(VAR_2, VAR_34, VAR_14,
                      "SetEvent(\"ngx_cache_manager_event\") failed");
    }

    VAR_27[1] = VAR_31;
    VAR_27[2] = VAR_32;

    VAR_28 = 3;

    for ( ;; ) {
        VAR_29 = FUNC_5(VAR_28, VAR_27, 0, VAR_1);

        VAR_30 = VAR_14;
        FUNC_13();

        FUNC_10(VAR_3, VAR_34, 0,
                       "worker exit WaitForMultipleObjects: %ul", VAR_29);

        if (VAR_29 == VAR_8) {
            break;
        }

        if (VAR_29 == VAR_8 + 1) {
            if (VAR_28 == 2) {
                break;
            }

            VAR_27[1] = VAR_27[2];
            VAR_28 = 2;
            continue;
        }

        if (VAR_29 == VAR_8 + 2) {
            VAR_28 = 2;
            continue;
        }

        if (VAR_29 == VAR_7) {
            FUNC_11(VAR_2, VAR_34, VAR_30,
                          "WaitForMultipleObjects() failed");
            break;
        }
    }

    FUNC_7(VAR_10);
    FUNC_7(VAR_27[0]);
    FUNC_7(VAR_27[1]);
    FUNC_7(VAR_27[2]);
    FUNC_7(VAR_26);

    FUNC_14(VAR_21);

failed:

    FUNC_6(2);
}
