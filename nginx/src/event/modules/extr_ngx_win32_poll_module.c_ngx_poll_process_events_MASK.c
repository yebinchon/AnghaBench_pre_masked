
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_11__ ;


typedef int u_int ;
typedef size_t ngx_uint_t ;
typedef scalar_t__ ngx_socket_t ;
typedef int ngx_queue_t ;
typedef scalar_t__ ngx_msec_t ;
typedef int ngx_int_t ;
struct TYPE_15__ {int ready; int available; scalar_t__ active; scalar_t__ accept; } ;
typedef TYPE_1__ ngx_event_t ;
typedef int ngx_err_t ;
struct TYPE_16__ {TYPE_6__* log; } ;
typedef TYPE_2__ ngx_cycle_t ;
struct TYPE_17__ {scalar_t__ fd; TYPE_1__* write; TYPE_1__* read; } ;
typedef TYPE_3__ ngx_connection_t ;
struct TYPE_18__ {int log_level; } ;
struct TYPE_14__ {scalar_t__ fd; int revents; int events; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (TYPE_11__*,int ,int) ;
 TYPE_3__** VAR_12 ;
 TYPE_11__* VAR_13 ;
 size_t VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_1 (int ,TYPE_6__*,int ,char*,scalar_t__) ;
 int FUNC_2 (int ,TYPE_6__*,int ,char*,int,size_t) ;
 int FUNC_3 (int ,TYPE_6__*,int ,char*,size_t,scalar_t__,int ) ;
 int FUNC_4 (int ,TYPE_6__*,int ,char*,size_t,scalar_t__,int ,int) ;
 int FUNC_5 (int ,TYPE_6__*,int,char*,...) ;
 int FUNC_6 (TYPE_1__*,int *) ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_7 () ;

__attribute__((used)) static ngx_int_t
FUNC_8(ngx_cycle_t *VAR_19, ngx_msec_t VAR_20, ngx_uint_t VAR_21)
{
    int VAR_22, VAR_23;
    ngx_err_t VAR_24;
    ngx_uint_t VAR_25, VAR_26;
    ngx_event_t *VAR_27;
    ngx_queue_t *VAR_28;
    ngx_connection_t *VAR_29;
    FUNC_1(VAR_3, VAR_19->log, 0, "poll timer: %M", VAR_20);

    VAR_22 = FUNC_0(VAR_13, (u_int) VAR_14, (int) VAR_20);

    VAR_24 = (VAR_22 == -1) ? VAR_15 : 0;

    if (VAR_21 & VAR_6 || VAR_16) {
        FUNC_7();
    }

    FUNC_2(VAR_3, VAR_19->log, 0,
                   "poll ready %d of %ui", VAR_22, VAR_14);

    if (VAR_24) {
        FUNC_5(VAR_1, VAR_19->log, VAR_24, "WSAPoll() failed");
        return VAR_0;
    }

    if (VAR_22 == 0) {
        if (VAR_20 != VAR_5) {
            return VAR_4;
        }

        FUNC_5(VAR_1, VAR_19->log, 0,
                      "WSAPoll() returned no events without timeout");
        return VAR_0;
    }

    for (VAR_25 = 0; VAR_25 < VAR_14 && VAR_22; VAR_25++) {

        VAR_23 = VAR_13[VAR_25].revents;


        FUNC_4(VAR_3, VAR_19->log, 0,
                       "poll: %ui: fd:%d ev:%04Xd rev:%04Xd",
                       VAR_25, VAR_13[VAR_25].fd, VAR_13[VAR_25].events, VAR_23);
        if (VAR_23 & VAR_10) {
            FUNC_5(VAR_1, VAR_19->log, 0,
                          "poll() error fd:%d ev:%04Xd rev:%04Xd",
                          VAR_13[VAR_25].fd, VAR_13[VAR_25].events, VAR_23);
        }

        if (VAR_23 & ~(VAR_9|VAR_11|VAR_7|VAR_8|VAR_10)) {
            FUNC_5(VAR_1, VAR_19->log, 0,
                          "strange poll() events fd:%d ev:%04Xd rev:%04Xd",
                          VAR_13[VAR_25].fd, VAR_13[VAR_25].events, VAR_23);
        }

        if (VAR_13[VAR_25].fd == (ngx_socket_t) -1) {




            continue;
        }

        VAR_29 = VAR_12[VAR_25];

        if (VAR_29->fd == (ngx_socket_t) -1) {
            FUNC_5(VAR_1, VAR_19->log, 0, "unexpected event");






            if (VAR_25 == VAR_14 - 1) {
                VAR_14--;
            } else {
                VAR_13[VAR_25].fd = (ngx_socket_t) -1;
            }

            continue;
        }

        if (VAR_23 & (VAR_7|VAR_8|VAR_10)) {






            VAR_23 |= VAR_9|VAR_11;
        }

        VAR_26 = 0;

        if ((VAR_23 & VAR_9) && VAR_29->read->active) {
            VAR_26 = 1;

            VAR_27 = VAR_29->read;
            VAR_27->ready = 1;
            VAR_27->available = -1;

            VAR_28 = VAR_27->accept ? &VAR_17
                               : &VAR_18;

            FUNC_6(VAR_27, VAR_28);
        }

        if ((VAR_23 & VAR_11) && VAR_29->write->active) {
            VAR_26 = 1;

            VAR_27 = VAR_29->write;
            VAR_27->ready = 1;

            FUNC_6(VAR_27, &VAR_18);
        }

        if (VAR_26) {
            VAR_22--;
            continue;
        }
    }

    if (VAR_22 != 0) {
        FUNC_5(VAR_1, VAR_19->log, 0, "poll ready != events");
    }

    return VAR_4;
}
