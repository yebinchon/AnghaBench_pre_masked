
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_char ;
typedef scalar_t__ ssize_t ;
struct TYPE_5__ {scalar_t__ kq_errno; int error; scalar_t__ ready; scalar_t__ pending_eof; } ;
typedef TYPE_1__ ngx_event_t ;
typedef scalar_t__ ngx_err_t ;
struct TYPE_6__ {int log; int sent; int fd; TYPE_1__* write; } ;
typedef TYPE_2__ ngx_connection_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_2__*,scalar_t__,char*) ;
 int VAR_7 ;
 int FUNC_1 (int ,int ,scalar_t__,char*) ;
 int FUNC_2 (int ,int ,int ,char*,int ,scalar_t__,size_t) ;
 int FUNC_3 (int ,int ,scalar_t__,char*) ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_4 (int ,int *,size_t,int ) ;

ssize_t
FUNC_5(ngx_connection_t *VAR_9, u_char *VAR_10, size_t VAR_11)
{
    ssize_t VAR_12;
    ngx_err_t VAR_13;
    ngx_event_t *VAR_14;

    VAR_14 = VAR_9->write;
    for ( ;; ) {
        VAR_12 = FUNC_4(VAR_9->fd, VAR_10, VAR_11, 0);

        FUNC_2(VAR_5, VAR_9->log, 0,
                       "send: fd:%d %z of %uz", VAR_9->fd, VAR_12, VAR_11);

        if (VAR_12 > 0) {
            if (VAR_12 < (ssize_t) VAR_11) {
                VAR_14->ready = 0;
            }

            VAR_9->sent += VAR_12;

            return VAR_12;
        }

        VAR_13 = VAR_8;

        if (VAR_12 == 0) {
            FUNC_3(VAR_4, VAR_9->log, VAR_13, "send() returned zero");
            VAR_14->ready = 0;
            return VAR_12;
        }

        if (VAR_13 == VAR_1 || VAR_13 == VAR_2) {
            VAR_14->ready = 0;

            FUNC_1(VAR_5, VAR_9->log, VAR_13,
                           "send() not ready");

            if (VAR_13 == VAR_1) {
                return VAR_0;
            }

        } else {
            VAR_14->error = 1;
            (void) FUNC_0(VAR_9, VAR_13, "send() failed");
            return VAR_3;
        }
    }
}
