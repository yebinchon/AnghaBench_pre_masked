
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_task {struct rpc_rqst* tk_rqstp; } ;
struct rpc_rqst {int rq_rbuffer; int rq_buffer; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(struct rpc_task *VAR_0)
{
 struct rpc_rqst *VAR_1 = VAR_0->tk_rqstp;

 FUNC_1(FUNC_2(VAR_1->rq_buffer));
 FUNC_0(VAR_1->rq_rbuffer);
}
