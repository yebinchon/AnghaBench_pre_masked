
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xdr_buf {int len; } ;
struct TYPE_3__ {int * cr_group_info; } ;
struct svc_rqst {TYPE_1__ rq_cred; int * rq_gssclient; int * rq_client; struct xdr_buf rq_res; scalar_t__ rq_auth_data; } ;
struct sunrpc_net {int rsc_cache; } ;
struct rpc_gss_wire_cred {scalar_t__ gc_proc; int gc_svc; } ;
struct gss_svc_data {TYPE_2__* rsci; int * verf_start; struct rpc_gss_wire_cred clcred; } ;
struct TYPE_4__ {int h; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;



 int FUNC_0 (struct svc_rqst*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 struct sunrpc_net* FUNC_3 (int ,int ) ;
 int FUNC_4 (int *) ;
 int VAR_2 ;
 int FUNC_5 (struct svc_rqst*) ;
 int FUNC_6 (struct svc_rqst*) ;
 int FUNC_7 (struct xdr_buf*) ;

__attribute__((used)) static int
FUNC_8(struct svc_rqst *VAR_3)
{
 struct gss_svc_data *VAR_4 = (struct gss_svc_data *)VAR_3->rq_auth_data;
 struct rpc_gss_wire_cred *VAR_5 = &VAR_4->clcred;
 struct xdr_buf *VAR_6 = &VAR_3->rq_res;
 int VAR_7 = -VAR_0;
 struct sunrpc_net *VAR_8 = FUNC_3(FUNC_0(VAR_3), VAR_2);

 if (VAR_5->gc_proc != VAR_1)
  goto out;

 if (VAR_4->verf_start == ((void*)0))
  goto out;



 VAR_6->len = FUNC_7(VAR_6);
 switch (VAR_5->gc_svc) {
 case 129:
  break;
 case 130:
  VAR_7 = FUNC_5(VAR_3);
  if (VAR_7)
   goto out_err;
  break;
 case 128:
  VAR_7 = FUNC_6(VAR_3);
  if (VAR_7)
   goto out_err;
  break;




 }

out:
 VAR_7 = 0;
out_err:
 if (VAR_3->rq_client)
  FUNC_1(VAR_3->rq_client);
 VAR_3->rq_client = ((void*)0);
 if (VAR_3->rq_gssclient)
  FUNC_1(VAR_3->rq_gssclient);
 VAR_3->rq_gssclient = ((void*)0);
 if (VAR_3->rq_cred.cr_group_info)
  FUNC_4(VAR_3->rq_cred.cr_group_info);
 VAR_3->rq_cred.cr_group_info = ((void*)0);
 if (VAR_4->rsci)
  FUNC_2(&VAR_4->rsci->h, VAR_8->rsc_cache);
 VAR_4->rsci = ((void*)0);

 return VAR_7;
}
