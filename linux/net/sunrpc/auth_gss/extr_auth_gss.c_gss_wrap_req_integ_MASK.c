
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct xdr_stream {int dummy; } ;
struct xdr_netobj {int len; int * data; } ;
struct xdr_buf {scalar_t__ len; TYPE_1__* head; } ;
struct rpc_task {struct rpc_rqst* tk_rqstp; } ;
struct rpc_rqst {scalar_t__ rq_seqno; struct xdr_buf rq_snd_buf; } ;
struct rpc_cred {int cr_flags; } ;
struct gss_cl_ctx {int gc_gss_ctx; } ;
typedef int __be32 ;
struct TYPE_2__ {scalar_t__ iov_base; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int ,struct xdr_buf*,struct xdr_netobj*) ;
 scalar_t__ FUNC_3 (struct rpc_task*,struct xdr_stream*) ;
 int FUNC_4 (struct rpc_task*,scalar_t__) ;
 scalar_t__ FUNC_5 (struct xdr_buf*,struct xdr_buf*,scalar_t__,scalar_t__) ;
 int * FUNC_6 (struct xdr_stream*,int) ;
 scalar_t__ FUNC_7 (struct xdr_stream*,void**,int ) ;

__attribute__((used)) static int FUNC_8(struct rpc_cred *VAR_4, struct gss_cl_ctx *VAR_5,
         struct rpc_task *VAR_6, struct xdr_stream *VAR_7)
{
 struct rpc_rqst *VAR_8 = VAR_6->tk_rqstp;
 struct xdr_buf VAR_9, *VAR_10 = &VAR_8->rq_snd_buf;
 struct xdr_netobj VAR_11;
 __be32 *VAR_12, *VAR_13;
 u32 VAR_14, VAR_15;

 VAR_12 = FUNC_6(VAR_7, 2 * sizeof(*VAR_12));
 if (!VAR_12)
  goto wrap_failed;
 VAR_13 = VAR_12++;
 *VAR_12 = FUNC_1(VAR_8->rq_seqno);

 if (FUNC_3(VAR_6, VAR_7))
  goto wrap_failed;

 VAR_14 = (u8 *)VAR_12 - (u8 *)VAR_10->head[0].iov_base;
 if (FUNC_5(VAR_10, &VAR_9,
    VAR_14, VAR_10->len - VAR_14))
  goto wrap_failed;
 *VAR_13 = FUNC_1(VAR_9.len);

 VAR_12 = FUNC_6(VAR_7, 0);
 if (!VAR_12)
  goto wrap_failed;
 VAR_11.data = (u8 *)(VAR_12 + 1);
 VAR_15 = FUNC_2(VAR_5->gc_gss_ctx, &VAR_9, &VAR_11);
 if (VAR_15 == VAR_2)
  FUNC_0(VAR_3, &VAR_4->cr_flags);
 else if (VAR_15)
  goto bad_mic;

 if (FUNC_7(VAR_7, (void **)&VAR_12, VAR_11.len) < 0)
  goto wrap_failed;
 return 0;
wrap_failed:
 return -VAR_1;
bad_mic:
 FUNC_4(VAR_6, VAR_15);
 return -VAR_0;
}
