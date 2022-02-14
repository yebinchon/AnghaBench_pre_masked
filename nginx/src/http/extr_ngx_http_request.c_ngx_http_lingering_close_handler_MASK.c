
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int u_char ;
typedef scalar_t__ ssize_t ;
typedef int ngx_msec_t ;
typedef scalar_t__ ngx_msec_int_t ;
struct TYPE_12__ {scalar_t__ lingering_time; } ;
typedef TYPE_1__ ngx_http_request_t ;
struct TYPE_13__ {int lingering_timeout; } ;
typedef TYPE_2__ ngx_http_core_loc_conf_t ;
struct TYPE_14__ {scalar_t__ ready; scalar_t__ timedout; TYPE_4__* data; } ;
typedef TYPE_3__ ngx_event_t ;
struct TYPE_15__ {scalar_t__ (* recv ) (TYPE_4__*,int *,int) ;int log; TYPE_1__* data; } ;
typedef TYPE_4__ ngx_connection_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (TYPE_3__*,int) ;
 scalar_t__ FUNC_1 (TYPE_3__*,int ) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int VAR_5 ;
 TYPE_2__* FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (int ,int ,int ,char*) ;
 int FUNC_5 (int ,int ,int ,char*,scalar_t__) ;
 scalar_t__ FUNC_6 () ;
 scalar_t__ FUNC_7 (TYPE_4__*,int *,int) ;

__attribute__((used)) static void
FUNC_8(ngx_event_t *VAR_6)
{
    ssize_t VAR_7;
    ngx_msec_t VAR_8;
    ngx_connection_t *VAR_9;
    ngx_http_request_t *VAR_10;
    ngx_http_core_loc_conf_t *VAR_11;
    u_char VAR_12[VAR_2];

    VAR_9 = VAR_6->data;
    VAR_10 = VAR_9->data;

    FUNC_4(VAR_3, VAR_9->log, 0,
                   "http lingering close handler");

    if (VAR_6->timedout) {
        FUNC_2(VAR_10, 0);
        return;
    }

    VAR_8 = (ngx_msec_t) VAR_10->lingering_time - (ngx_msec_t) FUNC_6();
    if ((ngx_msec_int_t) VAR_8 <= 0) {
        FUNC_2(VAR_10, 0);
        return;
    }

    do {
        VAR_7 = VAR_9->recv(VAR_9, VAR_12, VAR_2);

        FUNC_5(VAR_3, VAR_9->log, 0, "lingering read: %z", VAR_7);

        if (VAR_7 == VAR_0) {
            break;
        }

        if (VAR_7 == VAR_1 || VAR_7 == 0) {
            FUNC_2(VAR_10, 0);
            return;
        }

    } while (VAR_6->ready);

    if (FUNC_1(VAR_6, 0) != VAR_4) {
        FUNC_2(VAR_10, 0);
        return;
    }

    VAR_11 = FUNC_3(VAR_10, VAR_5);

    VAR_8 *= 1000;

    if (VAR_8 > VAR_11->lingering_timeout) {
        VAR_8 = VAR_11->lingering_timeout;
    }

    FUNC_0(VAR_6, VAR_8);
}
