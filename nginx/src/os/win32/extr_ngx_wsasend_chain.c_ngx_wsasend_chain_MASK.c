
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_12__ ;


typedef scalar_t__ u_long ;
typedef int u_char ;
typedef scalar_t__ off_t ;
struct TYPE_17__ {int error; scalar_t__ ready; } ;
typedef TYPE_1__ ngx_event_t ;
typedef scalar_t__ ngx_err_t ;
struct TYPE_18__ {int sent; int fd; int log; int pool; TYPE_1__* write; } ;
typedef TYPE_2__ ngx_connection_t ;
struct TYPE_19__ {TYPE_12__* buf; struct TYPE_19__* next; } ;
typedef TYPE_3__ ngx_chain_t ;
struct TYPE_20__ {int size; int nalloc; scalar_t__ nelts; int * elts; int pool; } ;
typedef TYPE_4__ ngx_array_t ;
typedef int WSABUF ;
struct TYPE_21__ {int len; char* buf; } ;
struct TYPE_16__ {int * last; int * pos; } ;
typedef TYPE_5__* LPWSABUF ;


 TYPE_3__* VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,int *,scalar_t__,scalar_t__*,int ,int *,int *) ;
 TYPE_5__* FUNC_1 (TYPE_4__*) ;
 scalar_t__ FUNC_2 (TYPE_12__*) ;
 TYPE_3__* FUNC_3 (TYPE_3__*,scalar_t__) ;
 int FUNC_4 (TYPE_2__*,scalar_t__,char*) ;
 scalar_t__ VAR_5 ;
 int FUNC_5 (int ,int ,scalar_t__,char*) ;
 int FUNC_6 (int ,int ,int ,char*,int ,scalar_t__) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;

ngx_chain_t *
FUNC_7(ngx_connection_t *VAR_8, ngx_chain_t *VAR_9, off_t VAR_10)
{
    int VAR_11;
    u_char *VAR_12;
    u_long VAR_13, VAR_14, VAR_15, VAR_16;
    ngx_err_t VAR_17;
    ngx_event_t *VAR_18;
    ngx_array_t VAR_19;
    ngx_chain_t *VAR_20;
    LPWSABUF VAR_21;
    WSABUF VAR_22[VAR_3];

    VAR_18 = VAR_8->write;

    if (!VAR_18->ready) {
        return VAR_9;
    }



    if (VAR_10 == 0 || VAR_10 > (off_t) (VAR_2 - VAR_7)) {
        VAR_10 = VAR_2 - VAR_7;
    }

    VAR_15 = 0;






    VAR_19.elts = VAR_22;
    VAR_19.size = sizeof(WSABUF);
    VAR_19.nalloc = VAR_3;
    VAR_19.pool = VAR_8->pool;

    for ( ;; ) {
        VAR_12 = ((void*)0);
        VAR_21 = ((void*)0);
        VAR_16 = VAR_15;

        VAR_19.nelts = 0;



        for (VAR_20 = VAR_9;
             VAR_20 && VAR_19.nelts < VAR_6 && VAR_15 < VAR_10;
             VAR_20 = VAR_20->next)
        {
            if (FUNC_2(VAR_20->buf)) {
                continue;
            }

            VAR_13 = VAR_20->buf->last - VAR_20->buf->pos;

            if (VAR_15 + VAR_13 > VAR_10) {
                VAR_13 = (u_long) (VAR_10 - VAR_15);
            }

            if (VAR_12 == VAR_20->buf->pos) {
                VAR_21->len += VAR_20->buf->last - VAR_20->buf->pos;

            } else {
                VAR_21 = FUNC_1(&VAR_19);
                if (VAR_21 == ((void*)0)) {
                    return VAR_0;
                }

                VAR_21->buf = (char *) VAR_20->buf->pos;
                VAR_21->len = VAR_20->buf->last - VAR_20->buf->pos;
            }

            VAR_12 = VAR_20->buf->last;
            VAR_15 += VAR_13;
        }

        VAR_14 = 0;

        VAR_11 = FUNC_0(VAR_8->fd, VAR_19.elts, VAR_19.nelts, &VAR_14, 0, ((void*)0), ((void*)0));

        if (VAR_11 == -1) {
            VAR_17 = VAR_5;

            if (VAR_17 == VAR_4) {
                FUNC_5(VAR_1, VAR_8->log, VAR_17,
                               "WSASend() not ready");

            } else {
                VAR_18->error = 1;
                FUNC_4(VAR_8, VAR_17, "WSASend() failed");
                return VAR_0;
            }
        }

        FUNC_6(VAR_1, VAR_8->log, 0,
                       "WSASend: fd:%d, s:%ul", VAR_8->fd, VAR_14);

        VAR_8->sent += VAR_14;

        VAR_9 = FUNC_3(VAR_9, VAR_14);

        if (VAR_15 - VAR_16 != VAR_14) {
            VAR_18->ready = 0;
            return VAR_9;
        }

        if (VAR_15 >= VAR_10 || VAR_9 == ((void*)0)) {
            return VAR_9;
        }
    }
}
