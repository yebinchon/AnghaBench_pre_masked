
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ngx_pool_t ;
struct TYPE_4__ {int * pool; int log; } ;
typedef TYPE_1__ ngx_connection_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,int ,char*) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_4(ngx_connection_t *VAR_2)
{
    ngx_pool_t *VAR_3;

    FUNC_3(VAR_0, VAR_2->log, 0, "close connection");





    VAR_3 = VAR_2->pool;
    FUNC_1(VAR_2);
    FUNC_2(VAR_3);
}
