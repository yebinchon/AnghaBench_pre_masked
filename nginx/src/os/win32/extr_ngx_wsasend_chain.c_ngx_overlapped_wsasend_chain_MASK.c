
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_13__ ;


typedef scalar_t__ u_long ;
typedef int u_char ;
typedef scalar_t__ off_t ;
struct TYPE_18__ {scalar_t__ error; } ;
struct TYPE_19__ {int ready; int active; int error; scalar_t__ available; TYPE_1__ ovlp; scalar_t__ complete; } ;
typedef TYPE_2__ ngx_event_t ;
typedef scalar_t__ ngx_err_t ;
struct TYPE_20__ {int sent; int fd; int log; TYPE_2__* write; int pool; } ;
typedef TYPE_3__ ngx_connection_t ;
struct TYPE_21__ {TYPE_13__* buf; struct TYPE_21__* next; } ;
typedef TYPE_4__ ngx_chain_t ;
struct TYPE_22__ {scalar_t__ nelts; int size; int nalloc; int * elts; int pool; } ;
typedef TYPE_5__ ngx_array_t ;
typedef int WSAOVERLAPPED ;
typedef int WSABUF ;
struct TYPE_23__ {int len; char* buf; } ;
struct TYPE_17__ {int * last; int * pos; } ;
typedef scalar_t__ LPWSAOVERLAPPED ;
typedef TYPE_6__* LPWSABUF ;


 TYPE_4__* VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ,scalar_t__,scalar_t__*,int ,int *) ;
 int FUNC_1 (int ,int *,scalar_t__,scalar_t__*,int ,scalar_t__,int *) ;
 scalar_t__ VAR_5 ;
 TYPE_6__* FUNC_2 (TYPE_5__*) ;
 scalar_t__ FUNC_3 (TYPE_13__*) ;
 TYPE_4__* FUNC_4 (TYPE_4__*,scalar_t__) ;
 int FUNC_5 (TYPE_3__*,scalar_t__,char*) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_6 (int ,int ,scalar_t__,char*) ;
 int FUNC_7 (int ,int ,int ,char*,scalar_t__) ;
 int FUNC_8 (int ,int ,int ,char*,int ,scalar_t__) ;
 scalar_t__ VAR_8 ;
 int FUNC_9 (scalar_t__,int) ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;

ngx_chain_t *
FUNC_10(ngx_connection_t *VAR_11, ngx_chain_t *VAR_12, off_t VAR_13)
{
    int VAR_14;
    u_char *VAR_15;
    u_long VAR_16, VAR_17, VAR_18;
    ngx_err_t VAR_19;
    ngx_event_t *VAR_20;
    ngx_array_t VAR_21;
    ngx_chain_t *VAR_22;
    LPWSAOVERLAPPED VAR_23;
    LPWSABUF VAR_24;
    WSABUF VAR_25[VAR_4];

    VAR_20 = VAR_11->write;

    if (!VAR_20->ready) {
        return VAR_12;
    }

    FUNC_7(VAR_1, VAR_11->log, 0,
                   "wev->complete: %d", VAR_20->complete);

    if (!VAR_20->complete) {





        if (VAR_13 == 0 || VAR_13 > (off_t) (VAR_2 - VAR_9))
        {
            VAR_13 = VAR_2 - VAR_9;
        }






        VAR_21.elts = VAR_25;
        VAR_21.nelts = 0;
        VAR_21.size = sizeof(WSABUF);
        VAR_21.nalloc = VAR_4;
        VAR_21.pool = VAR_11->pool;

        VAR_17 = 0;
        VAR_15 = ((void*)0);
        VAR_24 = ((void*)0);



        for (VAR_22 = VAR_12;
             VAR_22 && VAR_21.nelts < VAR_8 && VAR_17 < VAR_13;
             VAR_22 = VAR_22->next)
        {
            if (FUNC_3(VAR_22->buf)) {
                continue;
            }

            VAR_16 = VAR_22->buf->last - VAR_22->buf->pos;

            if (VAR_17 + VAR_16 > VAR_13) {
                VAR_16 = (u_long) (VAR_13 - VAR_17);
            }

            if (VAR_15 == VAR_22->buf->pos) {
                VAR_24->len += VAR_22->buf->last - VAR_22->buf->pos;

            } else {
                VAR_24 = FUNC_2(&VAR_21);
                if (VAR_24 == ((void*)0)) {
                    return VAR_0;
                }

                VAR_24->buf = (char *) VAR_22->buf->pos;
                VAR_24->len = VAR_22->buf->last - VAR_22->buf->pos;
            }

            VAR_15 = VAR_22->buf->last;
            VAR_17 += VAR_16;
        }

        VAR_23 = (LPWSAOVERLAPPED) &VAR_11->write->ovlp;
        FUNC_9(VAR_23, sizeof(WSAOVERLAPPED));

        VAR_14 = FUNC_1(VAR_11->fd, VAR_21.elts, VAR_21.nelts, &VAR_18, 0, VAR_23, ((void*)0));

        VAR_20->complete = 0;

        if (VAR_14 == -1) {
            VAR_19 = VAR_6;

            if (VAR_19 == VAR_5) {
                FUNC_6(VAR_1, VAR_11->log, VAR_19,
                               "WSASend() posted");
                VAR_20->active = 1;
                return VAR_12;

            } else {
                VAR_20->error = 1;
                FUNC_5(VAR_11, VAR_19, "WSASend() failed");
                return VAR_0;
            }

        } else if (VAR_7 & VAR_3) {







            VAR_20->active = 1;
            return VAR_12;
        }

        FUNC_8(VAR_1, VAR_11->log, 0,
                       "WSASend: fd:%d, s:%ul", VAR_11->fd, VAR_18);

    } else {



        VAR_20->complete = 0;
        VAR_20->active = 0;

        if (VAR_7 & VAR_3) {
            if (VAR_20->ovlp.error) {
                FUNC_5(VAR_11, VAR_20->ovlp.error, "WSASend() failed");
                return VAR_0;
            }

            VAR_18 = VAR_20->available;

        } else {
            if (FUNC_0(VAR_11->fd, (LPWSAOVERLAPPED) &VAR_20->ovlp,
                                       &VAR_18, 0, ((void*)0))
                == 0)
            {
                FUNC_5(VAR_11, VAR_10,
                               "WSASend() or WSAGetOverlappedResult() failed");

                return VAR_0;
            }
        }
    }

    FUNC_8(VAR_1, VAR_11->log, 0,
                   "WSASend ovlp: fd:%d, s:%ul", VAR_11->fd, VAR_18);

    VAR_11->sent += VAR_18;

    VAR_12 = FUNC_4(VAR_12, VAR_18);

    if (VAR_12) {
        VAR_20->ready = 0;

    } else {
        VAR_20->ready = 1;
    }

    return VAR_12;
}
