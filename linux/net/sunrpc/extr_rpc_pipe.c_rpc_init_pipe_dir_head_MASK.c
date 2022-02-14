
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_pipe_dir_head {int * pdh_dentry; int pdh_entries; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct rpc_pipe_dir_head *VAR_0)
{
 FUNC_0(&VAR_0->pdh_entries);
 VAR_0->pdh_dentry = ((void*)0);
}
