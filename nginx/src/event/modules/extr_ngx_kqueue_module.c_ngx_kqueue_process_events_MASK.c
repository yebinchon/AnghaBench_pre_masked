
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_10__ ;


struct timespec {int tv_sec; int tv_nsec; } ;
typedef int ngx_uint_t ;
typedef int ngx_queue_t ;
typedef int ngx_msec_t ;
typedef int ngx_int_t ;
struct TYPE_14__ {int instance; int pending_eof; int ready; int kq_vnode; int complete; int (* handler ) (TYPE_1__*) ;scalar_t__ accept; int kq_errno; int available; int active; int oneshot; TYPE_5__* log; int closed; } ;
typedef TYPE_1__ ngx_event_t ;
typedef int ngx_err_t ;
struct TYPE_15__ {TYPE_5__* log; } ;
typedef TYPE_2__ ngx_cycle_t ;
struct TYPE_16__ {int log_level; } ;
struct TYPE_13__ {int flags; int filter; int fflags; int data; scalar_t__ udata; scalar_t__ ident; } ;




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
 TYPE_10__* VAR_14 ;
 int FUNC_0 (int ,int ,int,TYPE_10__*,int,struct timespec*) ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 int FUNC_1 (TYPE_5__*,TYPE_10__*) ;
 int FUNC_2 (int ,TYPE_5__*,int ,char*,...) ;
 int FUNC_3 (int ,TYPE_5__*,int ,char*,int,int) ;
 int FUNC_4 (int,TYPE_5__*,int,char*,...) ;
 int FUNC_5 (TYPE_1__*,int *) ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_6 () ;
 int FUNC_7 (TYPE_1__*) ;

__attribute__((used)) static ngx_int_t
FUNC_8(ngx_cycle_t *VAR_22, ngx_msec_t VAR_23,
    ngx_uint_t VAR_24)
{
    int VAR_25, VAR_26;
    ngx_int_t VAR_27, VAR_28;
    ngx_uint_t VAR_29;
    ngx_err_t VAR_30;
    ngx_event_t *VAR_31;
    ngx_queue_t *VAR_32;
    struct timespec VAR_33, *VAR_34;

    VAR_26 = (int) VAR_15;
    VAR_15 = 0;

    if (VAR_23 == VAR_11) {
        VAR_34 = ((void*)0);

    } else {

        VAR_33.tv_sec = VAR_23 / 1000;
        VAR_33.tv_nsec = (VAR_23 % 1000) * 1000000;
        VAR_34 = &VAR_33;
    }

    FUNC_3(VAR_7, VAR_22->log, 0,
                   "kevent timer: %M, changes: %d", VAR_23, VAR_26);

    VAR_25 = FUNC_0(VAR_19, VAR_13, VAR_26, VAR_14, (int) VAR_16, VAR_34);

    VAR_30 = (VAR_25 == -1) ? VAR_17 : 0;

    if (VAR_24 & VAR_12 || VAR_18) {
        FUNC_6();
    }

    FUNC_2(VAR_7, VAR_22->log, 0,
                   "kevent events: %d", VAR_25);

    if (VAR_30) {
        if (VAR_30 == VAR_3) {

            if (VAR_18) {
                VAR_18 = 0;
                return VAR_9;
            }

            VAR_29 = VAR_8;

        } else {
            VAR_29 = VAR_5;
        }

        FUNC_4(VAR_29, VAR_22->log, VAR_30, "kevent() failed");
        return VAR_4;
    }

    if (VAR_25 == 0) {
        if (VAR_23 != VAR_11) {
            return VAR_9;
        }

        FUNC_4(VAR_5, VAR_22->log, 0,
                      "kevent() returned no events without timeout");
        return VAR_4;
    }

    for (VAR_27 = 0; VAR_27 < VAR_25; VAR_27++) {

        FUNC_1(VAR_22->log, &VAR_14[VAR_27]);

        if (VAR_14[VAR_27].flags & VAR_2) {
            FUNC_4(VAR_5, VAR_22->log, VAR_14[VAR_27].data,
                          "kevent() error on %d filter:%d flags:%04Xd",
                          (int) VAR_14[VAR_27].ident, VAR_14[VAR_27].filter,
                          VAR_14[VAR_27].flags);
            continue;
        }
        VAR_31 = (ngx_event_t *) VAR_14[VAR_27].udata;

        switch (VAR_14[VAR_27].filter) {

        case 131:
        case 128:

            VAR_28 = (uintptr_t) VAR_31 & 1;
            VAR_31 = (ngx_event_t *) ((uintptr_t) VAR_31 & (uintptr_t) ~1);

            if (VAR_31->closed || VAR_31->instance != VAR_28) {






                FUNC_2(VAR_7, VAR_22->log, 0,
                               "kevent: stale event %p", VAR_31);
                continue;
            }

            if (VAR_31->log && (VAR_31->log->log_level & VAR_6)) {
                FUNC_1(VAR_31->log, &VAR_14[VAR_27]);
            }

            if (VAR_31->oneshot) {
                VAR_31->active = 0;
            }

            VAR_31->available = VAR_14[VAR_27].data;

            if (VAR_14[VAR_27].flags & VAR_1) {
                VAR_31->pending_eof = 1;
                VAR_31->kq_errno = VAR_14[VAR_27].fflags;
            }

            VAR_31->ready = 1;

            break;

        case 129:
            VAR_31->kq_vnode = 1;

            break;

        case 132:
            VAR_31->complete = 1;
            VAR_31->ready = 1;

            break;


        case 130:
            break;


        default:
            FUNC_4(VAR_5, VAR_22->log, 0,
                          "unexpected kevent() filter %d",
                          VAR_14[VAR_27].filter);
            continue;
        }

        if (VAR_24 & VAR_10) {
            VAR_32 = VAR_31->accept ? &VAR_20
                               : &VAR_21;

            FUNC_5(VAR_31, VAR_32);

            continue;
        }

        VAR_31->handler(VAR_31);
    }

    return VAR_9;
}
