
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_xprt {int transport_lock; } ;
struct rpc_task {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct rpc_xprt*,struct rpc_task*,int ) ;

__attribute__((used)) static void FUNC_3(struct rpc_xprt *VAR_1, struct rpc_task *VAR_2)
{
 FUNC_0(&VAR_1->transport_lock);
 FUNC_2(VAR_1, VAR_2, -VAR_0);
 FUNC_1(&VAR_1->transport_lock);
}
