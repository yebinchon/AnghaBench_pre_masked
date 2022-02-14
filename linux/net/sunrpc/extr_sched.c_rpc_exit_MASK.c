
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_task {int tk_status; int tk_waitqueue; int tk_action; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct rpc_task*) ;

void FUNC_1(struct rpc_task *VAR_1, int VAR_2)
{
 VAR_1->tk_status = VAR_2;
 VAR_1->tk_action = VAR_0;
 FUNC_0(VAR_1->tk_waitqueue, VAR_1);
}
