
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ u_long ;
typedef int u_char ;
typedef scalar_t__ ssize_t ;
struct TYPE_7__ {int error; scalar_t__ ready; } ;
typedef TYPE_1__ ngx_event_t ;
typedef scalar_t__ ngx_err_t ;
struct TYPE_8__ {int log; TYPE_1__* read; int fd; } ;
typedef TYPE_2__ ngx_connection_t ;
struct TYPE_9__ {char* buf; size_t len; } ;
typedef TYPE_3__ WSABUF ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,TYPE_3__*,int,scalar_t__*,scalar_t__*,int *,int *) ;
 int FUNC_1 (TYPE_2__*,scalar_t__,char*) ;
 int FUNC_2 (int ,int ,scalar_t__,char*) ;
 int FUNC_3 (int ,int ,int ,char*,int ,int,scalar_t__,size_t) ;
 scalar_t__ VAR_4 ;

ssize_t
FUNC_4(ngx_connection_t *VAR_5, u_char *VAR_6, size_t VAR_7)
{
    int VAR_8;
    u_long VAR_9, VAR_10;
    WSABUF VAR_11[1];
    ngx_err_t VAR_12;
    ngx_event_t *VAR_13;

    VAR_11[0].buf = (char *) VAR_6;
    VAR_11[0].len = VAR_7;
    VAR_10 = 0;
    VAR_9 = 0;

    VAR_8 = FUNC_0(VAR_5->fd, VAR_11, 1, &VAR_9, &VAR_10, ((void*)0), ((void*)0));

    FUNC_3(VAR_2, VAR_5->log, 0,
                   "WSARecv: fd:%d rc:%d %ul of %z", VAR_5->fd, VAR_8, VAR_9, VAR_7);

    VAR_13 = VAR_5->read;

    if (VAR_8 == -1) {
        VAR_13->ready = 0;
        VAR_12 = VAR_4;

        if (VAR_12 == VAR_3) {
            FUNC_2(VAR_2, VAR_5->log, VAR_12,
                           "WSARecv() not ready");
            return VAR_0;
        }

        VAR_13->error = 1;
        FUNC_1(VAR_5, VAR_12, "WSARecv() failed");

        return VAR_1;
    }

    return VAR_9;
}
