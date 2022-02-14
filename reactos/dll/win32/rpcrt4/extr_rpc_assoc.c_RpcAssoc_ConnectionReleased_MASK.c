
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ assoc_group_id; int connection_cnt; } ;
typedef TYPE_1__ RpcAssoc ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (char*,TYPE_1__*) ;

void FUNC_2(RpcAssoc *VAR_0)
{
    if (FUNC_0(&VAR_0->connection_cnt))
        return;

    FUNC_1("Last %p connection released\n", VAR_0);
    VAR_0->assoc_group_id = 0;
}
