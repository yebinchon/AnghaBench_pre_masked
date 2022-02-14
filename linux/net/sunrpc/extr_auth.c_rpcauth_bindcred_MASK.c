
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct rpc_task {scalar_t__ tk_op_cred; TYPE_1__* tk_client; struct rpc_rqst* tk_rqstp; } ;
struct rpc_rqst {struct rpc_cred* rq_cred; } ;
struct rpc_cred {int dummy; } ;
struct rpc_auth {TYPE_2__* au_ops; } ;
struct cred {int dummy; } ;
struct auth_cred {struct cred const* cred; } ;
struct TYPE_6__ {struct rpc_cred* (* lookup_cred ) (int *,int *,int ) ;} ;
struct TYPE_5__ {struct rpc_cred* (* lookup_cred ) (struct rpc_auth*,struct auth_cred*,int) ;} ;
struct TYPE_4__ {struct rpc_auth* cl_auth; } ;


 scalar_t__ FUNC_0 (struct rpc_cred*) ;
 int FUNC_1 (struct rpc_cred*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_3__ VAR_4 ;
 struct rpc_cred* FUNC_2 (scalar_t__) ;
 struct cred const VAR_5 ;
 int FUNC_3 (struct rpc_cred*) ;
 struct rpc_cred* FUNC_4 (struct rpc_task*,int) ;
 struct rpc_cred* FUNC_5 (struct rpc_task*,int) ;
 struct rpc_cred* FUNC_6 (struct rpc_task*,int) ;
 struct rpc_cred* FUNC_7 (struct rpc_auth*,struct auth_cred*,int) ;
 struct rpc_cred* FUNC_8 (int *,int *,int ) ;

__attribute__((used)) static int
FUNC_9(struct rpc_task *VAR_6, const struct cred *VAR_7, int VAR_8)
{
 struct rpc_rqst *VAR_9 = VAR_6->tk_rqstp;
 struct rpc_cred *VAR_10 = ((void*)0);
 int VAR_11 = 0;
 struct rpc_auth *VAR_12 = VAR_6->tk_client->cl_auth;
 struct auth_cred VAR_13 = {
  .cred = VAR_7,
 };

 if (VAR_8 & VAR_1)
  VAR_11 |= VAR_0;
 if (VAR_6->tk_op_cred)

  VAR_10 = FUNC_2(VAR_6->tk_op_cred);
 else if (VAR_7 != ((void*)0) && VAR_7 != &VAR_5)
  VAR_10 = VAR_12->au_ops->lookup_cred(VAR_12, &VAR_13, VAR_11);
 else if (VAR_7 == &VAR_5)
  VAR_10 = FUNC_4(VAR_6, VAR_11);


 if (VAR_10)
  ;
 else if (VAR_7 == &VAR_5 || (VAR_8 & VAR_3))
  VAR_10 = FUNC_6(VAR_6, VAR_11);
 else if (VAR_8 & VAR_2)
  VAR_10 = VAR_4.lookup_cred(((void*)0), ((void*)0), 0);
 else
  VAR_10 = FUNC_5(VAR_6, VAR_11);
 if (FUNC_0(VAR_10))
  return FUNC_1(VAR_10);
 FUNC_3(VAR_9->rq_cred);
 VAR_9->rq_cred = VAR_10;
 return 0;
}
