
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_11__ ;


typedef int ngx_uint_t ;
typedef int ngx_pool_t ;
typedef int ngx_int_t ;
struct TYPE_17__ {TYPE_11__* request; scalar_t__ frames; int * pool; TYPE_4__* node; int in_closed; int out_closed; int rst_sent; int queued; TYPE_5__* connection; } ;
typedef TYPE_3__ ngx_http_v2_stream_t ;
struct TYPE_18__ {int id; int reuse; int * stream; } ;
typedef TYPE_4__ ngx_http_v2_node_t ;
struct TYPE_15__ {scalar_t__ keep_pool; int * pool; TYPE_3__* stream; } ;
struct TYPE_19__ {TYPE_2__* connection; scalar_t__ blocked; scalar_t__ pushing; scalar_t__ processing; TYPE_7__* free_fake_connections; TYPE_1__ state; int frames; int closed_nodes; int closed; } ;
typedef TYPE_5__ ngx_http_v2_connection_t ;
struct TYPE_20__ {int handler; scalar_t__ posted; scalar_t__ timer_set; } ;
typedef TYPE_6__ ngx_event_t ;
struct TYPE_21__ {struct TYPE_21__* data; TYPE_6__* write; TYPE_6__* read; scalar_t__ timedout; } ;
typedef TYPE_7__ ngx_connection_t ;
struct TYPE_16__ {int error; TYPE_6__* read; int log; } ;
struct TYPE_14__ {TYPE_7__* connection; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (TYPE_6__*) ;
 int FUNC_1 (TYPE_6__*) ;
 int FUNC_2 (int *) ;
 int VAR_5 ;
 int FUNC_3 (TYPE_11__*,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_4 (TYPE_5__*,int,int ) ;
 int FUNC_5 (int ,int ,int ,char*,int,int ,scalar_t__,scalar_t__) ;
 int FUNC_6 (TYPE_6__*,int *) ;
 int VAR_8 ;
 int FUNC_7 (int *,int *) ;

void
FUNC_8(ngx_http_v2_stream_t *VAR_9, ngx_int_t VAR_10)
{
    ngx_pool_t *VAR_11;
    ngx_uint_t VAR_12;
    ngx_event_t *VAR_13;
    ngx_connection_t *VAR_14;
    ngx_http_v2_node_t *VAR_15;
    ngx_http_v2_connection_t *VAR_16;

    VAR_16 = VAR_9->connection;
    VAR_15 = VAR_9->node;

    FUNC_5(VAR_3, VAR_16->connection->log, 0,
                   "http2 close stream %ui, queued %ui, "
                   "processing %ui, pushing %ui",
                   VAR_15->id, VAR_9->queued, VAR_16->processing, VAR_16->pushing);

    VAR_14 = VAR_9->request->connection;

    if (VAR_9->queued) {
        VAR_14->write->handler = VAR_6;
        VAR_14->read->handler = VAR_5;
        return;
    }

    if (!VAR_9->rst_sent && !VAR_16->connection->error) {

        if (!VAR_9->out_closed) {
            if (FUNC_4(VAR_16, VAR_15->id,
                                      VAR_14->timedout ? VAR_2
                                                   : VAR_0)
                != VAR_4)
            {
                VAR_16->connection->error = 1;
            }

        } else if (!VAR_9->in_closed) {
            if (FUNC_4(VAR_16, VAR_15->id, VAR_1)
                != VAR_4)
            {
                VAR_16->connection->error = 1;
            }
        }
    }

    if (VAR_16->state.stream == VAR_9) {
        VAR_16->state.stream = ((void*)0);
    }

    VAR_12 = VAR_9->node->id % 2 == 0;

    VAR_15->stream = ((void*)0);

    FUNC_7(&VAR_16->closed, &VAR_15->reuse);
    VAR_16->closed_nodes++;
    VAR_11 = VAR_9->pool;

    VAR_16->frames -= VAR_9->frames;

    FUNC_3(VAR_9->request, VAR_10);

    if (VAR_11 != VAR_16->state.pool) {
        FUNC_2(VAR_11);

    } else {

        VAR_16->state.keep_pool = 0;
    }

    VAR_13 = VAR_14->read;

    if (VAR_13->timer_set) {
        FUNC_0(VAR_13);
    }

    if (VAR_13->posted) {
        FUNC_1(VAR_13);
    }

    VAR_13 = VAR_14->write;

    if (VAR_13->timer_set) {
        FUNC_0(VAR_13);
    }

    if (VAR_13->posted) {
        FUNC_1(VAR_13);
    }

    VAR_14->data = VAR_16->free_fake_connections;
    VAR_16->free_fake_connections = VAR_14;

    if (VAR_12) {
        VAR_16->pushing--;

    } else {
        VAR_16->processing--;
    }

    if (VAR_16->processing || VAR_16->pushing || VAR_16->blocked) {
        return;
    }

    VAR_13 = VAR_16->connection->read;

    VAR_13->handler = VAR_7;
    FUNC_6(VAR_13, &VAR_8);
}
