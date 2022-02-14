
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_char ;
typedef scalar_t__ ssize_t ;
struct TYPE_5__ {int error; scalar_t__ ready; } ;
typedef TYPE_1__ ngx_event_t ;
typedef scalar_t__ ngx_err_t ;
struct TYPE_6__ {int log; int sent; int addr_text; int fd; int socklen; int sockaddr; TYPE_1__* write; } ;
typedef TYPE_2__ ngx_connection_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_2__*,scalar_t__,char*) ;
 int FUNC_1 (int ,int ,scalar_t__,char*) ;
 int FUNC_2 (int ,int ,int ,char*,int ,scalar_t__,size_t,int *) ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_3 (int ,int *,size_t,int ,int ,int ) ;

ssize_t
FUNC_4(ngx_connection_t *VAR_6, u_char *VAR_7, size_t VAR_8)
{
    ssize_t VAR_9;
    ngx_err_t VAR_10;
    ngx_event_t *VAR_11;

    VAR_11 = VAR_6->write;

    for ( ;; ) {
        VAR_9 = FUNC_3(VAR_6->fd, VAR_7, VAR_8, 0, VAR_6->sockaddr, VAR_6->socklen);

        FUNC_2(VAR_4, VAR_6->log, 0,
                       "sendto: fd:%d %z of %uz to \"%V\"",
                       VAR_6->fd, VAR_9, VAR_8, &VAR_6->addr_text);

        if (VAR_9 >= 0) {
            if ((size_t) VAR_9 != VAR_8) {
                VAR_11->error = 1;
                (void) FUNC_0(VAR_6, 0, "sendto() incomplete");
                return VAR_3;
            }

            VAR_6->sent += VAR_9;

            return VAR_9;
        }

        VAR_10 = VAR_5;

        if (VAR_10 == VAR_1) {
            VAR_11->ready = 0;
            FUNC_1(VAR_4, VAR_6->log, VAR_1,
                           "sendto() not ready");
            return VAR_0;
        }

        if (VAR_10 != VAR_2) {
            VAR_11->error = 1;
            (void) FUNC_0(VAR_6, VAR_10, "sendto() failed");
            return VAR_3;
        }
    }
}
