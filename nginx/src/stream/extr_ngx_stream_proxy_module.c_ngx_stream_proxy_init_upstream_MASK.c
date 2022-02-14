
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_44__ TYPE_9__ ;
typedef struct TYPE_43__ TYPE_8__ ;
typedef struct TYPE_42__ TYPE_7__ ;
typedef struct TYPE_41__ TYPE_6__ ;
typedef struct TYPE_40__ TYPE_5__ ;
typedef struct TYPE_39__ TYPE_4__ ;
typedef struct TYPE_38__ TYPE_3__ ;
typedef struct TYPE_37__ TYPE_2__ ;
typedef struct TYPE_36__ TYPE_24__ ;
typedef struct TYPE_35__ TYPE_23__ ;
typedef struct TYPE_34__ TYPE_1__ ;
typedef struct TYPE_33__ TYPE_12__ ;
typedef struct TYPE_32__ TYPE_11__ ;
typedef struct TYPE_31__ TYPE_10__ ;


typedef int u_char ;
struct TYPE_38__ {int * last; int * pos; int * end; int * start; } ;
struct TYPE_33__ {int data; int (* notify ) (TYPE_12__*,int ,int ) ;int name; TYPE_10__* connection; } ;
struct TYPE_40__ {int connected; void* download_rate; void* upload_rate; scalar_t__ proxy_protocol; TYPE_11__* upstream_out; int free; TYPE_3__ upstream_buf; TYPE_12__ peer; scalar_t__ start_time; TYPE_2__* state; } ;
typedef TYPE_5__ ngx_stream_upstream_t ;
struct TYPE_41__ {TYPE_10__* connection; TYPE_5__* upstream; } ;
typedef TYPE_6__ ngx_stream_session_t ;
struct TYPE_42__ {int buffer_size; int download_rate; int upload_rate; scalar_t__ ssl; } ;
typedef TYPE_7__ ngx_stream_proxy_srv_conf_t ;
struct TYPE_43__ {scalar_t__ tcp_nodelay; } ;
typedef TYPE_8__ ngx_stream_core_srv_conf_t ;
struct TYPE_44__ {int len; int * data; } ;
typedef TYPE_9__ ngx_str_t ;
typedef int * ngx_log_handler_pt ;
struct TYPE_31__ {scalar_t__ type; TYPE_23__* read; TYPE_1__* write; int pool; TYPE_24__* log; TYPE_4__* buffer; int * ssl; } ;
typedef TYPE_10__ ngx_connection_t ;
struct TYPE_32__ {struct TYPE_32__* next; TYPE_4__* buf; } ;
typedef TYPE_11__ ngx_chain_t ;
typedef void* ngx_buf_tag_t ;
struct TYPE_39__ {scalar_t__ pos; scalar_t__ last; int flush; int temporary; void* tag; scalar_t__ last_buf; } ;
struct TYPE_37__ {scalar_t__ connect_time; } ;
struct TYPE_36__ {scalar_t__ log_level; int * handler; } ;
struct TYPE_35__ {scalar_t__ ready; void* handler; } ;
struct TYPE_34__ {void* handler; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 TYPE_11__* FUNC_0 (int ,int *) ;
 scalar_t__ FUNC_1 (TYPE_10__*,TYPE_9__*,int) ;
 scalar_t__ VAR_9 ;
 int FUNC_2 (int ,TYPE_24__*,int ,char*) ;
 int FUNC_3 (int ,TYPE_24__*,int ,char*,scalar_t__) ;
 int FUNC_4 (scalar_t__,TYPE_24__*,int ,char*,char*,TYPE_9__*,int ) ;
 int * FUNC_5 (int ,int) ;
 int FUNC_6 (TYPE_23__*,int *) ;
 int VAR_10 ;
 int * FUNC_7 (TYPE_10__*,int *,int *) ;
 void* FUNC_8 (TYPE_6__*,int ,int ) ;
 int VAR_11 ;
 void* FUNC_9 (TYPE_6__*,int ) ;
 int FUNC_10 (TYPE_6__*,int ) ;
 int VAR_12 ;
 int FUNC_11 (TYPE_6__*) ;
 int FUNC_12 (TYPE_6__*,int ,int) ;
 scalar_t__ FUNC_13 (TYPE_6__*) ;
 int FUNC_14 (TYPE_6__*) ;
 void* VAR_13 ;
 scalar_t__ FUNC_15 (TYPE_10__*) ;
 int FUNC_16 (TYPE_12__*,int ,int ) ;

__attribute__((used)) static void
FUNC_17(ngx_stream_session_t *VAR_14)
{
    u_char *VAR_15;
    ngx_chain_t *VAR_16;
    ngx_connection_t *VAR_17, *VAR_18;
    ngx_log_handler_pt VAR_19;
    ngx_stream_upstream_t *VAR_20;
    ngx_stream_core_srv_conf_t *VAR_21;
    ngx_stream_proxy_srv_conf_t *VAR_22;

    VAR_20 = VAR_14->upstream;
    VAR_18 = VAR_20->peer.connection;

    VAR_21 = FUNC_9(VAR_14, VAR_11);

    if (VAR_18->type == VAR_8
        && VAR_21->tcp_nodelay
        && FUNC_15(VAR_18) != VAR_2)
    {
        FUNC_11(VAR_14);
        return;
    }

    VAR_22 = FUNC_9(VAR_14, VAR_12);
    VAR_17 = VAR_14->connection;

    if (VAR_17->log->log_level >= VAR_1) {
        ngx_str_t VAR_23;
        u_char VAR_24[VAR_4];

        VAR_23.len = VAR_4;
        VAR_23.data = VAR_24;

        if (FUNC_1(VAR_18, &VAR_23, 1) == VAR_2) {
            VAR_19 = VAR_17->log->handler;
            VAR_17->log->handler = ((void*)0);

            FUNC_4(VAR_1, VAR_17->log, 0,
                          "%sproxy %V connected to %V",
                          VAR_18->type == VAR_7 ? "udp " : "",
                          &VAR_23, VAR_20->peer.name);

            VAR_17->log->handler = VAR_19;
        }
    }

    VAR_20->state->connect_time = VAR_9 - VAR_20->start_time;

    if (VAR_20->peer.notify) {
        VAR_20->peer.notify(&VAR_20->peer, VAR_20->peer.data,
                       VAR_6);
    }

    if (VAR_20->upstream_buf.start == ((void*)0)) {
        VAR_15 = FUNC_5(VAR_17->pool, VAR_22->buffer_size);
        if (VAR_15 == ((void*)0)) {
            FUNC_10(VAR_14, VAR_5);
            return;
        }

        VAR_20->upstream_buf.start = VAR_15;
        VAR_20->upstream_buf.end = VAR_15 + VAR_22->buffer_size;
        VAR_20->upstream_buf.pos = VAR_15;
        VAR_20->upstream_buf.last = VAR_15;
    }

    if (VAR_17->buffer && VAR_17->buffer->pos < VAR_17->buffer->last) {
        FUNC_3(VAR_0, VAR_17->log, 0,
                       "stream proxy add preread buffer: %uz",
                       VAR_17->buffer->last - VAR_17->buffer->pos);

        VAR_16 = FUNC_0(VAR_17->pool, &VAR_20->free);
        if (VAR_16 == ((void*)0)) {
            FUNC_10(VAR_14, VAR_5);
            return;
        }

        *VAR_16->buf = *VAR_17->buffer;

        VAR_16->buf->tag = (ngx_buf_tag_t) &VAR_12;
        VAR_16->buf->flush = 1;

        VAR_16->next = VAR_20->upstream_out;
        VAR_20->upstream_out = VAR_16;
    }

    if (VAR_20->proxy_protocol) {
        FUNC_2(VAR_0, VAR_17->log, 0,
                       "stream proxy add PROXY protocol header");

        VAR_16 = FUNC_0(VAR_17->pool, &VAR_20->free);
        if (VAR_16 == ((void*)0)) {
            FUNC_10(VAR_14, VAR_5);
            return;
        }

        VAR_15 = FUNC_5(VAR_17->pool, VAR_3);
        if (VAR_15 == ((void*)0)) {
            FUNC_10(VAR_14, VAR_5);
            return;
        }

        VAR_16->buf->pos = VAR_15;

        VAR_15 = FUNC_7(VAR_17, VAR_15, VAR_15 + VAR_3);
        if (VAR_15 == ((void*)0)) {
            FUNC_10(VAR_14, VAR_5);
            return;
        }

        VAR_16->buf->last = VAR_15;
        VAR_16->buf->temporary = 1;
        VAR_16->buf->flush = 0;
        VAR_16->buf->last_buf = 0;
        VAR_16->buf->tag = (ngx_buf_tag_t) &VAR_12;

        VAR_16->next = VAR_20->upstream_out;
        VAR_20->upstream_out = VAR_16;

        VAR_20->proxy_protocol = 0;
    }

    VAR_20->upload_rate = FUNC_8(VAR_14, VAR_22->upload_rate, 0);
    VAR_20->download_rate = FUNC_8(VAR_14, VAR_22->download_rate, 0);

    VAR_20->connected = 1;

    VAR_18->read->handler = VAR_13;
    VAR_18->write->handler = VAR_13;

    if (VAR_18->read->ready) {
        FUNC_6(VAR_18->read, &VAR_10);
    }

    FUNC_12(VAR_14, 0, 1);
}
