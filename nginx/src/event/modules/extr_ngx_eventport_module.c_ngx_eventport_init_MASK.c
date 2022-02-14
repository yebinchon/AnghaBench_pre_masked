
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {struct sigevent* sival_ptr; } ;
struct sigevent {int portnfy_port; TYPE_1__ sigev_value; int sigev_notify; } ;
struct TYPE_12__ {int tv_sec; int tv_nsec; } ;
struct TYPE_11__ {int tv_sec; int tv_nsec; } ;
struct itimerspec {TYPE_3__ it_value; TYPE_2__ it_interval; } ;
typedef struct sigevent port_notify_t ;
typedef int port_event_t ;
typedef int ngx_msec_t ;
typedef int ngx_int_t ;
struct TYPE_13__ {int events; } ;
typedef TYPE_4__ ngx_eventport_conf_t ;
struct TYPE_14__ {int log; int conf_ctx; } ;
typedef TYPE_5__ ngx_cycle_t ;
struct TYPE_16__ {int actions; } ;
struct TYPE_15__ {int active; int log; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int * VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int * FUNC_0 (int,int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 TYPE_4__* FUNC_1 (int ,int ) ;
 int VAR_14 ;
 TYPE_7__ VAR_15 ;
 int FUNC_2 (int *) ;
 int VAR_16 ;
 int FUNC_3 (int ,int ,int ,char*) ;
 int FUNC_4 (struct sigevent*,int) ;
 int VAR_17 ;
 TYPE_6__ VAR_18 ;
 int FUNC_5 () ;
 int FUNC_6 (int ,struct sigevent*,int *) ;
 int FUNC_7 (int ,int ,struct itimerspec*,int *) ;

__attribute__((used)) static ngx_int_t
FUNC_8(ngx_cycle_t *VAR_19, ngx_msec_t VAR_20)
{
    port_notify_t VAR_21;
    struct itimerspec VAR_22;
    struct sigevent VAR_23;
    ngx_eventport_conf_t *VAR_24;

    VAR_24 = FUNC_1(VAR_19->conf_ctx, VAR_14);

    if (VAR_7 == -1) {
        VAR_7 = FUNC_5();

        if (VAR_7 == -1) {
            FUNC_3(VAR_2, VAR_19->log, VAR_11,
                          "port_create() failed");
            return VAR_1;
        }

        VAR_18.active = 1;
        VAR_18.log = VAR_19->log;
    }

    if (VAR_10 < VAR_24->events) {
        if (VAR_8) {
            FUNC_2(VAR_8);
        }

        VAR_8 = FUNC_0(sizeof(port_event_t) * VAR_24->events,
                               VAR_19->log);
        if (VAR_8 == ((void*)0)) {
            return VAR_1;
        }
    }

    VAR_13 = VAR_4;

    if (VAR_20) {
        FUNC_4(&VAR_21, sizeof(port_notify_t));
        VAR_21.portnfy_port = VAR_7;

        FUNC_4(&VAR_23, sizeof(struct sigevent));
        VAR_23.sigev_notify = VAR_6;
        VAR_23.sigev_value.sival_ptr = &VAR_21;

        if (FUNC_6(VAR_0, &VAR_23, &VAR_9) == -1) {
            FUNC_3(VAR_2, VAR_19->log, VAR_11,
                          "timer_create() failed");
            return VAR_1;
        }

        VAR_22.it_interval.tv_sec = VAR_20 / 1000;
        VAR_22.it_interval.tv_nsec = (VAR_20 % 1000) * 1000000;
        VAR_22.it_value.tv_sec = VAR_20 / 1000;
        VAR_22.it_value.tv_nsec = (VAR_20 % 1000) * 1000000;

        if (FUNC_7(VAR_9, 0, &VAR_22, ((void*)0)) == -1) {
            FUNC_3(VAR_2, VAR_19->log, VAR_11,
                          "timer_settime() failed");
            return VAR_1;
        }

        VAR_13 |= VAR_5;
    }

    VAR_10 = VAR_24->events;

    VAR_16 = VAR_17;

    VAR_12 = VAR_15.actions;

    return VAR_3;
}
