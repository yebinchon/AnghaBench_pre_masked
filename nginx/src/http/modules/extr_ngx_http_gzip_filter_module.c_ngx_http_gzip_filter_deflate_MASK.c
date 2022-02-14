
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_8__ ;
typedef struct TYPE_26__ TYPE_7__ ;
typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_18__ ;


typedef scalar_t__ ngx_int_t ;
struct TYPE_22__ {int pool; TYPE_2__* connection; } ;
typedef TYPE_3__ ngx_http_request_t ;
struct TYPE_19__ {scalar_t__ avail_in; scalar_t__ avail_out; int next_out; int * next_in; } ;
struct TYPE_23__ {scalar_t__ flush; int redo; TYPE_6__** last_out; TYPE_7__* out_buf; int * in; TYPE_18__ zstream; TYPE_1__* request; TYPE_8__* in_buf; } ;
typedef TYPE_4__ ngx_http_gzip_ctx_t ;
struct TYPE_24__ {scalar_t__ no_buffer; } ;
typedef TYPE_5__ ngx_http_gzip_conf_t ;
struct TYPE_25__ {struct TYPE_25__* next; TYPE_7__* buf; } ;
typedef TYPE_6__ ngx_chain_t ;
struct TYPE_26__ {int flush; int last; } ;
typedef TYPE_7__ ngx_buf_t ;
struct TYPE_27__ {int * pos; } ;
struct TYPE_21__ {int buffered; int log; } ;
struct TYPE_20__ {int pool; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (TYPE_18__*,scalar_t__) ;
 TYPE_6__* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (TYPE_7__*) ;
 TYPE_7__* FUNC_3 (int ) ;
 TYPE_5__* FUNC_4 (TYPE_3__*,int ) ;
 scalar_t__ FUNC_5 (TYPE_3__*,TYPE_4__*) ;
 int VAR_11 ;
 int FUNC_6 (int ,int ,int ,char*,TYPE_8__*,int *) ;
 int FUNC_7 (int ,int ,int ,char*,int *,int ,scalar_t__,scalar_t__,int) ;
 int FUNC_8 (int ,int ,int ,char*,int *,int ,scalar_t__,scalar_t__,scalar_t__,int) ;
 int FUNC_9 (int ,int ,int ,char*,scalar_t__,int) ;

__attribute__((used)) static ngx_int_t
FUNC_10(ngx_http_request_t *VAR_12, ngx_http_gzip_ctx_t *VAR_13)
{
    int VAR_14;
    ngx_buf_t *VAR_15;
    ngx_chain_t *VAR_16;
    ngx_http_gzip_conf_t *VAR_17;

    FUNC_8(VAR_4, VAR_12->connection->log, 0,
                 "deflate in: ni:%p no:%p ai:%ud ao:%ud fl:%d redo:%d",
                 VAR_13->zstream.next_in, VAR_13->zstream.next_out,
                 VAR_13->zstream.avail_in, VAR_13->zstream.avail_out,
                 VAR_13->flush, VAR_13->redo);

    VAR_14 = FUNC_0(&VAR_13->zstream, VAR_13->flush);

    if (VAR_14 != VAR_8 && VAR_14 != VAR_9 && VAR_14 != VAR_6) {
        FUNC_9(VAR_3, VAR_12->connection->log, 0,
                      "deflate() failed: %d, %d", VAR_13->flush, VAR_14);
        return VAR_1;
    }

    FUNC_7(VAR_4, VAR_12->connection->log, 0,
                   "deflate out: ni:%p no:%p ai:%ud ao:%ud rc:%d",
                   VAR_13->zstream.next_in, VAR_13->zstream.next_out,
                   VAR_13->zstream.avail_in, VAR_13->zstream.avail_out,
                   VAR_14);

    FUNC_6(VAR_4, VAR_12->connection->log, 0,
                   "gzip in_buf:%p pos:%p",
                   VAR_13->in_buf, VAR_13->in_buf->pos);

    if (VAR_13->zstream.next_in) {
        VAR_13->in_buf->pos = VAR_13->zstream.next_in;

        if (VAR_13->zstream.avail_in == 0) {
            VAR_13->zstream.next_in = ((void*)0);
        }
    }

    VAR_13->out_buf->last = VAR_13->zstream.next_out;

    if (VAR_13->zstream.avail_out == 0 && VAR_14 != VAR_9) {



        VAR_16 = FUNC_1(VAR_12->pool);
        if (VAR_16 == ((void*)0)) {
            return VAR_1;
        }

        VAR_16->buf = VAR_13->out_buf;
        VAR_16->next = ((void*)0);
        *VAR_13->last_out = VAR_16;
        VAR_13->last_out = &VAR_16->next;

        VAR_13->redo = 1;

        return VAR_0;
    }

    VAR_13->redo = 0;

    if (VAR_13->flush == VAR_10) {

        VAR_13->flush = VAR_7;

        VAR_16 = FUNC_1(VAR_12->pool);
        if (VAR_16 == ((void*)0)) {
            return VAR_1;
        }

        VAR_15 = VAR_13->out_buf;

        if (FUNC_2(VAR_15) == 0) {

            VAR_15 = FUNC_3(VAR_13->request->pool);
            if (VAR_15 == ((void*)0)) {
                return VAR_1;
            }

        } else {
            VAR_13->zstream.avail_out = 0;
        }

        VAR_15->flush = 1;

        VAR_16->buf = VAR_15;
        VAR_16->next = ((void*)0);
        *VAR_13->last_out = VAR_16;
        VAR_13->last_out = &VAR_16->next;

        VAR_12->connection->buffered &= ~VAR_2;

        return VAR_5;
    }

    if (VAR_14 == VAR_9) {

        if (FUNC_5(VAR_12, VAR_13) != VAR_5) {
            return VAR_1;
        }

        return VAR_5;
    }

    VAR_17 = FUNC_4(VAR_12, VAR_11);

    if (VAR_17->no_buffer && VAR_13->in == ((void*)0)) {

        VAR_16 = FUNC_1(VAR_12->pool);
        if (VAR_16 == ((void*)0)) {
            return VAR_1;
        }

        VAR_16->buf = VAR_13->out_buf;
        VAR_16->next = ((void*)0);
        *VAR_13->last_out = VAR_16;
        VAR_13->last_out = &VAR_16->next;

        return VAR_5;
    }

    return VAR_0;
}
