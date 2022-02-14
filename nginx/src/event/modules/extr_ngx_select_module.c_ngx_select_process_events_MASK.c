
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
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 size_t VAR_9 ;
 TYPE_1__** VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 size_t VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_1 (int ,TYPE_7__*,int ,char*,int) ;
 int FUNC_2 (int ,TYPE_7__*,int ,char*,int,scalar_t__) ;
 int FUNC_3 (size_t,TYPE_7__*,int,char*,...) ;
 int FUNC_4 (TYPE_1__*,int *) ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 () ;
 int FUNC_7 (int,int *,int *,int *,struct timeval*) ;
 int VAR_19 ;
 int VAR_20 ;

__attribute__((used)) static ngx_int_t
FUNC_8(ngx_cycle_t *VAR_21, ngx_msec_t VAR_22,
    ngx_uint_t VAR_23)
{
    int VAR_24, VAR_25;
    ngx_err_t VAR_26;
    ngx_uint_t VAR_27, VAR_28;
    ngx_event_t *VAR_29;
    ngx_queue_t *VAR_30;
    struct timeval VAR_31, *VAR_32;
    ngx_connection_t *VAR_33;

    if (VAR_13 == -1) {
        for (VAR_27 = 0; VAR_27 < VAR_14; VAR_27++) {
            VAR_33 = VAR_10[VAR_27]->data;
            if (VAR_13 < VAR_33->fd) {
                VAR_13 = VAR_33->fd;
            }
        }

        FUNC_1(VAR_5, VAR_21->log, 0,
                       "change max_fd: %i", VAR_13);
    }
    if (VAR_22 == VAR_8) {
        VAR_32 = ((void*)0);

    } else {
        VAR_31.tv_sec = (long) (VAR_22 / 1000);
        VAR_31.tv_usec = (long) ((VAR_22 % 1000) * 1000);
        VAR_32 = &VAR_31;
    }

    FUNC_1(VAR_5, VAR_21->log, 0,
                   "select timer: %M", VAR_22);

    VAR_19 = VAR_11;
    VAR_20 = VAR_12;

    VAR_24 = FUNC_7(VAR_13 + 1, &VAR_19, &VAR_20, ((void*)0), VAR_32);

    VAR_26 = (VAR_24 == -1) ? VAR_15 : 0;

    if (VAR_23 & VAR_9 || VAR_16) {
        FUNC_6();
    }

    FUNC_1(VAR_5, VAR_21->log, 0,
                   "select ready %d", VAR_24);

    if (VAR_26) {
        ngx_uint_t VAR_34;

        if (VAR_26 == VAR_1) {

            if (VAR_16) {
                VAR_16 = 0;
                return VAR_7;
            }

            VAR_34 = VAR_6;

        } else {
            VAR_34 = VAR_3;
        }

        FUNC_3(VAR_34, VAR_21->log, VAR_26, "select() failed");

        if (VAR_26 == VAR_0) {
            FUNC_5(VAR_21);
        }

        return VAR_2;
    }

    if (VAR_24 == 0) {
        if (VAR_22 != VAR_8) {
            return VAR_7;
        }

        FUNC_3(VAR_3, VAR_21->log, 0,
                      "select() returned no events without timeout");
        return VAR_2;
    }

    VAR_25 = 0;

    for (VAR_27 = 0; VAR_27 < VAR_14; VAR_27++) {
        VAR_29 = VAR_10[VAR_27];
        VAR_33 = VAR_29->data;
        VAR_28 = 0;

        if (VAR_29->write) {
            if (FUNC_0(VAR_33->fd, &VAR_20)) {
                VAR_28 = 1;
                FUNC_1(VAR_5, VAR_21->log, 0,
                               "select write %d", VAR_33->fd);
            }

        } else {
            if (FUNC_0(VAR_33->fd, &VAR_19)) {
                VAR_28 = 1;
                FUNC_1(VAR_5, VAR_21->log, 0,
                               "select read %d", VAR_33->fd);
            }
        }

        if (VAR_28) {
            VAR_29->ready = 1;
            VAR_29->available = -1;

            VAR_30 = VAR_29->accept ? &VAR_17
                               : &VAR_18;

            FUNC_4(VAR_29, VAR_30);

            VAR_25++;
        }
    }

    if (VAR_24 != VAR_25) {
        FUNC_3(VAR_3, VAR_21->log, 0,
                      "select ready != events: %d:%d", VAR_24, VAR_25);

        FUNC_5(VAR_21);
    }

    return VAR_7;
}
