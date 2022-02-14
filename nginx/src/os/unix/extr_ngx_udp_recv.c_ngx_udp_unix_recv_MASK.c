
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_char ;
typedef scalar_t__ ssize_t ;
struct TYPE_5__ {scalar_t__ available; int error; scalar_t__ ready; } ;
typedef TYPE_1__ ngx_event_t ;
typedef scalar_t__ ngx_err_t ;
struct TYPE_6__ {int log; int fd; TYPE_1__* read; } ;
typedef TYPE_2__ ngx_connection_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (TYPE_2__*,scalar_t__,char*) ;
 int VAR_6 ;
 int FUNC_1 (int ,int ,scalar_t__,char*) ;
 int FUNC_2 (int ,int ,int ,char*,int ,scalar_t__,size_t) ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_3 (int ,int *,size_t,int ) ;

ssize_t
FUNC_4(ngx_connection_t *VAR_8, u_char *VAR_9, size_t VAR_10)
{
    ssize_t VAR_11;
    ngx_err_t VAR_12;
    ngx_event_t *VAR_13;

    VAR_13 = VAR_8->read;

    do {
        VAR_11 = FUNC_3(VAR_8->fd, VAR_9, VAR_10, 0);

        FUNC_2(VAR_4, VAR_8->log, 0,
                       "recv: fd:%d %z of %uz", VAR_8->fd, VAR_11, VAR_10);

        if (VAR_11 >= 0) {
            return VAR_11;
        }

        VAR_12 = VAR_7;

        if (VAR_12 == VAR_1 || VAR_12 == VAR_2) {
            FUNC_1(VAR_4, VAR_8->log, VAR_12,
                           "recv() not ready");
            VAR_11 = VAR_0;

        } else {
            VAR_11 = FUNC_0(VAR_8, VAR_12, "recv() failed");
            break;
        }

    } while (VAR_12 == VAR_2);

    VAR_13->ready = 0;

    if (VAR_11 == VAR_3) {
        VAR_13->error = 1;
    }

    return VAR_11;
}
