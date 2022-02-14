
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct rpc_task {struct rpc_rqst* tk_rqstp; } ;
struct rpc_rqst {int rq_seqno; struct rpc_cred* rq_cred; } ;
struct rpc_cred {int dummy; } ;
struct gss_cl_ctx {scalar_t__ gc_win; int gc_seq_xmit; int gc_seq; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *,scalar_t__,int ) ;
 struct gss_cl_ctx* FUNC_2 (struct rpc_cred*) ;
 int FUNC_3 (struct gss_cl_ctx*) ;
 scalar_t__ FUNC_4 (int ,scalar_t__) ;
 int FUNC_5 (struct rpc_task*,scalar_t__,int) ;

__attribute__((used)) static bool
FUNC_6(struct rpc_task *VAR_0)
{
 struct rpc_rqst *VAR_1 = VAR_0->tk_rqstp;
 struct rpc_cred *VAR_2 = VAR_1->rq_cred;
 struct gss_cl_ctx *VAR_3 = FUNC_2(VAR_2);
 u32 VAR_4, VAR_5 = 0;
 bool VAR_6 = 1;

 if (!VAR_3)
  goto out;

 if (FUNC_4(VAR_1->rq_seqno, FUNC_0(VAR_3->gc_seq)))
  goto out_ctx;

 VAR_5 = FUNC_0(VAR_3->gc_seq_xmit);
 while (FUNC_4(VAR_1->rq_seqno, VAR_5)) {
  u32 VAR_7 = VAR_5;

  VAR_5 = FUNC_1(&VAR_3->gc_seq_xmit, VAR_7, VAR_1->rq_seqno);
  if (VAR_5 == VAR_7) {
   VAR_6 = 0;
   goto out_ctx;
  }
 }

 VAR_4 = VAR_3->gc_win;
 if (VAR_4 > 0)
  VAR_6 = !FUNC_4(VAR_1->rq_seqno, VAR_5 - VAR_4);

out_ctx:
 FUNC_3(VAR_3);
out:
 FUNC_5(VAR_0, VAR_5, VAR_6);
 return VAR_6;
}
