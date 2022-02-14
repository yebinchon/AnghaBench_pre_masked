
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int count; TYPE_1__* connection; } ;
typedef TYPE_2__ ngx_http_request_t ;
struct TYPE_5__ {int log; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (int ,int ,int ,char*,int) ;

__attribute__((used)) static void
FUNC_2(ngx_http_request_t *VAR_1)
{
    FUNC_1(VAR_0, VAR_1->connection->log, 0,
                   "http terminate handler count:%d", VAR_1->count);

    VAR_1->count = 1;

    FUNC_0(VAR_1, 0);
}
