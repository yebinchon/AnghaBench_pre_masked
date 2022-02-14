
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_int ;
struct TYPE_6__ {TYPE_2__* request; } ;
typedef TYPE_3__ ngx_http_gunzip_ctx_t ;
struct TYPE_5__ {int pool; TYPE_1__* connection; } ;
struct TYPE_4__ {int log; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,char*,int,int) ;
 void* FUNC_1 (int ,int) ;

__attribute__((used)) static void *
FUNC_2(void *VAR_1, u_int VAR_2, u_int VAR_3)
{
    ngx_http_gunzip_ctx_t *VAR_4 = VAR_1;

    FUNC_0(VAR_0, VAR_4->request->connection->log, 0,
                   "gunzip alloc: n:%ud s:%ud",
                   VAR_2, VAR_3);

    return FUNC_1(VAR_4->request->pool, VAR_2 * VAR_3);
}
