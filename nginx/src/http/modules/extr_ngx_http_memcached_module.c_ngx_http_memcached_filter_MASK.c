
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int u_char ;
typedef scalar_t__ ssize_t ;
typedef int ngx_int_t ;
struct TYPE_10__ {int tag; } ;
struct TYPE_17__ {int pos; int * last; } ;
struct TYPE_14__ {scalar_t__ length; int keepalive; TYPE_1__ output; int free_bufs; TYPE_7__* out_bufs; TYPE_8__ buffer; } ;
typedef TYPE_5__ ngx_http_upstream_t ;
struct TYPE_15__ {scalar_t__ rest; TYPE_3__* request; } ;
typedef TYPE_6__ ngx_http_memcached_ctx_t ;
struct TYPE_16__ {TYPE_4__* buf; struct TYPE_16__* next; } ;
typedef TYPE_7__ ngx_chain_t ;
typedef TYPE_8__ ngx_buf_t ;
struct TYPE_13__ {int flush; int memory; int * last; int tag; int * pos; } ;
struct TYPE_12__ {TYPE_2__* connection; int pool; TYPE_5__* upstream; } ;
struct TYPE_11__ {int log; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_7__* FUNC_0 (int ,int *) ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int ,int ,int ,char*,scalar_t__,int *,scalar_t__,scalar_t__) ;
 int FUNC_2 (int ,int ,int ,char*) ;
 scalar_t__ FUNC_3 (int *,scalar_t__,int) ;

__attribute__((used)) static ngx_int_t
FUNC_4(void *VAR_6, ssize_t VAR_7)
{
    ngx_http_memcached_ctx_t *VAR_8 = VAR_6;

    u_char *VAR_9;
    ngx_buf_t *VAR_10;
    ngx_chain_t *VAR_11, **VAR_12;
    ngx_http_upstream_t *VAR_13;

    VAR_13 = VAR_8->request->upstream;
    VAR_10 = &VAR_13->buffer;

    if (VAR_13->length == (ssize_t) VAR_8->rest) {

        if (FUNC_3(VAR_10->last,
                   VAR_5 + VAR_1 - VAR_8->rest,
                   VAR_7)
            != 0)
        {
            FUNC_2(VAR_3, VAR_8->request->connection->log, 0,
                          "memcached sent invalid trailer");

            VAR_13->length = 0;
            VAR_8->rest = 0;

            return VAR_4;
        }

        VAR_13->length -= VAR_7;
        VAR_8->rest -= VAR_7;

        if (VAR_13->length == 0) {
            VAR_13->keepalive = 1;
        }

        return VAR_4;
    }

    for (VAR_11 = VAR_13->out_bufs, VAR_12 = &VAR_13->out_bufs; VAR_11; VAR_11 = VAR_11->next) {
        VAR_12 = &VAR_11->next;
    }

    VAR_11 = FUNC_0(VAR_8->request->pool, &VAR_13->free_bufs);
    if (VAR_11 == ((void*)0)) {
        return VAR_0;
    }

    VAR_11->buf->flush = 1;
    VAR_11->buf->memory = 1;

    *VAR_12 = VAR_11;

    VAR_9 = VAR_10->last;
    VAR_11->buf->pos = VAR_9;
    VAR_10->last += VAR_7;
    VAR_11->buf->last = VAR_10->last;
    VAR_11->buf->tag = VAR_13->output.tag;

    FUNC_1(VAR_2, VAR_8->request->connection->log, 0,
                   "memcached filter bytes:%z size:%z length:%O rest:%z",
                   VAR_7, VAR_10->last - VAR_10->pos, VAR_13->length, VAR_8->rest);

    if (VAR_7 <= (ssize_t) (VAR_13->length - VAR_1)) {
        VAR_13->length -= VAR_7;
        return VAR_4;
    }

    VAR_9 += (size_t) (VAR_13->length - VAR_1);

    if (FUNC_3(VAR_9, VAR_5, VAR_10->last - VAR_9) != 0) {
        FUNC_2(VAR_3, VAR_8->request->connection->log, 0,
                      "memcached sent invalid trailer");

        VAR_10->last = VAR_9;
        VAR_11->buf->last = VAR_9;
        VAR_13->length = 0;
        VAR_8->rest = 0;

        return VAR_4;
    }

    VAR_8->rest -= VAR_10->last - VAR_9;
    VAR_10->last = VAR_9;
    VAR_11->buf->last = VAR_9;
    VAR_13->length = VAR_8->rest;

    if (VAR_13->length == 0) {
        VAR_13->keepalive = 1;
    }

    return VAR_4;
}
