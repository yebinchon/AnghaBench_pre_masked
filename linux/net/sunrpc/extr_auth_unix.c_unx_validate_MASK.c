
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct xdr_stream {int dummy; } ;
struct rpc_task {TYPE_2__* tk_rqstp; } ;
struct rpc_auth {void* au_ralign; void* au_rslack; void* au_verfsize; } ;
typedef int __be32 ;
struct TYPE_4__ {TYPE_1__* rq_cred; } ;
struct TYPE_3__ {struct rpc_auth* cr_auth; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int *) ;



 int * FUNC_2 (struct xdr_stream*,int) ;

__attribute__((used)) static int
FUNC_3(struct rpc_task *VAR_2, struct xdr_stream *VAR_3)
{
 struct rpc_auth *VAR_4 = VAR_2->tk_rqstp->rq_cred->cr_auth;
 __be32 *VAR_5;
 u32 VAR_6;

 VAR_5 = FUNC_2(VAR_3, 2 * sizeof(*VAR_5));
 if (!VAR_5)
  return -VAR_0;
 switch (*VAR_5++) {
 case 130:
 case 128:
 case 129:
  break;
 default:
  return -VAR_0;
 }
 VAR_6 = FUNC_1(VAR_5);
 if (VAR_6 > VAR_1)
  return -VAR_0;
 VAR_5 = FUNC_2(VAR_3, VAR_6);
 if (!VAR_5)
  return -VAR_0;

 VAR_4->au_verfsize = FUNC_0(VAR_6) + 2;
 VAR_4->au_rslack = FUNC_0(VAR_6) + 2;
 VAR_4->au_ralign = FUNC_0(VAR_6) + 2;
 return 0;
}
