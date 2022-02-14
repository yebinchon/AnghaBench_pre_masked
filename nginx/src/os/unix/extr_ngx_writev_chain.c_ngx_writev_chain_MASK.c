
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


struct iovec {int dummy; } ;
typedef scalar_t__ ssize_t ;
typedef scalar_t__ off_t ;
struct TYPE_19__ {int nalloc; scalar_t__ size; struct iovec* iovs; } ;
typedef TYPE_2__ ngx_iovec_t ;
struct TYPE_20__ {int error; scalar_t__ ready; int kq_errno; scalar_t__ pending_eof; } ;
typedef TYPE_3__ ngx_event_t ;
struct TYPE_21__ {int sent; int log; TYPE_3__* write; } ;
typedef TYPE_4__ ngx_connection_t ;
struct TYPE_22__ {TYPE_1__* buf; } ;
typedef TYPE_5__ ngx_chain_t ;
struct TYPE_18__ {int file_last; int file_pos; int file; int last; int pos; int start; scalar_t__ in_file; int recycled; int temporary; } ;


 scalar_t__ VAR_0 ;
 TYPE_5__* VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 TYPE_5__* FUNC_0 (TYPE_5__*,scalar_t__) ;
 int FUNC_1 (TYPE_4__*,int ,char*) ;
 int FUNC_2 () ;
 int VAR_7 ;
 int FUNC_3 (int ,int ,int ,char*,int ,int ,scalar_t__,int ,int ,int ,int ,int ,int ) ;
 TYPE_5__* FUNC_4 (TYPE_2__*,TYPE_5__*,scalar_t__,int ) ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_5 (TYPE_4__*,TYPE_2__*) ;

ngx_chain_t *
FUNC_6(ngx_connection_t *VAR_9, ngx_chain_t *VAR_10, off_t VAR_11)
{
    ssize_t VAR_12, VAR_13;
    off_t VAR_14, VAR_15;
    ngx_chain_t *VAR_16;
    ngx_event_t *VAR_17;
    ngx_iovec_t VAR_18;
    struct iovec VAR_19[VAR_3];

    VAR_17 = VAR_9->write;

    if (!VAR_17->ready) {
        return VAR_10;
    }
    if (VAR_11 == 0 || VAR_11 > (off_t) (VAR_5 - VAR_8)) {
        VAR_11 = VAR_5 - VAR_8;
    }

    VAR_14 = 0;

    VAR_18.iovs = VAR_19;
    VAR_18.nalloc = VAR_3;

    for ( ;; ) {
        VAR_15 = VAR_14;



        VAR_16 = FUNC_4(&VAR_18, VAR_10, VAR_11 - VAR_14, VAR_9->log);

        if (VAR_16 == VAR_1) {
            return VAR_1;
        }

        if (VAR_16 && VAR_16->buf->in_file) {
            FUNC_3(VAR_4, VAR_9->log, 0,
                          "file buf in writev "
                          "t:%d r:%d f:%d %p %p-%p %p %O-%O",
                          VAR_16->buf->temporary,
                          VAR_16->buf->recycled,
                          VAR_16->buf->in_file,
                          VAR_16->buf->start,
                          VAR_16->buf->pos,
                          VAR_16->buf->last,
                          VAR_16->buf->file,
                          VAR_16->buf->file_pos,
                          VAR_16->buf->file_last);

            FUNC_2();

            return VAR_1;
        }

        VAR_14 += VAR_18.size;

        VAR_12 = FUNC_5(VAR_9, &VAR_18);

        if (VAR_12 == VAR_2) {
            return VAR_1;
        }

        VAR_13 = (VAR_12 == VAR_0) ? 0 : VAR_12;

        VAR_9->sent += VAR_13;

        VAR_10 = FUNC_0(VAR_10, VAR_13);

        if (VAR_14 - VAR_15 != VAR_13) {
            VAR_17->ready = 0;
            return VAR_10;
        }

        if (VAR_14 >= VAR_11 || VAR_10 == ((void*)0)) {
            return VAR_10;
        }
    }
}
