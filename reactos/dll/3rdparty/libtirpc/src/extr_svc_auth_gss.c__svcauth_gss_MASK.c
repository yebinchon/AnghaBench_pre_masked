
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int xdrproc_t ;
struct svc_rpc_gss_data {int seqlast; int seqmask; int win; int seq; void* established; scalar_t__ ctx; scalar_t__ client_name; } ;
struct TYPE_7__ {int oa_length; int oa_base; } ;
struct svc_req {char* rq_clntname; char* rq_svcname; TYPE_3__* rq_xprt; int rq_proc; TYPE_1__ rq_cred; scalar_t__ rq_clntcred; } ;
struct rpc_msg {int dummy; } ;
struct rpc_gss_init_res {int gr_win; int gr_major; } ;
struct rpc_gss_cred {scalar_t__ gc_v; scalar_t__ gc_svc; scalar_t__ gc_seq; int gc_proc; } ;
typedef enum auth_stat { ____Placeholder_auth_stat } auth_stat ;
typedef scalar_t__ caddr_t ;
typedef int bool_t ;
typedef int XDR ;
struct TYPE_9__ {TYPE_2__* xp_auth; int xp_verf; } ;
struct TYPE_8__ {scalar_t__ svc_ah_private; int * svc_ah_ops; } ;
typedef TYPE_2__ SVCAUTH ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;

 int VAR_7 ;
 int VAR_8 ;



 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_0 (TYPE_2__*) ;
 struct svc_rpc_gss_data* FUNC_1 (TYPE_2__*) ;
 void* VAR_13 ;
 int VAR_14 ;
 int FUNC_2 (int *) ;
 int VAR_15 ;
 int * VAR_16 ;
 void* FUNC_3 (int,int) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (struct rpc_gss_cred*,int ,int) ;
 int VAR_17 ;
 int VAR_18 ;
 TYPE_2__ VAR_19 ;
 int FUNC_8 (TYPE_3__*,int ,scalar_t__) ;
 int FUNC_9 (struct svc_req*,struct rpc_gss_init_res*) ;
 int FUNC_10 () ;
 int FUNC_11 (char*) ;
 int FUNC_12 (struct svc_req*,int ) ;
 int FUNC_13 () ;
 int FUNC_14 (struct svc_rpc_gss_data*,struct rpc_msg*) ;
 int FUNC_15 (int *,struct rpc_gss_cred*) ;
 int VAR_20 ;
 int FUNC_16 (int *,int ,int ,int ) ;

enum auth_stat
FUNC_17(struct svc_req *VAR_21, struct rpc_msg *VAR_22, bool_t *VAR_23)
{
 XDR VAR_24;
 SVCAUTH *VAR_25;
 struct svc_rpc_gss_data *VAR_26;
 struct rpc_gss_cred *VAR_27;
 struct rpc_gss_init_res VAR_28;
 int VAR_29, VAR_30;

 FUNC_6("in svcauth_gss()");


 VAR_21->rq_xprt->xp_verf = VAR_15;


 if (VAR_21->rq_xprt->xp_auth == ((void*)0) ||
     VAR_21->rq_xprt->xp_auth == &VAR_19) {
  if ((VAR_25 = FUNC_3(sizeof(*VAR_25), 1)) == ((void*)0)) {
   FUNC_4(VAR_17, "svcauth_gss: out_of_memory\n");
   return (VAR_1);
  }
  if ((VAR_26 = FUNC_3(sizeof(*VAR_26), 1)) == ((void*)0)) {
   FUNC_4(VAR_17, "svcauth_gss: out_of_memory\n");
   return (VAR_1);
  }
  VAR_25->svc_ah_ops = &VAR_18;
  VAR_25->svc_ah_private = (caddr_t) VAR_26;
  VAR_21->rq_xprt->xp_auth = VAR_25;
 }
 else VAR_26 = FUNC_1(VAR_21->rq_xprt->xp_auth);


 if (VAR_21->rq_cred.oa_length <= 0)
  return (VAR_0);

 VAR_27 = (struct rpc_gss_cred *)VAR_21->rq_clntcred;
 FUNC_7(VAR_27, 0, sizeof(*VAR_27));

 FUNC_16(&VAR_24, VAR_21->rq_cred.oa_base,
        VAR_21->rq_cred.oa_length, VAR_14);

 if (!FUNC_15(&VAR_24, VAR_27)) {
  FUNC_2(&VAR_24);
  return (VAR_0);
 }
 FUNC_2(&VAR_24);


 if (VAR_27->gc_v != VAR_12)
  return (VAR_0);


 if (VAR_27->gc_svc != VAR_10 &&
     VAR_27->gc_svc != VAR_9 &&
     VAR_27->gc_svc != VAR_11)
  return (VAR_0);


 if (VAR_26->established) {
  if (VAR_27->gc_seq > VAR_5)
   return (VAR_8);

  if ((VAR_30 = VAR_26->seqlast - VAR_27->gc_seq) < 0) {
   VAR_26->seqlast = VAR_27->gc_seq;
   VAR_30 = 0 - VAR_30;
   VAR_26->seqmask <<= VAR_30;
   VAR_30 = 0;
  }
  else if (VAR_30 >= VAR_26->win || (VAR_26->seqmask & (1 << VAR_30))) {
   *VAR_23 = 1;
   return (VAR_8);
  }
  VAR_26->seq = VAR_27->gc_seq;
  VAR_26->seqmask |= (1 << VAR_30);
 }

 if (VAR_26->established) {
  VAR_21->rq_clntname = (char *)VAR_26->client_name;
  VAR_21->rq_svcname = (char *)VAR_26->ctx;
 }


 switch (VAR_27->gc_proc) {

 case 128:
 case 131:
  if (VAR_21->rq_proc != VAR_6)
   return (VAR_1);

  if (VAR_16 == ((void*)0)) {
   if (!FUNC_11("nfs"))
    return (VAR_1);
  }

  if (!FUNC_10())
   return (VAR_1);

  if (!FUNC_9(VAR_21, &VAR_28))
   return (VAR_3);

  if (!FUNC_12(VAR_21, FUNC_5(VAR_28.gr_win)))
   return (VAR_1);

  *VAR_23 = VAR_13;

  VAR_29 = FUNC_8(VAR_21->rq_xprt,
   (xdrproc_t)VAR_20, (caddr_t)&VAR_28);

  if (!VAR_29)
   return (VAR_1);

  if (VAR_28.gr_major == VAR_4)
   VAR_26->established = VAR_13;

  break;

 case 130:
  if (!FUNC_14(VAR_26, VAR_22))
   return (VAR_7);

  if (!FUNC_12(VAR_21, FUNC_5(VAR_27->gc_seq)))
   return (VAR_1);
  break;

 case 129:
  if (VAR_21->rq_proc != VAR_6)
   return (VAR_1);

  if (!FUNC_14(VAR_26, VAR_22))
   return (VAR_7);

  if (!FUNC_12(VAR_21, FUNC_5(VAR_27->gc_seq)))
   return (VAR_1);

  if (!FUNC_13())
   return (VAR_1);

  FUNC_0(VAR_21->rq_xprt->xp_auth);
  VAR_21->rq_xprt->xp_auth = &VAR_19;

  break;

 default:
  return (VAR_3);
  break;
 }
 return (VAR_2);
}
