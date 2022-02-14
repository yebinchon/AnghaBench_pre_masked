
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct xdr_stream {int dummy; } ;
struct user_namespace {int dummy; } ;
struct rpc_task {TYPE_1__* tk_rqstp; struct rpc_clnt* tk_client; } ;
struct rpc_cred {TYPE_3__* cr_cred; } ;
struct rpc_clnt {int cl_nodelen; int cl_nodename; TYPE_2__* cl_cred; } ;
struct group_info {int ngroups; int * gid; } ;
typedef void* __be32 ;
struct TYPE_6__ {int fsgid; int fsuid; struct group_info* group_info; } ;
struct TYPE_5__ {struct user_namespace* user_ns; } ;
struct TYPE_4__ {struct rpc_cred* rq_cred; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (struct user_namespace*,int ) ;
 int FUNC_2 (struct user_namespace*,int ) ;
 struct user_namespace VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void** FUNC_3 (struct xdr_stream*,int) ;
 scalar_t__ FUNC_4 (struct xdr_stream*,int ,int ) ;
 void* VAR_5 ;

__attribute__((used)) static int
FUNC_5(struct rpc_task *VAR_6, struct xdr_stream *VAR_7)
{
 struct rpc_clnt *VAR_8 = VAR_6->tk_client;
 struct rpc_cred *VAR_9 = VAR_6->tk_rqstp->rq_cred;
 __be32 *VAR_10, *VAR_11, *VAR_12;
 int VAR_13;
 struct group_info *VAR_14 = VAR_9->cr_cred->group_info;
 struct user_namespace *VAR_15 = VAR_8->cl_cred ?
  VAR_8->cl_cred->user_ns : &VAR_2;



 VAR_10 = FUNC_3(VAR_7, 3 * sizeof(*VAR_10));
 if (!VAR_10)
  goto marshal_failed;
 *VAR_10++ = VAR_4;
 VAR_11 = VAR_10++;
 *VAR_10++ = VAR_5;
 if (FUNC_4(VAR_7, VAR_8->cl_nodename,
         VAR_8->cl_nodelen) < 0)
  goto marshal_failed;
 VAR_10 = FUNC_3(VAR_7, 3 * sizeof(*VAR_10));
 if (!VAR_10)
  goto marshal_failed;
 *VAR_10++ = FUNC_0(FUNC_2(VAR_15, VAR_9->cr_cred->fsuid));
 *VAR_10++ = FUNC_0(FUNC_1(VAR_15, VAR_9->cr_cred->fsgid));

 VAR_12 = VAR_10++;
 if (VAR_14)
  for (VAR_13 = 0; VAR_13 < VAR_1 && VAR_13 < VAR_14->ngroups; VAR_13++)
   *VAR_10++ = FUNC_0(FUNC_1(VAR_15, VAR_14->gid[VAR_13]));
 *VAR_12 = FUNC_0(VAR_10 - VAR_12 - 1);
 *VAR_11 = FUNC_0((VAR_10 - VAR_11 - 1) << 2);
 VAR_10 = FUNC_3(VAR_7, (VAR_10 - VAR_12 - 1) << 2);
 if (!VAR_10)
  goto marshal_failed;



 VAR_10 = FUNC_3(VAR_7, 2 * sizeof(*VAR_10));
 if (!VAR_10)
  goto marshal_failed;
 *VAR_10++ = VAR_3;
 *VAR_10 = VAR_5;

 return 0;

marshal_failed:
 return -VAR_0;
}
