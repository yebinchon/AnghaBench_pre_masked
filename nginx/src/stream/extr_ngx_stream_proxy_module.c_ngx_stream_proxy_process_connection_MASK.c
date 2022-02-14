
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_13__ ;


typedef int ngx_uint_t ;
struct TYPE_18__ {TYPE_7__* connection; } ;
struct TYPE_20__ {int responses; int requests; scalar_t__ connected; int received; TYPE_1__ peer; } ;
typedef TYPE_3__ ngx_stream_upstream_t ;
struct TYPE_21__ {int received; TYPE_7__* connection; TYPE_3__* upstream; } ;
typedef TYPE_4__ ngx_stream_session_t ;
struct TYPE_22__ {int responses; int timeout; } ;
typedef TYPE_5__ ngx_stream_proxy_srv_conf_t ;
typedef int * ngx_log_handler_pt ;
struct TYPE_23__ {int write; scalar_t__ delayed; int ready; scalar_t__ timedout; TYPE_7__* data; } ;
typedef TYPE_6__ ngx_event_t ;
struct TYPE_24__ {scalar_t__ type; TYPE_13__* log; TYPE_2__* read; int sent; int write; scalar_t__ close; TYPE_4__* data; } ;
typedef TYPE_7__ ngx_connection_t ;
struct TYPE_19__ {int error; int delayed; } ;
struct TYPE_17__ {int * handler; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_7__*,int ,char*) ;
 scalar_t__ FUNC_2 (TYPE_6__*,int ) ;
 int FUNC_3 (int ,TYPE_13__*,int ,char*) ;
 int FUNC_4 (int ,TYPE_13__*,int ,char*,...) ;
 TYPE_5__* FUNC_5 (TYPE_4__*,int ) ;
 int FUNC_6 (TYPE_4__*,int ) ;
 int VAR_9 ;
 int FUNC_7 (TYPE_4__*,int ,int ) ;

__attribute__((used)) static void
FUNC_8(ngx_event_t *VAR_10, ngx_uint_t VAR_11)
{
    ngx_connection_t *VAR_12, *VAR_13;
    ngx_log_handler_pt VAR_14;
    ngx_stream_session_t *VAR_15;
    ngx_stream_upstream_t *VAR_16;
    ngx_stream_proxy_srv_conf_t *VAR_17;

    VAR_12 = VAR_10->data;
    VAR_15 = VAR_12->data;
    VAR_16 = VAR_15->upstream;

    if (VAR_12->close) {
        FUNC_4(VAR_2, VAR_12->log, 0, "shutdown timeout");
        FUNC_6(VAR_15, VAR_7);
        return;
    }

    VAR_12 = VAR_15->connection;
    VAR_13 = VAR_16->peer.connection;

    VAR_17 = FUNC_5(VAR_15, VAR_9);

    if (VAR_10->timedout) {
        VAR_10->timedout = 0;

        if (VAR_10->delayed) {
            VAR_10->delayed = 0;

            if (!VAR_10->ready) {
                if (FUNC_2(VAR_10, 0) != VAR_4) {
                    FUNC_6(VAR_15,
                                              VAR_6);
                    return;
                }

                if (VAR_16->connected && !VAR_12->read->delayed && !VAR_13->read->delayed) {
                    FUNC_0(VAR_12->write, VAR_17->timeout);
                }

                return;
            }

        } else {
            if (VAR_15->connection->type == VAR_8) {

                if (VAR_17->responses == VAR_3
                    || (VAR_16->responses >= VAR_17->responses * VAR_16->requests))
                {






                    VAR_14 = VAR_12->log->handler;
                    VAR_12->log->handler = ((void*)0);

                    FUNC_4(VAR_2, VAR_12->log, 0,
                                  "udp timed out"
                                  ", packets from/to client:%ui/%ui"
                                  ", bytes from/to client:%O/%O"
                                  ", bytes from/to upstream:%O/%O",
                                  VAR_16->requests, VAR_16->responses,
                                  VAR_15->received, VAR_12->sent, VAR_16->received,
                                  VAR_13 ? VAR_13->sent : 0);

                    VAR_12->log->handler = VAR_14;

                    FUNC_6(VAR_15, VAR_7);
                    return;
                }

                FUNC_1(VAR_13, VAR_0, "upstream timed out");

                VAR_13->read->error = 1;

                FUNC_6(VAR_15, VAR_5);

                return;
            }

            FUNC_1(VAR_12, VAR_0, "connection timed out");

            FUNC_6(VAR_15, VAR_7);

            return;
        }

    } else if (VAR_10->delayed) {

        FUNC_3(VAR_1, VAR_12->log, 0,
                       "stream connection delayed");

        if (FUNC_2(VAR_10, 0) != VAR_4) {
            FUNC_6(VAR_15, VAR_6);
        }

        return;
    }

    if (VAR_11 && !VAR_16->connected) {
        return;
    }

    FUNC_7(VAR_15, VAR_11, VAR_10->write);
}
