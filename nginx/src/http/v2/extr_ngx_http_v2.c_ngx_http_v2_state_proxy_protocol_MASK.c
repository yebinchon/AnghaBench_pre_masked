
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_7__ {char* action; } ;
typedef TYPE_1__ ngx_log_t ;
struct TYPE_8__ {TYPE_3__* connection; } ;
typedef TYPE_2__ ngx_http_v2_connection_t ;
struct TYPE_9__ {TYPE_1__* log; } ;


 int VAR_0 ;
 int * FUNC_0 (TYPE_2__*,int ) ;
 int * FUNC_1 (TYPE_2__*,int *,int *) ;
 int * FUNC_2 (TYPE_3__*,int *,int *) ;

__attribute__((used)) static u_char *
FUNC_3(ngx_http_v2_connection_t *VAR_1, u_char *VAR_2,
    u_char *VAR_3)
{
    ngx_log_t *VAR_4;

    VAR_4 = VAR_1->connection->log;
    VAR_4->action = "reading PROXY protocol";

    VAR_2 = FUNC_2(VAR_1->connection, VAR_2, VAR_3);

    VAR_4->action = "processing HTTP/2 connection";

    if (VAR_2 == ((void*)0)) {
        return FUNC_0(VAR_1, VAR_0);
    }

    return FUNC_1(VAR_1, VAR_2, VAR_3);
}
