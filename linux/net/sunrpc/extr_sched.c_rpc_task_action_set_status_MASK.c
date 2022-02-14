
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_task {int tk_status; } ;



__attribute__((used)) static bool FUNC_0(struct rpc_task *VAR_0, void *VAR_1)
{
 VAR_0->tk_status = *(int *)VAR_1;
 return 1;
}
