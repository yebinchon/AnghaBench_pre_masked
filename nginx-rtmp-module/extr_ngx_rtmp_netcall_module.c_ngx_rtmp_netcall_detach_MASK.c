
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int detached; } ;
typedef TYPE_1__ ngx_rtmp_netcall_session_t ;
struct TYPE_5__ {TYPE_1__* data; } ;
typedef TYPE_2__ ngx_connection_t ;



__attribute__((used)) static void
FUNC_0(ngx_connection_t *VAR_0)
{
    ngx_rtmp_netcall_session_t *VAR_1;

    VAR_1 = VAR_0->data;
    VAR_1->detached = 1;
}
