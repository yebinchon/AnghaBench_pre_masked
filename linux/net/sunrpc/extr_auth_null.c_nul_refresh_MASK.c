
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rpc_task {TYPE_2__* tk_rqstp; } ;
struct TYPE_4__ {TYPE_1__* rq_cred; } ;
struct TYPE_3__ {int cr_flags; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;

__attribute__((used)) static int
FUNC_1(struct rpc_task *VAR_1)
{
 FUNC_0(VAR_0, &VAR_1->tk_rqstp->rq_cred->cr_flags);
 return 0;
}
