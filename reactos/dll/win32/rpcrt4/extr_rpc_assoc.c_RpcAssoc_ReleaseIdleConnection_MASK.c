
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int cs; int free_connection_pool; scalar_t__ assoc_group_id; } ;
struct TYPE_5__ {int conn_pool_entry; scalar_t__ assoc_group_id; int * async_state; int server; } ;
typedef TYPE_1__ RpcConnection ;
typedef TYPE_2__ RpcAssoc ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,int *) ;

void FUNC_4(RpcAssoc *VAR_0, RpcConnection *VAR_1)
{
    FUNC_2(!VAR_1->server);
    VAR_1->async_state = ((void*)0);
    FUNC_0(&VAR_0->cs);
    if (!VAR_0->assoc_group_id) VAR_0->assoc_group_id = VAR_1->assoc_group_id;
    FUNC_3(&VAR_0->free_connection_pool, &VAR_1->conn_pool_entry);
    FUNC_1(&VAR_0->cs);
}
