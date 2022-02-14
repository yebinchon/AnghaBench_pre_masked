
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_11__ {int cr_flavor; int cr_group_info; } ;
struct TYPE_12__ {struct kvec* head; } ;
struct TYPE_10__ {struct kvec* head; } ;
struct svc_rqst {scalar_t__ rq_proc; int rq_auth_slack; TYPE_2__ rq_cred; TYPE_3__ rq_arg; struct gss_svc_data* rq_auth_data; TYPE_1__ rq_res; } ;
struct sunrpc_net {int rsc_cache; } ;
struct rsc {int h; TYPE_4__* mechctx; TYPE_2__ cred; } ;
struct TYPE_14__ {int len; } ;
struct rpc_gss_wire_cred {int gc_proc; scalar_t__ gc_svc; scalar_t__ gc_seq; TYPE_7__ gc_ctx; } ;
struct kvec {int iov_len; int * iov_base; } ;
struct gss_svc_data {struct rsc* rsci; int * verf_start; struct rpc_gss_wire_cred clcred; } ;
typedef int __be32 ;
struct TYPE_13__ {int mech_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;







 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;


 int VAR_8 ;
 int FUNC_0 (struct svc_rqst*) ;

 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (int ) ;
 struct rsc* FUNC_5 (int ,TYPE_7__*) ;
 int FUNC_6 (int ,int ,scalar_t__) ;
 int FUNC_7 (struct svc_rqst*,struct rsc*,int *,struct rpc_gss_wire_cred*,int *) ;
 int FUNC_8 (struct svc_rqst*,TYPE_4__*,scalar_t__) ;
 struct gss_svc_data* FUNC_9 (int,int ) ;
 struct sunrpc_net* FUNC_10 (int ,int ) ;
 scalar_t__ FUNC_11 (int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_12 (int ,int *) ;
 int VAR_14 ;
 scalar_t__ FUNC_13 (struct kvec*) ;
 int FUNC_14 (struct kvec*,int ) ;
 scalar_t__ FUNC_15 (struct kvec*,TYPE_7__*) ;
 int FUNC_16 (struct svc_rqst*,struct rpc_gss_wire_cred*,int *) ;
 int FUNC_17 (struct svc_rqst*,struct rpc_gss_wire_cred*,int *) ;
 int FUNC_18 (struct svc_rqst*,TYPE_3__*,scalar_t__,TYPE_4__*) ;
 int FUNC_19 (struct svc_rqst*,TYPE_3__*,scalar_t__,TYPE_4__*) ;
 int FUNC_20 (int ) ;
 int FUNC_21 (struct svc_rqst*,int *) ;

__attribute__((used)) static int
FUNC_22(struct svc_rqst *VAR_15, __be32 *VAR_16)
{
 struct kvec *VAR_17 = &VAR_15->rq_arg.head[0];
 struct kvec *VAR_18 = &VAR_15->rq_res.head[0];
 u32 VAR_19;
 struct gss_svc_data *VAR_20 = VAR_15->rq_auth_data;
 struct rpc_gss_wire_cred *VAR_21;
 struct rsc *VAR_22 = ((void*)0);
 __be32 *VAR_23;
 __be32 *VAR_24 = VAR_18->iov_base + VAR_18->iov_len;
 int VAR_25;
 struct sunrpc_net *VAR_26 = FUNC_10(FUNC_0(VAR_15), VAR_14);

 FUNC_3("RPC:       svcauth_gss: argv->iov_len = %zd\n",
   VAR_17->iov_len);

 *VAR_16 = VAR_9;
 if (!VAR_20)
  VAR_20 = FUNC_9(sizeof(*VAR_20), VAR_0);
 if (!VAR_20)
  goto auth_err;
 VAR_15->rq_auth_data = VAR_20;
 VAR_20->verf_start = ((void*)0);
 VAR_20->rsci = ((void*)0);
 VAR_21 = &VAR_20->clcred;




 VAR_23 = VAR_17->iov_base;
 VAR_23 -= 7;






 if (VAR_17->iov_len < 5 * 4)
  goto auth_err;
 VAR_19 = FUNC_13(VAR_17);
 if (FUNC_13(VAR_17) != VAR_3)
  goto auth_err;
 VAR_21->gc_proc = FUNC_13(VAR_17);
 VAR_21->gc_seq = FUNC_13(VAR_17);
 VAR_21->gc_svc = FUNC_13(VAR_17);
 if (FUNC_15(VAR_17, &VAR_21->gc_ctx))
  goto auth_err;
 if (VAR_19 != FUNC_11(VAR_21->gc_ctx.len) + 5 * 4)
  goto auth_err;

 if ((VAR_21->gc_proc != 136) && (VAR_15->rq_proc != 0))
  goto auth_err;

 *VAR_16 = VAR_10;
 switch (VAR_21->gc_proc) {
 case 134:
 case 137:
  if (FUNC_20(FUNC_0(VAR_15)))
   return FUNC_17(VAR_15, VAR_21, VAR_16);
  else
   return FUNC_16(VAR_15, VAR_21, VAR_16);
 case 136:
 case 135:

  *VAR_16 = VAR_12;
  VAR_22 = FUNC_5(VAR_26->rsc_cache, &VAR_21->gc_ctx);
  if (!VAR_22)
   goto auth_err;
  switch (FUNC_7(VAR_15, VAR_22, VAR_23, VAR_21, VAR_16)) {
  case 128:
   break;
  case 130:
   goto auth_err;
  case 129:
   goto drop;
  }
  break;
 default:
  *VAR_16 = VAR_11;
  goto auth_err;
 }


 switch (VAR_21->gc_proc) {
 case 135:
  if (FUNC_8(VAR_15, VAR_22->mechctx, VAR_21->gc_seq))
   goto auth_err;

  FUNC_12(VAR_26->rsc_cache, &VAR_22->h);
  if (VAR_18->iov_len + 4 > VAR_2)
   goto drop;
  FUNC_14(VAR_18, VAR_5);
  goto complete;
 case 136:
  *VAR_16 = VAR_13;
  VAR_20->verf_start = VAR_18->iov_base + VAR_18->iov_len;
  if (FUNC_8(VAR_15, VAR_22->mechctx, VAR_21->gc_seq))
   goto auth_err;
  VAR_15->rq_cred = VAR_22->cred;
  FUNC_4(VAR_22->cred.cr_group_info);
  *VAR_16 = VAR_9;
  switch (VAR_21->gc_svc) {
  case 132:
   break;
  case 133:

   FUNC_14(VAR_18, 0);
   FUNC_14(VAR_18, 0);
   if (FUNC_18(VAR_15, &VAR_15->rq_arg,
     VAR_21->gc_seq, VAR_22->mechctx))
    goto garbage_args;
   VAR_15->rq_auth_slack = VAR_4;
   break;
  case 131:

   FUNC_14(VAR_18, 0);
   FUNC_14(VAR_18, 0);
   if (FUNC_19(VAR_15, &VAR_15->rq_arg,
     VAR_21->gc_seq, VAR_22->mechctx))
    goto garbage_args;
   VAR_15->rq_auth_slack = VAR_4 * 2;
   break;
  default:
   goto auth_err;
  }
  VAR_20->rsci = VAR_22;
  FUNC_1(&VAR_22->h);
  VAR_15->rq_cred.cr_flavor = FUNC_6(
     VAR_22->mechctx->mech_type,
     VAR_1,
     VAR_21->gc_svc);
  VAR_25 = 128;
  goto out;
 }
garbage_args:
 VAR_25 = VAR_8;
 goto out;
auth_err:

 FUNC_21(VAR_15, VAR_24);
 VAR_25 = 130;
 goto out;
complete:
 VAR_25 = VAR_7;
 goto out;
drop:
 VAR_25 = VAR_6;
out:
 if (VAR_22)
  FUNC_2(&VAR_22->h, VAR_26->rsc_cache);
 return VAR_25;
}
