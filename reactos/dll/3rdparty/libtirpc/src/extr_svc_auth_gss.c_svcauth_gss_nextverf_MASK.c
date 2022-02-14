
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ u_int ;
struct TYPE_7__ {int qop; } ;
struct svc_rpc_gss_data {TYPE_1__ sec; int ctx; } ;
struct svc_req {TYPE_3__* rq_xprt; } ;
typedef int num ;
struct TYPE_10__ {int length; scalar_t__* value; } ;
typedef TYPE_4__ gss_buffer_desc ;
typedef scalar_t__ caddr_t ;
typedef int bool_t ;
struct TYPE_8__ {scalar_t__ oa_length; scalar_t__ oa_base; int oa_flavor; } ;
struct TYPE_9__ {TYPE_2__ xp_verf; int * xp_auth; } ;
typedef scalar_t__ OM_uint32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct svc_rpc_gss_data* FUNC_0 (int *) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (scalar_t__*,int ,int ,TYPE_4__*,TYPE_4__*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,scalar_t__,scalar_t__) ;

bool_t
FUNC_4(struct svc_req *VAR_4, u_int VAR_5)
{
 struct svc_rpc_gss_data *VAR_6;
 gss_buffer_desc VAR_7, VAR_8;
 OM_uint32 VAR_9, VAR_10;

 FUNC_2("in svcauth_gss_nextverf()");

 if (VAR_4->rq_xprt->xp_auth == ((void*)0))
  return (VAR_0);

 VAR_6 = FUNC_0(VAR_4->rq_xprt->xp_auth);

 VAR_7.value = &VAR_5;
 VAR_7.length = sizeof(VAR_5);

 VAR_9 = FUNC_1(&VAR_10, VAR_6->ctx, VAR_6->sec.qop,
          &VAR_7, &VAR_8);

 if (VAR_9 != VAR_1) {
  FUNC_3("gss_get_mic", VAR_9, VAR_10);
  return (VAR_0);
 }
 VAR_4->rq_xprt->xp_verf.oa_flavor = VAR_2;
 VAR_4->rq_xprt->xp_verf.oa_base = (caddr_t)VAR_8.value;
 VAR_4->rq_xprt->xp_verf.oa_length = (u_int)VAR_8.length;

 return (VAR_3);
}
