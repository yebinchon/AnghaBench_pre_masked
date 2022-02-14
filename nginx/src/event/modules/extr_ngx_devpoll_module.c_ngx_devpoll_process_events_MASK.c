
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_9__ ;
typedef struct TYPE_13__ TYPE_8__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct pollfd {int dp_nfds; size_t fd; scalar_t__ revents; scalar_t__ events; scalar_t__ dp_timeout; TYPE_9__* dp_fds; } ;
struct dvpoll {int dp_nfds; size_t fd; scalar_t__ revents; scalar_t__ events; scalar_t__ dp_timeout; TYPE_9__* dp_fds; } ;
typedef scalar_t__ ssize_t ;
typedef int ngx_uint_t ;
typedef int ngx_queue_t ;
typedef scalar_t__ ngx_msec_t ;
typedef int ngx_int_t ;
typedef size_t ngx_fd_t ;
struct TYPE_10__ {int ready; int available; int instance; int (* handler ) (TYPE_1__*) ;scalar_t__ active; scalar_t__ accept; } ;
typedef TYPE_1__ ngx_event_t ;
typedef int ngx_err_t ;
struct TYPE_11__ {int log; } ;
typedef TYPE_2__ ngx_cycle_t ;
struct TYPE_12__ {int fd; TYPE_1__* write; TYPE_1__* read; } ;
typedef TYPE_3__ ngx_connection_t ;
struct TYPE_14__ {size_t fd; int revents; int events; } ;
struct TYPE_13__ {TYPE_3__** files; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 struct pollfd* VAR_17 ;
 int FUNC_0 (size_t) ;
 int VAR_18 ;
 TYPE_9__* VAR_19 ;
 int FUNC_1 (int ,int ,struct pollfd*) ;
 int VAR_20 ;
 scalar_t__ VAR_21 ;
 TYPE_8__* VAR_22 ;
 int VAR_23 ;
 scalar_t__ VAR_24 ;
 int FUNC_2 (int ,int ,int ,char*,scalar_t__) ;
 int FUNC_3 (int ,int ,int ,char*,size_t,int ,int) ;
 int FUNC_4 (int,int ,int,char*,...) ;
 int FUNC_5 (TYPE_1__*,int *) ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_6 () ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 scalar_t__ FUNC_9 (int ,struct pollfd*,int) ;

__attribute__((used)) static ngx_int_t
FUNC_10(ngx_cycle_t *VAR_27, ngx_msec_t VAR_28,
    ngx_uint_t VAR_29)
{
    int VAR_30, VAR_31, VAR_32;
    size_t VAR_33;
    ngx_fd_t VAR_34;
    ngx_err_t VAR_35;
    ngx_int_t VAR_36;
    ngx_uint_t VAR_37, VAR_38;
    ngx_event_t *VAR_39, *VAR_40;
    ngx_queue_t *VAR_41;
    ngx_connection_t *VAR_42;
    struct pollfd VAR_43;
    struct dvpoll VAR_44;



    FUNC_2(VAR_5, VAR_27->log, 0,
                   "devpoll timer: %M", VAR_28);

    if (VAR_20) {
        VAR_33 = VAR_20 * sizeof(struct pollfd);
        if (FUNC_9(VAR_18, VAR_17, VAR_33) != (ssize_t) VAR_33) {
            FUNC_4(VAR_4, VAR_27->log, VAR_23,
                          "write(/dev/poll) failed");
            return VAR_3;
        }

        VAR_20 = 0;
    }

    VAR_44.dp_fds = VAR_19;
    VAR_44.dp_nfds = (int) VAR_21;
    VAR_44.dp_timeout = VAR_28;
    VAR_30 = FUNC_1(VAR_18, VAR_1, &VAR_44);

    VAR_35 = (VAR_30 == -1) ? VAR_23 : 0;

    if (VAR_29 & VAR_10 || VAR_24) {
        FUNC_6();
    }

    if (VAR_35) {
        if (VAR_35 == VAR_2) {

            if (VAR_24) {
                VAR_24 = 0;
                return VAR_7;
            }

            VAR_37 = VAR_6;

        } else {
            VAR_37 = VAR_4;
        }

        FUNC_4(VAR_37, VAR_27->log, VAR_35, "ioctl(DP_POLL) failed");
        return VAR_3;
    }

    if (VAR_30 == 0) {
        if (VAR_28 != VAR_9) {
            return VAR_7;
        }

        FUNC_4(VAR_4, VAR_27->log, 0,
                      "ioctl(DP_POLL) returned no events without timeout");
        return VAR_3;
    }

    for (VAR_36 = 0; VAR_36 < VAR_30; VAR_36++) {

        VAR_34 = VAR_19[VAR_36].fd;
        VAR_31 = VAR_19[VAR_36].revents;

        VAR_42 = VAR_22->files[VAR_34];

        if (VAR_42 == ((void*)0) || VAR_42->fd == -1) {

            VAR_43.fd = VAR_34;
            VAR_43.events = 0;
            VAR_43.revents = 0;

            VAR_32 = FUNC_1(VAR_18, VAR_0, &VAR_43);

            switch (VAR_32) {

            case -1:
                FUNC_4(VAR_4, VAR_27->log, VAR_23,
                    "ioctl(DP_ISPOLLED) failed for socket %d, event %04Xd",
                    VAR_34, VAR_31);
                break;

            case 0:
                FUNC_4(VAR_4, VAR_27->log, 0,
                    "phantom event %04Xd for closed and removed socket %d",
                    VAR_31, VAR_34);
                break;

            default:
                FUNC_4(VAR_4, VAR_27->log, 0,
                    "unexpected event %04Xd for closed and removed socket %d, "
                    "ioctl(DP_ISPOLLED) returned rc:%d, fd:%d, event %04Xd",
                    VAR_31, VAR_34, VAR_32, VAR_43.fd, VAR_43.revents);

                VAR_43.fd = VAR_34;
                VAR_43.events = VAR_16;
                VAR_43.revents = 0;

                if (FUNC_9(VAR_18, &VAR_43, sizeof(struct pollfd))
                    != (ssize_t) sizeof(struct pollfd))
                {
                    FUNC_4(VAR_4, VAR_27->log, VAR_23,
                                  "write(/dev/poll) for %d failed", VAR_34);
                }

                if (FUNC_0(VAR_34) == -1) {
                    FUNC_4(VAR_4, VAR_27->log, VAR_23,
                                  "close(%d) failed", VAR_34);
                }

                break;
            }

            continue;
        }

        FUNC_3(VAR_5, VAR_27->log, 0,
                       "devpoll: fd:%d, ev:%04Xd, rev:%04Xd",
                       VAR_34, VAR_19[VAR_36].events, VAR_31);

        if (VAR_31 & (VAR_11|VAR_12|VAR_14)) {
            FUNC_3(VAR_5, VAR_27->log, 0,
                          "ioctl(DP_POLL) error fd:%d ev:%04Xd rev:%04Xd",
                          VAR_34, VAR_19[VAR_36].events, VAR_31);
        }

        if (VAR_31 & ~(VAR_13|VAR_15|VAR_11|VAR_12|VAR_14)) {
            FUNC_4(VAR_4, VAR_27->log, 0,
                          "strange ioctl(DP_POLL) events "
                          "fd:%d ev:%04Xd rev:%04Xd",
                          VAR_34, VAR_19[VAR_36].events, VAR_31);
        }

        if (VAR_31 & (VAR_11|VAR_12|VAR_14)) {






            VAR_31 |= VAR_13|VAR_15;
        }

        VAR_39 = VAR_42->read;

        if ((VAR_31 & VAR_13) && VAR_39->active) {
            VAR_39->ready = 1;
            VAR_39->available = -1;

            if (VAR_29 & VAR_8) {
                VAR_41 = VAR_39->accept ? &VAR_25
                                    : &VAR_26;

                FUNC_5(VAR_39, VAR_41);

            } else {
                VAR_38 = VAR_39->instance;

                VAR_39->handler(VAR_39);

                if (VAR_42->fd == -1 || VAR_39->instance != VAR_38) {
                    continue;
                }
            }
        }

        VAR_40 = VAR_42->write;

        if ((VAR_31 & VAR_15) && VAR_40->active) {
            VAR_40->ready = 1;

            if (VAR_29 & VAR_8) {
                FUNC_5(VAR_40, &VAR_26);

            } else {
                VAR_40->handler(VAR_40);
            }
        }
    }

    return VAR_7;
}
