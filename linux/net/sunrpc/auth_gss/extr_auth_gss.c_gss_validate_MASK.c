
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct xdr_stream {int dummy; } ;
struct xdr_netobj {scalar_t__ len; int * data; } ;
struct xdr_buf {int dummy; } ;
struct rpc_task {TYPE_1__* tk_rqstp; } ;
struct rpc_cred {TYPE_2__* cr_auth; int cr_flags; } ;
struct kvec {int iov_len; int * iov_base; } ;
struct gss_cl_ctx {int gc_gss_ctx; } ;
typedef int __be32 ;
struct TYPE_4__ {scalar_t__ au_verfsize; } ;
struct TYPE_3__ {int rq_seqno; struct rpc_cred* rq_cred; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ) ;
 struct gss_cl_ctx* FUNC_4 (struct rpc_cred*) ;
 int FUNC_5 (struct gss_cl_ctx*) ;
 scalar_t__ FUNC_6 (int ,struct xdr_buf*,struct xdr_netobj*) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (int,int ) ;
 scalar_t__ VAR_6 ;
 int FUNC_9 (struct rpc_task*,scalar_t__) ;
 int FUNC_10 (struct kvec*,struct xdr_buf*) ;
 int * FUNC_11 (struct xdr_stream*,scalar_t__) ;

__attribute__((used)) static int
FUNC_12(struct rpc_task *VAR_7, struct xdr_stream *VAR_8)
{
 struct rpc_cred *VAR_9 = VAR_7->tk_rqstp->rq_cred;
 struct gss_cl_ctx *VAR_10 = FUNC_4(VAR_9);
 __be32 *VAR_11, *VAR_12 = ((void*)0);
 struct kvec VAR_13;
 struct xdr_buf VAR_14;
 struct xdr_netobj VAR_15;
 u32 VAR_16, VAR_17;
 int VAR_18;

 VAR_11 = FUNC_11(VAR_8, 2 * sizeof(*VAR_11));
 if (!VAR_11)
  goto validate_failed;
 if (*VAR_11++ != VAR_6)
  goto validate_failed;
 VAR_16 = FUNC_1(VAR_11);
 if (VAR_16 > VAR_5)
  goto validate_failed;
 VAR_11 = FUNC_11(VAR_8, VAR_16);
 if (!VAR_11)
  goto validate_failed;

 VAR_12 = FUNC_8(4, VAR_2);
 if (!VAR_12)
  goto validate_failed;
 *VAR_12 = FUNC_3(VAR_7->tk_rqstp->rq_seqno);
 VAR_13.iov_base = VAR_12;
 VAR_13.iov_len = 4;
 FUNC_10(&VAR_13, &VAR_14);
 VAR_15.data = (u8 *)VAR_11;
 VAR_15.len = VAR_16;
 VAR_17 = FUNC_6(VAR_10->gc_gss_ctx, &VAR_14, &VAR_15);
 if (VAR_17 == VAR_3)
  FUNC_2(VAR_4, &VAR_9->cr_flags);
 if (VAR_17)
  goto bad_mic;



 VAR_9->cr_auth->au_verfsize = FUNC_0(VAR_16) + 2;
 VAR_18 = 0;
out:
 FUNC_5(VAR_10);
 FUNC_7(VAR_12);
 return VAR_18;

validate_failed:
 VAR_18 = -VAR_1;
 goto out;
bad_mic:
 FUNC_9(VAR_7, VAR_17);
 VAR_18 = -VAR_0;
 goto out;
}
