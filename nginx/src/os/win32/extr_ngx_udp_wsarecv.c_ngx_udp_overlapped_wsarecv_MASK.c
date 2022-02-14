
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ u_long ;
typedef int u_char ;
typedef scalar_t__ ssize_t ;
struct TYPE_8__ {scalar_t__ error; } ;
struct TYPE_9__ {int active; int error; scalar_t__ complete; TYPE_1__ ovlp; scalar_t__ available; int ready; } ;
typedef TYPE_2__ ngx_event_t ;
typedef scalar_t__ ngx_err_t ;
struct TYPE_10__ {int log; int fd; TYPE_2__* read; } ;
typedef TYPE_3__ ngx_connection_t ;
typedef int WSAOVERLAPPED ;
struct TYPE_11__ {char* buf; size_t len; } ;
typedef TYPE_4__ WSABUF ;
typedef scalar_t__ LPWSAOVERLAPPED ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ,scalar_t__,scalar_t__*,int ,int *) ;
 int FUNC_1 (int ,TYPE_4__*,int,scalar_t__*,scalar_t__*,scalar_t__,int *) ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (TYPE_3__*,scalar_t__,char*) ;
 int VAR_6 ;
 int FUNC_3 (int ,int ,scalar_t__,char*) ;
 int FUNC_4 (int ,int ,int ,char*,scalar_t__) ;
 int FUNC_5 (int ,int ,int ,char*,int ,scalar_t__,size_t) ;
 int FUNC_6 (int ,int ,int ,char*,int ,int,scalar_t__,size_t) ;
 int FUNC_7 (int ,int ,int ,char*) ;
 int FUNC_8 (scalar_t__,int) ;
 scalar_t__ VAR_7 ;

ssize_t
FUNC_9(ngx_connection_t *VAR_8, u_char *VAR_9, size_t VAR_10)
{
    int VAR_11;
    u_long VAR_12, VAR_13;
    WSABUF VAR_14[1];
    ngx_err_t VAR_15;
    ngx_event_t *VAR_16;
    LPWSAOVERLAPPED VAR_17;

    VAR_16 = VAR_8->read;

    if (!VAR_16->ready) {
        FUNC_7(VAR_2, VAR_8->log, 0, "second wsa post");
        return VAR_0;
    }

    FUNC_4(VAR_3, VAR_8->log, 0,
                   "rev->complete: %d", VAR_16->complete);

    if (VAR_16->complete) {
        VAR_16->complete = 0;

        if (VAR_6 & VAR_4) {
            if (VAR_16->ovlp.error) {
                FUNC_2(VAR_8, VAR_16->ovlp.error, "WSARecv() failed");
                return VAR_1;
            }

            FUNC_5(VAR_3, VAR_8->log, 0,
                           "WSARecv ovlp: fd:%d %ul of %z",
                           VAR_8->fd, VAR_16->available, VAR_10);

            return VAR_16->available;
        }

        if (FUNC_0(VAR_8->fd, (LPWSAOVERLAPPED) &VAR_16->ovlp,
                                   &VAR_12, 0, ((void*)0))
            == 0)
        {
            FUNC_2(VAR_8, VAR_7,
                               "WSARecv() or WSAGetOverlappedResult() failed");
            return VAR_1;
        }

        FUNC_5(VAR_3, VAR_8->log, 0,
                       "WSARecv: fd:%d %ul of %z", VAR_8->fd, VAR_12, VAR_10);

        return VAR_12;
    }

    VAR_17 = (LPWSAOVERLAPPED) &VAR_16->ovlp;
    FUNC_8(VAR_17, sizeof(WSAOVERLAPPED));
    VAR_14[0].buf = (char *) VAR_9;
    VAR_14[0].len = VAR_10;
    VAR_13 = 0;
    VAR_12 = 0;

    VAR_11 = FUNC_1(VAR_8->fd, VAR_14, 1, &VAR_12, &VAR_13, VAR_17, ((void*)0));

    VAR_16->complete = 0;

    FUNC_6(VAR_3, VAR_8->log, 0,
                   "WSARecv ovlp: fd:%d rc:%d %ul of %z",
                   VAR_8->fd, VAR_11, VAR_12, VAR_10);

    if (VAR_11 == -1) {
        VAR_15 = VAR_7;
        if (VAR_15 == VAR_5) {
            VAR_16->active = 1;
            FUNC_3(VAR_3, VAR_8->log, VAR_15,
                           "WSARecv() posted");
            return VAR_0;
        }

        VAR_16->error = 1;
        FUNC_2(VAR_8, VAR_15, "WSARecv() failed");
        return VAR_1;
    }

    if (VAR_6 & VAR_4) {







        VAR_16->active = 1;
        return VAR_0;
    }

    VAR_16->active = 0;

    return VAR_12;
}
