
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t u_long ;
typedef int u_char ;
typedef size_t ssize_t ;
struct TYPE_7__ {int error; scalar_t__ ready; } ;
typedef TYPE_1__ ngx_event_t ;
typedef scalar_t__ ngx_err_t ;
struct TYPE_8__ {size_t sent; int log; int fd; TYPE_1__* write; } ;
typedef TYPE_2__ ngx_connection_t ;
struct TYPE_9__ {char* buf; size_t len; } ;
typedef TYPE_3__ WSABUF ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,TYPE_3__*,int,size_t*,int ,int *,int *) ;
 int FUNC_1 (TYPE_2__*,scalar_t__,char*) ;
 int FUNC_2 (int ,int ,scalar_t__,char*) ;
 int FUNC_3 (int ,int ,int ,char*,int ,int,size_t,size_t) ;
 scalar_t__ VAR_4 ;

ssize_t
FUNC_4(ngx_connection_t *VAR_5, u_char *VAR_6, size_t VAR_7)
{
    int VAR_8;
    u_long VAR_9;
    ngx_err_t VAR_10;
    ngx_event_t *VAR_11;
    WSABUF VAR_12;

    VAR_11 = VAR_5->write;

    if (!VAR_11->ready) {
        return VAR_0;
    }






    VAR_12.buf = (char *) VAR_6;
    VAR_12.len = VAR_7;

    VAR_9 = 0;

    VAR_8 = FUNC_0(VAR_5->fd, &VAR_12, 1, &VAR_9, 0, ((void*)0), ((void*)0));

    FUNC_3(VAR_2, VAR_5->log, 0,
                   "WSASend: fd:%d, %d, %ul of %uz", VAR_5->fd, VAR_8, VAR_9, VAR_7);

    if (VAR_8 == 0) {
        if (VAR_9 < VAR_7) {
            VAR_11->ready = 0;
        }

        VAR_5->sent += VAR_9;

        return VAR_9;
    }

    VAR_10 = VAR_4;

    if (VAR_10 == VAR_3) {
        FUNC_2(VAR_2, VAR_5->log, VAR_10, "WSASend() not ready");
        VAR_11->ready = 0;
        return VAR_0;
    }

    VAR_11->error = 1;
    FUNC_1(VAR_5, VAR_10, "WSASend() failed");

    return VAR_1;
}
