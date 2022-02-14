
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct svc_xprt {int xpt_mutex; int xpt_flags; } ;
struct rpc_rqst {TYPE_1__* rq_xprt; int rq_xid; } ;
struct TYPE_2__ {struct svc_xprt* bc_xprt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rpc_rqst*) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ,int *) ;

__attribute__((used)) static int FUNC_6(struct rpc_rqst *VAR_2)
{
 struct svc_xprt *VAR_3;
 int VAR_4;

 FUNC_1("sending request with xid: %08x\n", FUNC_4(VAR_2->rq_xid));



 VAR_3 = VAR_2->rq_xprt->bc_xprt;





 FUNC_2(&VAR_3->xpt_mutex);
 if (FUNC_5(VAR_1, &VAR_3->xpt_flags))
  VAR_4 = -VAR_0;
 else
  VAR_4 = FUNC_0(VAR_2);
 FUNC_3(&VAR_3->xpt_mutex);

 if (VAR_4 > 0)
  VAR_4 = 0;

 return VAR_4;
}
