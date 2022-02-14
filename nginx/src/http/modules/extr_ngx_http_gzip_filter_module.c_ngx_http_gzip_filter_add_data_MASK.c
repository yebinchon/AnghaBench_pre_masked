
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int ngx_int_t ;
struct TYPE_13__ {TYPE_1__* connection; int pool; } ;
typedef TYPE_3__ ngx_http_request_t ;
struct TYPE_12__ {scalar_t__ avail_in; scalar_t__ next_in; } ;
struct TYPE_14__ {scalar_t__ flush; TYPE_2__ zstream; TYPE_6__* in_buf; TYPE_5__* copy_buf; TYPE_5__* in; TYPE_5__* copied; scalar_t__ redo; } ;
typedef TYPE_4__ ngx_http_gzip_ctx_t ;
struct TYPE_15__ {struct TYPE_15__* next; TYPE_6__* buf; } ;
typedef TYPE_5__ ngx_chain_t ;
typedef scalar_t__ ngx_buf_tag_t ;
struct TYPE_16__ {scalar_t__ tag; scalar_t__ pos; scalar_t__ last; scalar_t__ flush; scalar_t__ last_buf; } ;
struct TYPE_11__ {int log; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int ,TYPE_5__*) ;
 int VAR_7 ;
 int FUNC_1 (int ,int ,int ,char*,TYPE_5__*) ;
 int FUNC_2 (int ,int ,int ,char*,TYPE_6__*,scalar_t__,scalar_t__) ;

__attribute__((used)) static ngx_int_t
FUNC_3(ngx_http_request_t *VAR_8, ngx_http_gzip_ctx_t *VAR_9)
{
    ngx_chain_t *VAR_10;

    if (VAR_9->zstream.avail_in || VAR_9->flush != VAR_5 || VAR_9->redo) {
        return VAR_3;
    }

    FUNC_1(VAR_2, VAR_8->connection->log, 0,
                   "gzip in: %p", VAR_9->in);

    if (VAR_9->in == ((void*)0)) {
        return VAR_1;
    }

    if (VAR_9->copy_buf) {






        VAR_9->copy_buf->next = VAR_9->copied;
        VAR_9->copied = VAR_9->copy_buf;
        VAR_9->copy_buf = ((void*)0);
    }

    VAR_10 = VAR_9->in;
    VAR_9->in_buf = VAR_10->buf;
    VAR_9->in = VAR_10->next;

    if (VAR_9->in_buf->tag == (ngx_buf_tag_t) &VAR_7) {
        VAR_9->copy_buf = VAR_10;

    } else {
        FUNC_0(VAR_8->pool, VAR_10);
    }

    VAR_9->zstream.next_in = VAR_9->in_buf->pos;
    VAR_9->zstream.avail_in = VAR_9->in_buf->last - VAR_9->in_buf->pos;

    FUNC_2(VAR_2, VAR_8->connection->log, 0,
                   "gzip in_buf:%p ni:%p ai:%ud",
                   VAR_9->in_buf,
                   VAR_9->zstream.next_in, VAR_9->zstream.avail_in);

    if (VAR_9->in_buf->last_buf) {
        VAR_9->flush = VAR_4;

    } else if (VAR_9->in_buf->flush) {
        VAR_9->flush = VAR_6;

    } else if (VAR_9->zstream.avail_in == 0) {

        return VAR_0;
    }

    return VAR_3;
}
