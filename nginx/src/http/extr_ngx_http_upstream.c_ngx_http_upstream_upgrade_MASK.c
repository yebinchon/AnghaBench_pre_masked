
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_9__ ;
typedef struct TYPE_24__ TYPE_8__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


struct TYPE_19__ {scalar_t__ pos; scalar_t__ last; } ;
struct TYPE_18__ {TYPE_6__* connection; } ;
struct TYPE_20__ {TYPE_2__ buffer; TYPE_1__ peer; int write_event_handler; int read_event_handler; } ;
typedef TYPE_3__ ngx_http_upstream_t ;
struct TYPE_21__ {int write_event_handler; int read_event_handler; scalar_t__ keepalive; struct TYPE_21__* main; TYPE_6__* connection; } ;
typedef TYPE_4__ ngx_http_request_t ;
struct TYPE_22__ {scalar_t__ tcp_nodelay; } ;
typedef TYPE_5__ ngx_http_core_loc_conf_t ;
struct TYPE_23__ {TYPE_8__* read; TYPE_9__* log; } ;
typedef TYPE_6__ ngx_connection_t ;
struct TYPE_25__ {char* action; } ;
struct TYPE_24__ {scalar_t__ ready; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 TYPE_5__* FUNC_0 (TYPE_4__*,int ) ;
 scalar_t__ FUNC_1 (TYPE_4__*,int ) ;
 int FUNC_2 (TYPE_4__*,TYPE_3__*,scalar_t__) ;
 int FUNC_3 (TYPE_4__*,int,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (int ,TYPE_9__*,int ,char*) ;
 int FUNC_5 (TYPE_8__*,int *) ;
 int VAR_9 ;
 scalar_t__ FUNC_6 (TYPE_6__*) ;

__attribute__((used)) static void
FUNC_7(ngx_http_request_t *VAR_10, ngx_http_upstream_t *VAR_11)
{
    ngx_connection_t *VAR_12;
    ngx_http_core_loc_conf_t *VAR_13;

    VAR_12 = VAR_10->connection;
    VAR_13 = FUNC_0(VAR_10, VAR_4);



    if (VAR_10 != VAR_10->main) {
        FUNC_4(VAR_2, VAR_12->log, 0,
                      "connection upgrade in subrequest");
        FUNC_2(VAR_10, VAR_11, VAR_0);
        return;
    }

    VAR_10->keepalive = 0;
    VAR_12->log->action = "proxying upgraded connection";

    VAR_11->read_event_handler = VAR_6;
    VAR_11->write_event_handler = VAR_8;
    VAR_10->read_event_handler = VAR_5;
    VAR_10->write_event_handler = VAR_7;

    if (VAR_13->tcp_nodelay) {

        if (FUNC_6(VAR_12) != VAR_3) {
            FUNC_2(VAR_10, VAR_11, VAR_0);
            return;
        }

        if (FUNC_6(VAR_11->peer.connection) != VAR_3) {
            FUNC_2(VAR_10, VAR_11, VAR_0);
            return;
        }
    }

    if (FUNC_1(VAR_10, VAR_1) == VAR_0) {
        FUNC_2(VAR_10, VAR_11, VAR_0);
        return;
    }

    if (VAR_11->peer.connection->read->ready
        || VAR_11->buffer.pos != VAR_11->buffer.last)
    {
        FUNC_5(VAR_12->read, &VAR_9);
        FUNC_3(VAR_10, 1, 1);
        return;
    }

    FUNC_3(VAR_10, 0, 1);
}
