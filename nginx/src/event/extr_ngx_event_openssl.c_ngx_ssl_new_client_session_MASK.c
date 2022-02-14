
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ngx_ssl_session_t ;
typedef int ngx_ssl_conn_t ;
struct TYPE_6__ {TYPE_1__* ssl; } ;
typedef TYPE_2__ ngx_connection_t ;
struct TYPE_5__ {int * session; int (* save_session ) (TYPE_2__*) ;} ;


 TYPE_2__* FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static int
FUNC_2(ngx_ssl_conn_t *VAR_0, ngx_ssl_session_t *VAR_1)
{
    ngx_connection_t *VAR_2;

    VAR_2 = FUNC_0(VAR_0);

    if (VAR_2->ssl->save_session) {
        VAR_2->ssl->session = VAR_1;

        VAR_2->ssl->save_session(VAR_2);

        VAR_2->ssl->session = ((void*)0);
    }

    return 0;
}
