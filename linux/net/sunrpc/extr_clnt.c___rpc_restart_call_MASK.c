
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_task {void (* tk_action ) (struct rpc_task*) ;scalar_t__ tk_rpc_status; scalar_t__ tk_status; } ;



__attribute__((used)) static int
FUNC_0(struct rpc_task *VAR_0, void (*VAR_1)(struct rpc_task *))
{
 VAR_0->tk_status = 0;
 VAR_0->tk_rpc_status = 0;
 VAR_0->tk_action = VAR_1;
 return 1;
}
