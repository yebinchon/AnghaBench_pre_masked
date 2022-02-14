
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef size_t u_long ;
typedef int u_char ;
typedef size_t ssize_t ;
struct TYPE_8__ {scalar_t__ error; } ;
struct TYPE_9__ {int active; int error; size_t available; scalar_t__ ready; TYPE_1__ ovlp; scalar_t__ complete; } ;
typedef TYPE_2__ ngx_event_t ;
typedef scalar_t__ ngx_err_t ;
struct TYPE_10__ {size_t sent; int fd; int log; TYPE_2__* write; } ;
typedef TYPE_3__ ngx_connection_t ;
typedef int WSAOVERLAPPED ;
struct TYPE_11__ {char* buf; size_t len; } ;
typedef TYPE_4__ WSABUF ;
typedef scalar_t__ LPWSAOVERLAPPED ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,scalar_t__,size_t*,int ,int *) ;
 int FUNC_1 (int ,TYPE_4__*,int,size_t*,int ,scalar_t__,int *) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (TYPE_3__*,scalar_t__,char*) ;
 int VAR_5 ;
 int FUNC_3 (int ,int ,scalar_t__,char*) ;
 int FUNC_4 (int ,int ,int ,char*,scalar_t__) ;
 int FUNC_5 (int ,int ,int ,char*,int ,size_t,size_t) ;
 int FUNC_6 (int ,int ,int ,char*,int ,int,size_t,size_t) ;
 int FUNC_7 (scalar_t__,int) ;
 scalar_t__ VAR_6 ;

ssize_t
FUNC_8(ngx_connection_t *VAR_7, u_char *VAR_8, size_t VAR_9)
{
    int VAR_10;
    u_long VAR_11;
    ngx_err_t VAR_12;
    ngx_event_t *VAR_13;
    LPWSAOVERLAPPED VAR_14;
    WSABUF VAR_15;

    VAR_13 = VAR_7->write;

    if (!VAR_13->ready) {
        return VAR_0;
    }

    FUNC_4(VAR_2, VAR_7->log, 0,
                   "wev->complete: %d", VAR_13->complete);

    if (!VAR_13->complete) {
        VAR_15.buf = (char *) VAR_8;
        VAR_15.len = VAR_9;

        VAR_11 = 0;

        VAR_14 = (LPWSAOVERLAPPED) &VAR_7->write->ovlp;
        FUNC_7(VAR_14, sizeof(WSAOVERLAPPED));

        VAR_10 = FUNC_1(VAR_7->fd, &VAR_15, 1, &VAR_11, 0, VAR_14, ((void*)0));

        FUNC_6(VAR_2, VAR_7->log, 0,
                       "WSASend: fd:%d, %d, %ul of %uz", VAR_7->fd, VAR_10, VAR_11, VAR_9);

        VAR_13->complete = 0;

        if (VAR_10 == 0) {
            if (VAR_5 & VAR_3) {







                VAR_13->active = 1;
                return VAR_0;
            }

            if (VAR_11 < VAR_9) {
                VAR_13->ready = 0;
            }

            VAR_7->sent += VAR_11;

            return VAR_11;
        }

        VAR_12 = VAR_6;

        if (VAR_12 == VAR_4) {
            FUNC_3(VAR_2, VAR_7->log, VAR_12,
                           "WSASend() posted");
            VAR_13->active = 1;
            return VAR_0;
        }

        VAR_13->error = 1;
        FUNC_2(VAR_7, VAR_12, "WSASend() failed");

        return VAR_1;
    }



    VAR_13->complete = 0;
    VAR_13->active = 0;

    if (VAR_5 & VAR_3) {

        if (VAR_13->ovlp.error) {
            FUNC_2(VAR_7, VAR_13->ovlp.error, "WSASend() failed");
            return VAR_1;
        }

        VAR_11 = VAR_13->available;

    } else {
        if (FUNC_0(VAR_7->fd, (LPWSAOVERLAPPED) &VAR_13->ovlp,
                                   &VAR_11, 0, ((void*)0))
            == 0)
        {
            FUNC_2(VAR_7, VAR_6,
                           "WSASend() or WSAGetOverlappedResult() failed");

            return VAR_1;
        }
    }

    FUNC_5(VAR_2, VAR_7->log, 0,
                   "WSAGetOverlappedResult: fd:%d, %ul of %uz",
                   VAR_7->fd, VAR_11, VAR_9);

    if (VAR_11 < VAR_9) {
        VAR_13->ready = 0;
    }

    VAR_7->sent += VAR_11;

    return VAR_11;
}
