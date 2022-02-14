
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ngx_int_t ;
struct TYPE_4__ {scalar_t__ log_error; int tcp_nodelay; int fd; int log; } ;
typedef TYPE_1__ ngx_connection_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (TYPE_1__*,int ,char*) ;
 int FUNC_1 (int ,int ,int ,char*) ;
 int VAR_9 ;
 int FUNC_2 (int ,int ,int ,void const*,int) ;

ngx_int_t
FUNC_3(ngx_connection_t *VAR_10)
{
    int VAR_11;

    if (VAR_10->tcp_nodelay != VAR_7) {
        return VAR_5;
    }

    FUNC_1(VAR_4, VAR_10->log, 0, "tcp_nodelay");

    VAR_11 = 1;

    if (FUNC_2(VAR_10->fd, VAR_0, VAR_8,
                   (const void *) &VAR_11, sizeof(int))
        == -1)
    {
        FUNC_0(VAR_10, VAR_9,
                             "setsockopt(TCP_NODELAY) failed");
        return VAR_1;
    }

    VAR_10->tcp_nodelay = VAR_6;

    return VAR_5;
}
