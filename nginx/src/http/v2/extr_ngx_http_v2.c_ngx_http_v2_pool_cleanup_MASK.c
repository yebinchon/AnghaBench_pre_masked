
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ pool; } ;
struct TYPE_4__ {scalar_t__ pool; TYPE_1__ state; } ;
typedef TYPE_2__ ngx_http_v2_connection_t ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static void
FUNC_1(void *VAR_0)
{
    ngx_http_v2_connection_t *VAR_1 = VAR_0;

    if (VAR_1->state.pool) {
        FUNC_0(VAR_1->state.pool);
    }

    if (VAR_1->pool) {
        FUNC_0(VAR_1->pool);
    }
}
