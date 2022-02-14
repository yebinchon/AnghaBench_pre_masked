
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * head; } ;
struct svc_rqst {struct auth_ops* rq_authop; int rq_cred; scalar_t__ rq_auth_slack; TYPE_1__ rq_arg; } ;
struct auth_ops {int (* accept ) (struct svc_rqst*,int *) ;} ;
typedef int rpc_authflavor_t ;
typedef int __be32 ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct svc_rqst*,int *) ;
 struct auth_ops* FUNC_3 (int ) ;
 int FUNC_4 (int *) ;

int
FUNC_5(struct svc_rqst *VAR_3, __be32 *VAR_4)
{
 rpc_authflavor_t VAR_5;
 struct auth_ops *VAR_6;

 *VAR_4 = VAR_1;

 VAR_5 = FUNC_4(&VAR_3->rq_arg.head[0]);

 FUNC_0("svc: svc_authenticate (%d)\n", VAR_5);

 VAR_6 = FUNC_3(VAR_5);
 if (VAR_6 == ((void*)0)) {
  *VAR_4 = VAR_2;
  return VAR_0;
 }

 VAR_3->rq_auth_slack = 0;
 FUNC_1(&VAR_3->rq_cred);

 VAR_3->rq_authop = VAR_6;
 return VAR_6->accept(VAR_3, VAR_4);
}
