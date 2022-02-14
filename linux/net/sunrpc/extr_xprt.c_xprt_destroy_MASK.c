
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_xprt {int task_cleanup; int timer; int state; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,struct rpc_xprt*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,int ) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_5(struct rpc_xprt *VAR_3)
{
 FUNC_2("RPC:       destroying transport %p\n", VAR_3);




 FUNC_4(&VAR_3->state, VAR_1, VAR_0);

 FUNC_1(&VAR_3->timer);





 FUNC_0(&VAR_3->task_cleanup, VAR_2);
 FUNC_3(&VAR_3->task_cleanup);
}
