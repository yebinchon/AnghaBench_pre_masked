
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef scalar_t__ ssize_t ;
typedef size_t ngx_uint_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_17__ {scalar_t__ send_window; TYPE_4__* request; scalar_t__ exhausted; } ;
typedef TYPE_5__ ngx_http_v2_stream_t ;
typedef int ngx_http_v2_srv_conf_t ;
struct TYPE_18__ {int id; TYPE_5__* stream; struct TYPE_18__* index; } ;
typedef TYPE_6__ ngx_http_v2_node_t ;
struct TYPE_19__ {TYPE_2__* connection; TYPE_6__** streams_index; TYPE_1__* http_connection; } ;
typedef TYPE_7__ ngx_http_v2_connection_t ;
struct TYPE_20__ {int ready; int (* handler ) (TYPE_8__*) ;int delayed; scalar_t__ active; } ;
typedef TYPE_8__ ngx_event_t ;
struct TYPE_16__ {TYPE_3__* connection; } ;
struct TYPE_15__ {TYPE_8__* write; } ;
struct TYPE_14__ {int log; } ;
struct TYPE_13__ {int conf_ctx; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int * FUNC_0 (int ,int ) ;
 size_t FUNC_1 (int *) ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (TYPE_7__*,TYPE_5__*,int ) ;
 int FUNC_3 (int ,int ,int ,char*,int ,scalar_t__) ;
 int FUNC_4 (TYPE_8__*) ;

__attribute__((used)) static ngx_int_t
FUNC_5(ngx_http_v2_connection_t *VAR_6, ssize_t VAR_7)
{
    ngx_uint_t VAR_8, VAR_9;
    ngx_event_t *VAR_10;
    ngx_http_v2_node_t *VAR_11;
    ngx_http_v2_stream_t *VAR_12;
    ngx_http_v2_srv_conf_t *VAR_13;

    VAR_13 = FUNC_0(VAR_6->http_connection->conf_ctx,
                                         VAR_5);

    VAR_9 = FUNC_1(VAR_13);

    for (VAR_8 = 0; VAR_8 < VAR_9; VAR_8++) {

        for (VAR_11 = VAR_6->streams_index[VAR_8]; VAR_11; VAR_11 = VAR_11->index) {
            VAR_12 = VAR_11->stream;

            if (VAR_12 == ((void*)0)) {
                continue;
            }

            if (VAR_7 > 0
                && VAR_12->send_window
                      > (ssize_t) (VAR_2 - VAR_7))
            {
                if (FUNC_2(VAR_6, VAR_12,
                                                 VAR_1)
                    == VAR_0)
                {
                    return VAR_0;
                }

                continue;
            }

            VAR_12->send_window += VAR_7;

            FUNC_3(VAR_3, VAR_6->connection->log, 0,
                           "http2:%ui adjusted window: %z",
                           VAR_11->id, VAR_12->send_window);

            if (VAR_12->send_window > 0 && VAR_12->exhausted) {
                VAR_12->exhausted = 0;

                VAR_10 = VAR_12->request->connection->write;

                VAR_10->active = 0;
                VAR_10->ready = 1;

                if (!VAR_10->delayed) {
                    VAR_10->handler(VAR_10);
                }
            }
        }
    }

    return VAR_4;
}
