
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_11__ ;


typedef int uint32_t ;
typedef int ngx_uint_t ;
typedef int ngx_queue_t ;
typedef scalar_t__ ngx_msec_t ;
typedef int ngx_int_t ;
struct TYPE_15__ {int instance; int pending_eof; int ready; int available; int complete; int (* handler ) (TYPE_2__*) ;scalar_t__ active; scalar_t__ accept; } ;
typedef TYPE_2__ ngx_event_t ;
typedef int ngx_err_t ;
struct TYPE_16__ {int log; } ;
typedef TYPE_3__ ngx_cycle_t ;
struct TYPE_17__ {int fd; TYPE_2__* write; TYPE_2__* read; } ;
typedef TYPE_4__ ngx_connection_t ;
struct TYPE_14__ {TYPE_4__* ptr; } ;
struct TYPE_13__ {int events; TYPE_1__ data; } ;


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
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (int ,TYPE_11__*,int,scalar_t__) ;
 TYPE_11__* VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 int FUNC_1 (int ,int ,int ,char*,TYPE_4__*) ;
 int FUNC_2 (int ,int ,int ,char*,int,int) ;
 int FUNC_3 (int ,int ,int ,char*,int,int,TYPE_4__*) ;
 int FUNC_4 (int,int ,int,char*,...) ;
 int FUNC_5 (TYPE_2__*,int *) ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_6 () ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*) ;

__attribute__((used)) static ngx_int_t
FUNC_9(ngx_cycle_t *VAR_21, ngx_msec_t VAR_22, ngx_uint_t VAR_23)
{
    int VAR_24;
    uint32_t VAR_25;
    ngx_int_t VAR_26, VAR_27;
    ngx_uint_t VAR_28;
    ngx_err_t VAR_29;
    ngx_event_t *VAR_30, *VAR_31;
    ngx_queue_t *VAR_32;
    ngx_connection_t *VAR_33;



    FUNC_1(VAR_8, VAR_21->log, 0,
                   "epoll timer: %M", VAR_22);

    VAR_24 = FUNC_0(VAR_14, VAR_15, (int) VAR_16, VAR_22);

    VAR_29 = (VAR_24 == -1) ? VAR_17 : 0;

    if (VAR_23 & VAR_13 || VAR_18) {
        FUNC_6();
    }

    if (VAR_29) {
        if (VAR_29 == VAR_5) {

            if (VAR_18) {
                VAR_18 = 0;
                return VAR_10;
            }

            VAR_28 = VAR_9;

        } else {
            VAR_28 = VAR_7;
        }

        FUNC_4(VAR_28, VAR_21->log, VAR_29, "epoll_wait() failed");
        return VAR_6;
    }

    if (VAR_24 == 0) {
        if (VAR_22 != VAR_12) {
            return VAR_10;
        }

        FUNC_4(VAR_7, VAR_21->log, 0,
                      "epoll_wait() returned no events without timeout");
        return VAR_6;
    }

    for (VAR_27 = 0; VAR_27 < VAR_24; VAR_27++) {
        VAR_33 = VAR_15[VAR_27].data.ptr;

        VAR_26 = (uintptr_t) VAR_33 & 1;
        VAR_33 = (ngx_connection_t *) ((uintptr_t) VAR_33 & (uintptr_t) ~1);

        VAR_30 = VAR_33->read;

        if (VAR_33->fd == -1 || VAR_30->instance != VAR_26) {






            FUNC_1(VAR_8, VAR_21->log, 0,
                           "epoll: stale event %p", VAR_33);
            continue;
        }

        VAR_25 = VAR_15[VAR_27].events;

        FUNC_3(VAR_8, VAR_21->log, 0,
                       "epoll: fd:%d ev:%04XD d:%p",
                       VAR_33->fd, VAR_25, VAR_15[VAR_27].data.ptr);

        if (VAR_25 & (VAR_0|VAR_1)) {
            FUNC_2(VAR_8, VAR_21->log, 0,
                           "epoll_wait() error on fd:%d ev:%04XD",
                           VAR_33->fd, VAR_25);






            VAR_25 |= VAR_2|VAR_3;
        }
        if ((VAR_25 & VAR_2) && VAR_30->active) {







            VAR_30->ready = 1;
            VAR_30->available = -1;

            if (VAR_23 & VAR_11) {
                VAR_32 = VAR_30->accept ? &VAR_19
                                    : &VAR_20;

                FUNC_5(VAR_30, VAR_32);

            } else {
                VAR_30->handler(VAR_30);
            }
        }

        VAR_31 = VAR_33->write;

        if ((VAR_25 & VAR_3) && VAR_31->active) {

            if (VAR_33->fd == -1 || VAR_31->instance != VAR_26) {






                FUNC_1(VAR_8, VAR_21->log, 0,
                               "epoll: stale event %p", VAR_33);
                continue;
            }

            VAR_31->ready = 1;




            if (VAR_23 & VAR_11) {
                FUNC_5(VAR_31, &VAR_20);

            } else {
                VAR_31->handler(VAR_31);
            }
        }
    }

    return VAR_10;
}
