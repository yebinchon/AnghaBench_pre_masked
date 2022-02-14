
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct timeval {long tv_sec; long tv_usec; } ;
typedef size_t ngx_uint_t ;
typedef int ngx_queue_t ;
typedef int ngx_msec_t ;
typedef int ngx_int_t ;
struct TYPE_11__ {int ready; int available; scalar_t__ accept; scalar_t__ write; TYPE_3__* data; } ;
typedef TYPE_1__ ngx_event_t ;
typedef int ngx_err_t ;
struct TYPE_12__ {TYPE_7__* log; } ;
typedef TYPE_2__ ngx_cycle_t ;
struct TYPE_13__ {int fd; } ;
typedef TYPE_3__ ngx_connection_t ;
struct TYPE_14__ {int log_level; } ;


 scalar_t__ FUNC_0 (int,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 TYPE_1__** VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 size_t VAR_13 ;
 int FUNC_1 (int ,TYPE_7__*,int ,char*,int) ;
 int FUNC_2 (int ,TYPE_7__*,int ,char*,int,scalar_t__) ;
 int FUNC_3 (int ,TYPE_7__*,int,char*,...) ;
 int FUNC_4 (int) ;
 int FUNC_5 (TYPE_1__*,int *) ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_6 (TYPE_2__*) ;
 int VAR_16 ;
 int FUNC_7 () ;
 int FUNC_8 (int ,int *,int *,int *,struct timeval*) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;

__attribute__((used)) static ngx_int_t
FUNC_9(ngx_cycle_t *VAR_20, ngx_msec_t VAR_21,
    ngx_uint_t VAR_22)
{
    int VAR_23, VAR_24;
    ngx_err_t VAR_25;
    ngx_uint_t VAR_26, VAR_27;
    ngx_event_t *VAR_28;
    ngx_queue_t *VAR_29;
    struct timeval VAR_30, *VAR_31;
    ngx_connection_t *VAR_32;
    if (VAR_21 == VAR_5) {
        VAR_31 = ((void*)0);

    } else {
        VAR_30.tv_sec = (long) (VAR_21 / 1000);
        VAR_30.tv_usec = (long) ((VAR_21 % 1000) * 1000);
        VAR_31 = &VAR_30;
    }

    FUNC_1(VAR_3, VAR_20->log, 0,
                   "select timer: %M", VAR_21);

    VAR_18 = VAR_9;
    VAR_19 = VAR_10;
    VAR_17 = VAR_10;

    if (VAR_11 || VAR_12) {
        VAR_23 = FUNC_8(0, &VAR_18, &VAR_19,
                       &VAR_17, VAR_31);

    } else {







        FUNC_4(VAR_21);

        VAR_23 = 0;
    }

    VAR_25 = (VAR_23 == -1) ? VAR_16 : 0;

    if (VAR_22 & VAR_6) {
        FUNC_7();
    }

    FUNC_1(VAR_3, VAR_20->log, 0,
                   "select ready %d", VAR_23);

    if (VAR_25) {
        FUNC_3(VAR_1, VAR_20->log, VAR_25, "select() failed");

        if (VAR_25 == VAR_7) {
            FUNC_6(VAR_20);
        }

        return VAR_0;
    }

    if (VAR_23 == 0) {
        if (VAR_21 != VAR_5) {
            return VAR_4;
        }

        FUNC_3(VAR_1, VAR_20->log, 0,
                      "select() returned no events without timeout");
        return VAR_0;
    }

    VAR_24 = 0;

    for (VAR_26 = 0; VAR_26 < VAR_13; VAR_26++) {
        VAR_28 = VAR_8[VAR_26];
        VAR_32 = VAR_28->data;
        VAR_27 = 0;

        if (VAR_28->write) {
            if (FUNC_0(VAR_32->fd, &VAR_19)) {
                VAR_27++;
                FUNC_1(VAR_3, VAR_20->log, 0,
                               "select write %d", VAR_32->fd);
            }

            if (FUNC_0(VAR_32->fd, &VAR_17)) {
                VAR_27++;
                FUNC_1(VAR_3, VAR_20->log, 0,
                               "select except %d", VAR_32->fd);
            }

        } else {
            if (FUNC_0(VAR_32->fd, &VAR_18)) {
                VAR_27++;
                FUNC_1(VAR_3, VAR_20->log, 0,
                               "select read %d", VAR_32->fd);
            }
        }

        if (VAR_27) {
            VAR_28->ready = 1;
            VAR_28->available = -1;

            VAR_29 = VAR_28->accept ? &VAR_14
                               : &VAR_15;

            FUNC_5(VAR_28, VAR_29);

            VAR_24 += VAR_27;
        }
    }

    if (VAR_23 != VAR_24) {
        FUNC_3(VAR_1, VAR_20->log, 0,
                      "select ready != events: %d:%d", VAR_23, VAR_24);

        FUNC_6(VAR_20);
    }

    return VAR_4;
}
