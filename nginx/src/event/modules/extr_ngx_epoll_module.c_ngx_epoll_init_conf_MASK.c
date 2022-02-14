
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int aio_requests; int events; } ;
typedef TYPE_1__ ngx_epoll_conf_t ;
typedef int ngx_cycle_t ;


 char* VAR_0 ;
 int FUNC_0 (int ,int) ;

__attribute__((used)) static char *
FUNC_1(ngx_cycle_t *VAR_1, void *VAR_2)
{
    ngx_epoll_conf_t *VAR_3 = VAR_2;

    FUNC_0(VAR_3->events, 512);
    FUNC_0(VAR_3->aio_requests, 32);

    return VAR_0;
}
