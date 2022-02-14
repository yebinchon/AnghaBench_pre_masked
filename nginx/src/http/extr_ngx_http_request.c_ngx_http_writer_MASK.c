
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef scalar_t__ ngx_int_t ;
struct TYPE_13__ {int write_event_handler; int args; int uri; struct TYPE_13__* main; scalar_t__ postponed; scalar_t__ buffered; scalar_t__ aio; TYPE_4__* connection; } ;
typedef TYPE_1__ ngx_http_request_t ;
struct TYPE_14__ {int send_lowat; int send_timeout; } ;
typedef TYPE_2__ ngx_http_core_loc_conf_t ;
struct TYPE_15__ {int log; scalar_t__ delayed; scalar_t__ timedout; } ;
typedef TYPE_3__ ngx_event_t ;
struct TYPE_16__ {int timedout; scalar_t__ buffered; int log; TYPE_3__* write; } ;
typedef TYPE_4__ ngx_connection_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (TYPE_3__*,int ) ;
 scalar_t__ FUNC_1 (TYPE_3__*,int ) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int VAR_6 ;
 int FUNC_3 (TYPE_1__*,scalar_t__) ;
 TYPE_2__* FUNC_4 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_5 (TYPE_1__*,int *) ;
 int VAR_7 ;
 int FUNC_6 (int ,int ,int ,char*) ;
 int FUNC_7 (int ,int ,int ,char*,int *,int *) ;
 int FUNC_8 (int ,int ,int ,char*,scalar_t__,int *,int *) ;
 int FUNC_9 (int ,int ,int ,char*) ;

__attribute__((used)) static void
FUNC_10(ngx_http_request_t *VAR_8)
{
    ngx_int_t VAR_9;
    ngx_event_t *VAR_10;
    ngx_connection_t *VAR_11;
    ngx_http_core_loc_conf_t *VAR_12;

    VAR_11 = VAR_8->connection;
    VAR_10 = VAR_11->write;

    FUNC_7(VAR_3, VAR_10->log, 0,
                   "http writer handler: \"%V?%V\"", &VAR_8->uri, &VAR_8->args);

    VAR_12 = FUNC_4(VAR_8->main, VAR_6);

    if (VAR_10->timedout) {
        FUNC_9(VAR_4, VAR_11->log, VAR_1,
                      "client timed out");
        VAR_11->timedout = 1;

        FUNC_3(VAR_8, VAR_2);
        return;
    }

    if (VAR_10->delayed || VAR_8->aio) {
        FUNC_6(VAR_3, VAR_10->log, 0,
                       "http writer delayed");

        if (!VAR_10->delayed) {
            FUNC_0(VAR_10, VAR_12->send_timeout);
        }

        if (FUNC_1(VAR_10, VAR_12->send_lowat) != VAR_5) {
            FUNC_2(VAR_8, 0);
        }

        return;
    }

    VAR_9 = FUNC_5(VAR_8, ((void*)0));

    FUNC_8(VAR_3, VAR_11->log, 0,
                   "http writer output filter: %i, \"%V?%V\"",
                   VAR_9, &VAR_8->uri, &VAR_8->args);

    if (VAR_9 == VAR_0) {
        FUNC_3(VAR_8, VAR_9);
        return;
    }

    if (VAR_8->buffered || VAR_8->postponed || (VAR_8 == VAR_8->main && VAR_11->buffered)) {

        if (!VAR_10->delayed) {
            FUNC_0(VAR_10, VAR_12->send_timeout);
        }

        if (FUNC_1(VAR_10, VAR_12->send_lowat) != VAR_5) {
            FUNC_2(VAR_8, 0);
        }

        return;
    }

    FUNC_7(VAR_3, VAR_10->log, 0,
                   "http writer done: \"%V?%V\"", &VAR_8->uri, &VAR_8->args);

    VAR_8->write_event_handler = VAR_7;

    FUNC_3(VAR_8, VAR_9);
}
