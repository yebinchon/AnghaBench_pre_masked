
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_9__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef size_t u_long ;
typedef int u_char ;
typedef int ngx_uint_t ;
typedef scalar_t__ ngx_msec_t ;
typedef size_t ngx_int_t ;
typedef int ngx_err_t ;
struct TYPE_18__ {int log; } ;
typedef TYPE_1__ ngx_cycle_t ;
struct TYPE_19__ {scalar_t__ handle; } ;
typedef scalar_t__ HANDLE ;


 int * FUNC_0 (int *,int,int ,size_t) ;
 int * FUNC_1 (int *,int ,size_t) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (char*,int ) ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t FUNC_4 (size_t,scalar_t__*,int ,size_t) ;
 int FUNC_5 (int) ;
 int * VAR_12 ;
 size_t VAR_13 ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 scalar_t__ FUNC_8 (TYPE_1__*) ;
 scalar_t__ VAR_14 ;
 TYPE_1__* VAR_15 ;
 int VAR_16 ;
 TYPE_1__* FUNC_9 (TYPE_1__*) ;
 size_t VAR_17 ;
 int FUNC_10 (int ,int ,int ,char*) ;
 int FUNC_11 (int ,int ,int ,char*,size_t) ;
 int FUNC_12 (int ,int ,int ,char*,...) ;
 int * VAR_18 ;
 size_t VAR_19 ;
 int FUNC_13 (TYPE_1__*) ;
 scalar_t__ VAR_20 ;
 TYPE_9__* VAR_21 ;
 int VAR_22 ;
 scalar_t__ VAR_23 ;
 size_t VAR_24 ;
 int FUNC_14 (TYPE_1__*,int) ;
 int FUNC_15 (TYPE_1__*,scalar_t__) ;
 scalar_t__ VAR_25 ;
 size_t VAR_26 ;
 scalar_t__ VAR_27 ;
 size_t VAR_28 ;
 int FUNC_16 (TYPE_1__*,int) ;
 int FUNC_17 (TYPE_1__*) ;
 int FUNC_18 (int *,char*,int ) ;
 scalar_t__ FUNC_19 (TYPE_1__*,int ) ;
 scalar_t__ VAR_29 ;
 size_t VAR_30 ;
 int VAR_31 ;
 int FUNC_20 (TYPE_1__*) ;
 int FUNC_21 () ;
 int VAR_32 ;
 int FUNC_22 (TYPE_1__*,size_t) ;

void
FUNC_23(ngx_cycle_t *VAR_33)
{
    u_long VAR_34, VAR_35, VAR_36;
    ngx_err_t VAR_37;
    ngx_int_t VAR_38;
    ngx_msec_t VAR_39;
    ngx_uint_t VAR_40;
    HANDLE VAR_41[VAR_1];

    FUNC_18((u_char *) VAR_19,
                "ngx_master_%s%Z", VAR_32);

    if (VAR_20 == VAR_8) {
        FUNC_22(VAR_33, VAR_19);
        return;
    }

    FUNC_10(VAR_3, VAR_33->log, 0, "master started");

    FUNC_7(VAR_33);

    FUNC_3("ngx_unique", VAR_32);

    VAR_18 = FUNC_0(((void*)0), 1, 0,
                                           VAR_19);
    if (VAR_18 == ((void*)0)) {
        FUNC_12(VAR_2, VAR_33->log, VAR_16,
                      "CreateEvent(\"%s\") failed",
                      VAR_19);
        FUNC_5(2);
    }

    if (FUNC_8(VAR_33) != VAR_5) {
        FUNC_5(2);
    }

    FUNC_18((u_char *) VAR_13,
                "ngx_cache_manager_mutex_%s%Z", VAR_32);

    VAR_12 = FUNC_1(((void*)0), 0,
                                          VAR_13);
    if (VAR_12 == ((void*)0)) {
        FUNC_12(VAR_2, VAR_33->log, VAR_16,
                   "CreateMutex(\"%s\") failed", VAR_13);
        FUNC_5(2);
    }


    VAR_41[0] = VAR_29;
    VAR_41[1] = VAR_23;
    VAR_41[2] = VAR_27;
    VAR_41[3] = VAR_25;

    FUNC_6(VAR_33);

    if (FUNC_19(VAR_33, VAR_7) == 0) {
        FUNC_5(2);
    }

    VAR_39 = 0;
    VAR_36 = VAR_0;

    for ( ;; ) {

        VAR_34 = 4;
        for (VAR_38 = 0; VAR_38 < VAR_17; VAR_38++) {
            if (VAR_21[VAR_38].handle) {
                VAR_41[VAR_34++] = VAR_21[VAR_38].handle;
            }
        }

        if (VAR_39) {
            VAR_36 = VAR_39 > VAR_14 ? VAR_39 - VAR_14 : 0;
        }

        VAR_35 = FUNC_4(VAR_34, VAR_41, 0, VAR_36);

        VAR_37 = VAR_16;
        FUNC_21();

        FUNC_11(VAR_3, VAR_33->log, 0,
                       "master WaitForMultipleObjects: %ul", VAR_35);

        if (VAR_35 == VAR_10) {
            FUNC_12(VAR_4, VAR_33->log, 0, "exiting");

            if (FUNC_2(VAR_29) == 0) {
                FUNC_12(VAR_2, VAR_33->log, 0,
                              "ResetEvent(\"%s\") failed", VAR_30);
            }

            if (VAR_39 == 0) {
                VAR_39 = VAR_14 + 5000;
            }

            VAR_31 = 1;
            FUNC_14(VAR_33, 0);

            continue;
        }

        if (VAR_35 == VAR_10 + 1) {
            FUNC_12(VAR_4, VAR_33->log, 0, "shutting down");

            if (FUNC_2(VAR_23) == 0) {
                FUNC_12(VAR_2, VAR_33->log, 0,
                              "ResetEvent(\"%s\") failed", VAR_24);
            }

            VAR_22 = 1;
            FUNC_14(VAR_33, 0);

            continue;
        }

        if (VAR_35 == VAR_10 + 2) {
            FUNC_12(VAR_4, VAR_33->log, 0, "reopening logs");

            if (FUNC_2(VAR_27) == 0) {
                FUNC_12(VAR_2, VAR_33->log, 0,
                              "ResetEvent(\"%s\") failed",
                              VAR_28);
            }

            FUNC_16(VAR_33, -1);
            FUNC_17(VAR_33);

            continue;
        }

        if (VAR_35 == VAR_10 + 3) {
            FUNC_12(VAR_4, VAR_33->log, 0, "reconfiguring");

            if (FUNC_2(VAR_25) == 0) {
                FUNC_12(VAR_2, VAR_33->log, 0,
                              "ResetEvent(\"%s\") failed",
                              VAR_26);
            }

            VAR_33 = FUNC_9(VAR_33);
            if (VAR_33 == ((void*)0)) {
                VAR_33 = (ngx_cycle_t *) VAR_15;
                continue;
            }

            VAR_15 = VAR_33;

            FUNC_6(VAR_33);

            if (FUNC_19(VAR_33, VAR_6)) {
                FUNC_14(VAR_33, 1);
            }

            continue;
        }

        if (VAR_35 > VAR_10 + 3 && VAR_35 < VAR_10 + VAR_34) {

            FUNC_10(VAR_3, VAR_33->log, 0, "reap worker");

            VAR_40 = FUNC_15(VAR_33, VAR_41[VAR_35]);

            if (!VAR_40 && (VAR_31 || VAR_22)) {
                FUNC_13(VAR_33);
            }

            continue;
        }

        if (VAR_35 == VAR_11) {
            FUNC_20(VAR_33);

            FUNC_13(VAR_33);
        }

        if (VAR_35 == VAR_9) {
            FUNC_12(VAR_2, VAR_33->log, VAR_37,
                          "WaitForMultipleObjects() failed");

            continue;
        }

        FUNC_12(VAR_2, VAR_33->log, 0,
            "WaitForMultipleObjects() returned unexpected value %ul", VAR_35);
    }
}
