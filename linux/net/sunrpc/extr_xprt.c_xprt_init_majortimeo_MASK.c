
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rpc_xprt {int dummy; } ;
struct rpc_task {TYPE_2__* tk_client; int tk_start; } ;
struct rpc_rqst {scalar_t__ rq_majortimeo; int rq_timeout; struct rpc_xprt* rq_xprt; } ;
struct TYPE_4__ {TYPE_1__* cl_timeout; } ;
struct TYPE_3__ {int to_initval; } ;


 unsigned long VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 unsigned long FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct rpc_rqst*) ;
 scalar_t__ FUNC_3 (struct rpc_xprt*) ;

__attribute__((used)) static void FUNC_4(struct rpc_task *VAR_1, struct rpc_rqst *VAR_2)
{
 unsigned long VAR_3;
 struct rpc_xprt *VAR_4 = VAR_2->rq_xprt;

 if (FUNC_0(VAR_4 && FUNC_3(VAR_4)))
  VAR_3 = VAR_0;
 else
  VAR_3 = FUNC_1(VAR_1->tk_start);
 VAR_2->rq_timeout = VAR_1->tk_client->cl_timeout->to_initval;
 VAR_2->rq_majortimeo = VAR_3 + FUNC_2(VAR_2);
}
