
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_xprt {int backlog; int state; } ;
struct rpc_task {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct rpc_task*,int *) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static void FUNC_2(struct rpc_xprt *VAR_1, struct rpc_task *VAR_2)
{
 FUNC_1(VAR_0, &VAR_1->state);
 FUNC_0(&VAR_1->backlog, VAR_2, ((void*)0));
}
