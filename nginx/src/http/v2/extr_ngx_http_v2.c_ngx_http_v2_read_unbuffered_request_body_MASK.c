
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_9__ ;
typedef struct TYPE_25__ TYPE_8__ ;
typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_16__ ;


typedef scalar_t__ ngx_int_t ;
struct TYPE_21__ {size_t recv_window; int skip_data; TYPE_3__* node; TYPE_5__* connection; } ;
typedef TYPE_4__ ngx_http_v2_stream_t ;
struct TYPE_19__ {scalar_t__ length; TYPE_4__* stream; } ;
struct TYPE_22__ {TYPE_2__ state; } ;
typedef TYPE_5__ ngx_http_v2_connection_t ;
struct TYPE_23__ {TYPE_8__* connection; TYPE_1__* request_body; TYPE_4__* stream; } ;
typedef TYPE_6__ ngx_http_request_t ;
struct TYPE_24__ {int client_body_timeout; } ;
typedef TYPE_7__ ngx_http_core_loc_conf_t ;
struct TYPE_25__ {int timedout; TYPE_16__* read; int log; scalar_t__ error; } ;
typedef TYPE_8__ ngx_connection_t ;
struct TYPE_26__ {size_t pos; size_t start; size_t last; size_t end; } ;
typedef TYPE_9__ ngx_buf_t ;
struct TYPE_20__ {int id; } ;
struct TYPE_18__ {TYPE_9__* buf; int * busy; int rest; } ;
struct TYPE_17__ {scalar_t__ timedout; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (TYPE_16__*,int ) ;
 int VAR_7 ;
 TYPE_7__* FUNC_1 (TYPE_6__*,int ) ;
 scalar_t__ FUNC_2 (TYPE_6__*) ;
 scalar_t__ FUNC_3 (TYPE_5__*) ;
 scalar_t__ FUNC_4 (TYPE_5__*,int ,size_t) ;
 int FUNC_5 (int ,int ,int ,char*) ;

ngx_int_t
FUNC_6(ngx_http_request_t *VAR_8)
{
    size_t VAR_9;
    ngx_buf_t *VAR_10;
    ngx_int_t VAR_11;
    ngx_connection_t *VAR_12;
    ngx_http_v2_stream_t *VAR_13;
    ngx_http_v2_connection_t *VAR_14;
    ngx_http_core_loc_conf_t *VAR_15;

    VAR_13 = VAR_8->stream;
    VAR_12 = VAR_8->connection;

    if (VAR_12->read->timedout) {
        if (VAR_13->recv_window) {
            VAR_13->skip_data = 1;
            VAR_12->timedout = 1;

            return VAR_4;
        }

        VAR_12->read->timedout = 0;
    }

    if (VAR_12->error) {
        VAR_13->skip_data = 1;
        return VAR_2;
    }

    VAR_11 = FUNC_2(VAR_8);

    if (VAR_11 != VAR_6) {
        VAR_13->skip_data = 1;
        return VAR_11;
    }

    if (!VAR_8->request_body->rest) {
        return VAR_6;
    }

    if (VAR_8->request_body->busy != ((void*)0)) {
        return VAR_0;
    }

    VAR_10 = VAR_8->request_body->buf;

    VAR_10->pos = VAR_10->start;
    VAR_10->last = VAR_10->start;

    VAR_9 = VAR_10->end - VAR_10->start;
    VAR_14 = VAR_13->connection;

    if (VAR_14->state.stream == VAR_13) {
        VAR_9 -= VAR_14->state.length;
    }

    if (VAR_9 <= VAR_13->recv_window) {
        if (VAR_9 < VAR_13->recv_window) {
            FUNC_5(VAR_5, VAR_8->connection->log, 0,
                          "http2 negative window update");
            VAR_13->skip_data = 1;
            return VAR_3;
        }

        return VAR_0;
    }

    if (FUNC_4(VAR_14, VAR_13->node->id,
                                       VAR_9 - VAR_13->recv_window)
        == VAR_1)
    {
        VAR_13->skip_data = 1;
        return VAR_3;
    }

    if (FUNC_3(VAR_14) == VAR_1) {
        VAR_13->skip_data = 1;
        return VAR_3;
    }

    if (VAR_13->recv_window == 0) {
        VAR_15 = FUNC_1(VAR_8, VAR_7);
        FUNC_0(VAR_12->read, VAR_15->client_body_timeout);
    }

    VAR_13->recv_window = VAR_9;

    return VAR_0;
}
