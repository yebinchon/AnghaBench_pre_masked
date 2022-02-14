
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_11__ ;


typedef scalar_t__ off_t ;
typedef int ngx_int_t ;
struct TYPE_17__ {int buffered; int log; TYPE_3__* (* send_chain ) (TYPE_1__*,TYPE_3__*,int ) ;} ;
typedef TYPE_1__ ngx_connection_t ;
struct TYPE_18__ {TYPE_3__* out; TYPE_3__** last; TYPE_8__* pool; int limit; TYPE_1__* connection; } ;
typedef TYPE_2__ ngx_chain_writer_ctx_t ;
struct TYPE_19__ {struct TYPE_19__* next; TYPE_11__* buf; } ;
typedef TYPE_3__ ngx_chain_t ;
struct TYPE_20__ {int log; } ;
struct TYPE_16__ {int file_last; int file_pos; int file; int last; int pos; int start; int in_file; int recycled; int temporary; int flush; } ;


 int VAR_0 ;
 TYPE_3__* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_3__* FUNC_0 (TYPE_8__*) ;
 scalar_t__ FUNC_1 (TYPE_11__*) ;
 int FUNC_2 (TYPE_11__*) ;
 int FUNC_3 () ;
 int FUNC_4 (TYPE_8__*,TYPE_3__*) ;
 int FUNC_5 (int ,int ,int ,char*,TYPE_3__*) ;
 int FUNC_6 (int ,int ,int ,char*,int ,scalar_t__) ;
 int FUNC_7 (int ,int ,int ,char*,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 TYPE_3__* FUNC_8 (TYPE_1__*,TYPE_3__*,int ) ;

ngx_int_t
FUNC_9(void *VAR_6, ngx_chain_t *VAR_7)
{
    ngx_chain_writer_ctx_t *VAR_8 = VAR_6;

    off_t VAR_9;
    ngx_chain_t *VAR_10, *VAR_11, *VAR_12;
    ngx_connection_t *VAR_13;

    VAR_13 = VAR_8->connection;

    for (VAR_9 = 0; VAR_7; VAR_7 = VAR_7->next) {

        if (FUNC_1(VAR_7->buf) == 0 && !FUNC_2(VAR_7->buf)) {

            FUNC_7(VAR_3, VAR_8->pool->log, 0,
                          "zero size buf in chain writer "
                          "t:%d r:%d f:%d %p %p-%p %p %O-%O",
                          VAR_7->buf->temporary,
                          VAR_7->buf->recycled,
                          VAR_7->buf->in_file,
                          VAR_7->buf->start,
                          VAR_7->buf->pos,
                          VAR_7->buf->last,
                          VAR_7->buf->file,
                          VAR_7->buf->file_pos,
                          VAR_7->buf->file_last);

            FUNC_3();

            continue;
        }

        if (FUNC_1(VAR_7->buf) < 0) {

            FUNC_7(VAR_3, VAR_8->pool->log, 0,
                          "negative size buf in chain writer "
                          "t:%d r:%d f:%d %p %p-%p %p %O-%O",
                          VAR_7->buf->temporary,
                          VAR_7->buf->recycled,
                          VAR_7->buf->in_file,
                          VAR_7->buf->start,
                          VAR_7->buf->pos,
                          VAR_7->buf->last,
                          VAR_7->buf->file,
                          VAR_7->buf->file_pos,
                          VAR_7->buf->file_last);

            FUNC_3();

            return VAR_2;
        }

        VAR_9 += FUNC_1(VAR_7->buf);

        FUNC_6(VAR_4, VAR_13->log, 0,
                       "chain writer buf fl:%d s:%uO",
                       VAR_7->buf->flush, FUNC_1(VAR_7->buf));

        VAR_10 = FUNC_0(VAR_8->pool);
        if (VAR_10 == ((void*)0)) {
            return VAR_2;
        }

        VAR_10->buf = VAR_7->buf;
        VAR_10->next = ((void*)0);
        *VAR_8->last = VAR_10;
        VAR_8->last = &VAR_10->next;
    }

    FUNC_5(VAR_4, VAR_13->log, 0,
                   "chain writer in: %p", VAR_8->out);

    for (VAR_10 = VAR_8->out; VAR_10; VAR_10 = VAR_10->next) {

        if (FUNC_1(VAR_10->buf) == 0 && !FUNC_2(VAR_10->buf)) {

            FUNC_7(VAR_3, VAR_8->pool->log, 0,
                          "zero size buf in chain writer "
                          "t:%d r:%d f:%d %p %p-%p %p %O-%O",
                          VAR_10->buf->temporary,
                          VAR_10->buf->recycled,
                          VAR_10->buf->in_file,
                          VAR_10->buf->start,
                          VAR_10->buf->pos,
                          VAR_10->buf->last,
                          VAR_10->buf->file,
                          VAR_10->buf->file_pos,
                          VAR_10->buf->file_last);

            FUNC_3();

            continue;
        }

        if (FUNC_1(VAR_10->buf) < 0) {

            FUNC_7(VAR_3, VAR_8->pool->log, 0,
                          "negative size buf in chain writer "
                          "t:%d r:%d f:%d %p %p-%p %p %O-%O",
                          VAR_10->buf->temporary,
                          VAR_10->buf->recycled,
                          VAR_10->buf->in_file,
                          VAR_10->buf->start,
                          VAR_10->buf->pos,
                          VAR_10->buf->last,
                          VAR_10->buf->file,
                          VAR_10->buf->file_pos,
                          VAR_10->buf->file_last);

            FUNC_3();

            return VAR_2;
        }

        VAR_9 += FUNC_1(VAR_10->buf);
    }

    if (VAR_9 == 0 && !VAR_13->buffered) {
        return VAR_5;
    }

    VAR_12 = VAR_13->send_chain(VAR_13, VAR_8->out, VAR_8->limit);

    FUNC_5(VAR_4, VAR_13->log, 0,
                   "chain writer out: %p", VAR_12);

    if (VAR_12 == VAR_1) {
        return VAR_2;
    }

    for (VAR_10 = VAR_8->out; VAR_10 && VAR_10 != VAR_12; ) {
        VAR_11 = VAR_10;
        VAR_10 = VAR_10->next;
        FUNC_4(VAR_8->pool, VAR_11);
    }

    VAR_8->out = VAR_12;

    if (VAR_8->out == ((void*)0)) {
        VAR_8->last = &VAR_8->out;

        if (!VAR_13->buffered) {
            return VAR_5;
        }
    }

    return VAR_0;
}
