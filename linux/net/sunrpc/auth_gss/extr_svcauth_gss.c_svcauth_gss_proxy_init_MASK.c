
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef int ud ;
typedef int u8 ;
struct xdr_netobj {int len; int * data; } ;
struct TYPE_2__ {struct kvec* head; } ;
struct svc_rqst {TYPE_1__ rq_res; } ;
struct sunrpc_net {int rsc_cache; } ;
struct rpc_gss_wire_cred {int dummy; } ;
struct net {int dummy; } ;
struct kvec {int dummy; } ;
struct gssp_upcall_data {int major_status; int minor_status; int out_token; struct xdr_netobj out_handle; int in_token; int in_handle; } ;
typedef int handle ;
typedef int __be32 ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct net* FUNC_0 (struct svc_rqst*) ;
 int FUNC_1 (char*,int,int ) ;
 int FUNC_2 (int ,struct gssp_upcall_data*,int *) ;
 int FUNC_3 (struct svc_rqst*,struct rpc_gss_wire_cred*,int *,int *,int *) ;
 scalar_t__ FUNC_4 (int ,struct svc_rqst*,struct xdr_netobj*,int*) ;
 scalar_t__ FUNC_5 (struct kvec*,int ,struct xdr_netobj*,int *,int,int ) ;
 int FUNC_6 (struct net*,struct gssp_upcall_data*) ;
 int FUNC_7 (struct gssp_upcall_data*) ;
 int FUNC_8 (struct gssp_upcall_data*,int ,int) ;
 struct sunrpc_net* FUNC_9 (struct net*,int ) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_10(struct svc_rqst *VAR_4,
   struct rpc_gss_wire_cred *VAR_5, __be32 *VAR_6)
{
 struct kvec *VAR_7 = &VAR_4->rq_res.head[0];
 struct xdr_netobj VAR_8;
 struct gssp_upcall_data VAR_9;
 uint64_t VAR_10;
 int VAR_11;
 int VAR_12;
 struct net *VAR_13 = FUNC_0(VAR_4);
 struct sunrpc_net *VAR_14 = FUNC_9(VAR_13, VAR_3);

 FUNC_8(&VAR_9, 0, sizeof(VAR_9));
 VAR_12 = FUNC_3(VAR_4, VAR_5, VAR_6,
      &VAR_9.in_handle, &VAR_9.in_token);
 if (VAR_12)
  return VAR_12;

 VAR_12 = VAR_1;


 VAR_11 = FUNC_6(VAR_13, &VAR_9);
 if (VAR_11)
  goto out;

 FUNC_1("RPC:       svcauth_gss: gss major status = %d "
   "minor status = %d\n",
   VAR_9.major_status, VAR_9.minor_status);

 switch (VAR_9.major_status) {
 case 128:
  VAR_8 = VAR_9.out_handle;
  break;
 case 129:
  VAR_11 = FUNC_2(VAR_14->rsc_cache, &VAR_9, &VAR_10);
  if (VAR_11)
   goto out;
  VAR_8.data = (u8 *)&VAR_10;
  VAR_8.len = sizeof(VAR_10);
  break;
 default:
  VAR_12 = VAR_1;
  goto out;
 }


 if (FUNC_4(VAR_14->rsc_cache, VAR_4,
    &VAR_8, &VAR_9.major_status))
  goto out;
 if (FUNC_5(VAR_7, VAR_0,
      &VAR_8, &VAR_9.out_token,
      VAR_9.major_status, VAR_9.minor_status))
  goto out;

 VAR_12 = VAR_2;
out:
 FUNC_7(&VAR_9);
 return VAR_12;
}
