
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_8__ ;
typedef struct TYPE_27__ TYPE_7__ ;
typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;
typedef struct TYPE_20__ TYPE_14__ ;


typedef scalar_t__ ngx_int_t ;
struct TYPE_24__ {TYPE_3__* connection; TYPE_2__* upstream; } ;
typedef TYPE_4__ ngx_http_request_t ;
struct TYPE_20__ {scalar_t__ size; scalar_t__ length; scalar_t__ state; } ;
struct TYPE_25__ {TYPE_14__ chunked; } ;
typedef TYPE_5__ ngx_http_proxy_ctx_t ;
struct TYPE_26__ {int upstream_done; scalar_t__ length; int log; TYPE_7__** last_in; TYPE_7__* in; int tag; int free; int pool; TYPE_4__* input_ctx; } ;
typedef TYPE_6__ ngx_event_pipe_t ;
struct TYPE_27__ {struct TYPE_27__* next; TYPE_8__* buf; } ;
typedef TYPE_7__ ngx_chain_t ;
struct TYPE_28__ {scalar_t__ pos; scalar_t__ last; int temporary; int recycled; scalar_t__ num; int last_shadow; struct TYPE_28__* shadow; int tag; int end; int start; } ;
typedef TYPE_8__ ngx_buf_t ;
struct TYPE_23__ {int log; } ;
struct TYPE_21__ {int connection_close; } ;
struct TYPE_22__ {int keepalive; TYPE_1__ headers_in; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 TYPE_7__* FUNC_0 (int ,int *) ;
 scalar_t__ FUNC_1 (TYPE_6__*,TYPE_8__*) ;
 TYPE_5__* FUNC_2 (TYPE_4__*,int ) ;
 scalar_t__ FUNC_3 (TYPE_4__*,TYPE_8__*,TYPE_14__*) ;
 int VAR_7 ;
 int FUNC_4 (int ,int ,int ,char*,scalar_t__,scalar_t__) ;
 int FUNC_5 (int ,int ,int ,char*) ;
 int FUNC_6 (TYPE_8__*,int) ;

__attribute__((used)) static ngx_int_t
FUNC_7(ngx_event_pipe_t *VAR_8, ngx_buf_t *VAR_9)
{
    ngx_int_t VAR_10;
    ngx_buf_t *VAR_11, **VAR_12;
    ngx_chain_t *VAR_13;
    ngx_http_request_t *VAR_14;
    ngx_http_proxy_ctx_t *VAR_15;

    if (VAR_9->pos == VAR_9->last) {
        return VAR_6;
    }

    VAR_14 = VAR_8->input_ctx;
    VAR_15 = FUNC_2(VAR_14, VAR_7);

    if (VAR_15 == ((void*)0)) {
        return VAR_2;
    }

    VAR_11 = ((void*)0);
    VAR_12 = &VAR_9->shadow;

    for ( ;; ) {

        VAR_10 = FUNC_3(VAR_14, VAR_9, &VAR_15->chunked);

        if (VAR_10 == VAR_6) {



            VAR_13 = FUNC_0(VAR_8->pool, &VAR_8->free);
            if (VAR_13 == ((void*)0)) {
                return VAR_2;
            }

            VAR_11 = VAR_13->buf;

            FUNC_6(VAR_11, sizeof(ngx_buf_t));

            VAR_11->pos = VAR_9->pos;
            VAR_11->start = VAR_9->start;
            VAR_11->end = VAR_9->end;
            VAR_11->tag = VAR_8->tag;
            VAR_11->temporary = 1;
            VAR_11->recycled = 1;

            *VAR_12 = VAR_11;
            VAR_12 = &VAR_11->shadow;

            if (VAR_8->in) {
                *VAR_8->last_in = VAR_13;
            } else {
                VAR_8->in = VAR_13;
            }
            VAR_8->last_in = &VAR_13->next;

                       VAR_11->num = VAR_9->num;

            FUNC_4(VAR_3, VAR_8->log, 0,
                           "input buf #%d %p", VAR_11->num, VAR_11->pos);

            if (VAR_9->last - VAR_9->pos >= VAR_15->chunked.size) {

                VAR_9->pos += (size_t) VAR_15->chunked.size;
                VAR_11->last = VAR_9->pos;
                VAR_15->chunked.size = 0;

                continue;
            }

            VAR_15->chunked.size -= VAR_9->last - VAR_9->pos;
            VAR_9->pos = VAR_9->last;
            VAR_11->last = VAR_9->last;

            continue;
        }

        if (VAR_10 == VAR_1) {



            VAR_8->upstream_done = 1;
            VAR_14->upstream->keepalive = !VAR_14->upstream->headers_in.connection_close;

            break;
        }

        if (VAR_10 == VAR_0) {



            VAR_8->length = VAR_15->chunked.length;

            break;
        }



        FUNC_5(VAR_5, VAR_14->connection->log, 0,
                      "upstream sent invalid chunked response");

        return VAR_2;
    }

    FUNC_4(VAR_4, VAR_14->connection->log, 0,
                   "http proxy chunked state %ui, length %O",
                   VAR_15->chunked.state, VAR_8->length);

    if (VAR_11) {
        VAR_11->shadow = VAR_9;
        VAR_11->last_shadow = 1;

        FUNC_4(VAR_3, VAR_8->log, 0,
                       "input buf %p %z", VAR_11->pos, VAR_11->last - VAR_11->pos);

        return VAR_6;
    }



    if (FUNC_1(VAR_8, VAR_9) != VAR_6) {
        return VAR_2;
    }

    return VAR_6;
}
