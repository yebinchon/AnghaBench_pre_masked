
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ngx_ssl_session_t ;
struct TYPE_5__ {TYPE_1__* ssl; } ;
typedef TYPE_2__ ngx_connection_t ;
struct TYPE_4__ {int connection; int * session; } ;


 int * FUNC_0 (int ) ;

ngx_ssl_session_t *
FUNC_1(ngx_connection_t *VAR_0)
{
    if (VAR_0->ssl->session) {
        return VAR_0->ssl->session;
    }

    return FUNC_0(VAR_0->ssl->connection);
}
