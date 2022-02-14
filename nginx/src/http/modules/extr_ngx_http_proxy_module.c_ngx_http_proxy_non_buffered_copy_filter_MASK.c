
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ ssize_t ;
typedef int ngx_int_t ;
struct TYPE_11__ {int connection_close; } ;
struct TYPE_10__ {int tag; } ;
struct TYPE_15__ {int last; } ;
struct TYPE_12__ {int length; int keepalive; TYPE_3__ headers_in; TYPE_2__ output; TYPE_7__ buffer; int free_bufs; TYPE_6__* out_bufs; } ;
typedef TYPE_4__ ngx_http_upstream_t ;
struct TYPE_13__ {int pool; TYPE_4__* upstream; } ;
typedef TYPE_5__ ngx_http_request_t ;
struct TYPE_14__ {TYPE_1__* buf; struct TYPE_14__* next; } ;
typedef TYPE_6__ ngx_chain_t ;
typedef TYPE_7__ ngx_buf_t ;
struct TYPE_9__ {int flush; int memory; int tag; int last; int pos; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_6__* FUNC_0 (int ,int *) ;

__attribute__((used)) static ngx_int_t
FUNC_1(void *VAR_2, ssize_t VAR_3)
{
    ngx_http_request_t *VAR_4 = VAR_2;

    ngx_buf_t *VAR_5;
    ngx_chain_t *VAR_6, **VAR_7;
    ngx_http_upstream_t *VAR_8;

    VAR_8 = VAR_4->upstream;

    for (VAR_6 = VAR_8->out_bufs, VAR_7 = &VAR_8->out_bufs; VAR_6; VAR_6 = VAR_6->next) {
        VAR_7 = &VAR_6->next;
    }

    VAR_6 = FUNC_0(VAR_4->pool, &VAR_8->free_bufs);
    if (VAR_6 == ((void*)0)) {
        return VAR_0;
    }

    *VAR_7 = VAR_6;

    VAR_6->buf->flush = 1;
    VAR_6->buf->memory = 1;

    VAR_5 = &VAR_8->buffer;

    VAR_6->buf->pos = VAR_5->last;
    VAR_5->last += VAR_3;
    VAR_6->buf->last = VAR_5->last;
    VAR_6->buf->tag = VAR_8->output.tag;

    if (VAR_8->length == -1) {
        return VAR_1;
    }

    VAR_8->length -= VAR_3;

    if (VAR_8->length == 0) {
        VAR_8->keepalive = !VAR_8->headers_in.connection_close;
    }

    return VAR_1;
}
