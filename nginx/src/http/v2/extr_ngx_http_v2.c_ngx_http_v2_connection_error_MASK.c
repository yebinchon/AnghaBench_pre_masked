
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_char ;
typedef scalar_t__ ngx_uint_t ;
struct TYPE_6__ {TYPE_1__* connection; } ;
typedef TYPE_2__ ngx_http_v2_connection_t ;
struct TYPE_5__ {int log; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (TYPE_2__*,scalar_t__) ;
 int FUNC_2 (int ,int ,int ,char*) ;

__attribute__((used)) static u_char *
FUNC_3(ngx_http_v2_connection_t *VAR_2,
    ngx_uint_t VAR_3)
{
    FUNC_2(VAR_1, VAR_2->connection->log, 0,
                   "http2 state connection error");

    if (VAR_3 == VAR_0) {
        FUNC_0();
    }

    FUNC_1(VAR_2, VAR_3);

    return ((void*)0);
}
