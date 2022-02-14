
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int (* xdrproc_t ) (int *,int ) ;
struct TYPE_2__ {scalar_t__ svc; int qop; } ;
struct svc_rpc_gss_data {int seq; TYPE_1__ sec; int ctx; int established; } ;
typedef int caddr_t ;
typedef int bool_t ;
typedef int XDR ;
typedef int SVCAUTH ;


 scalar_t__ VAR_0 ;
 struct svc_rpc_gss_data* FUNC_0 (int *) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int (*) (int *,int ),int ,int ,int ,scalar_t__,int ) ;

bool_t
FUNC_4(SVCAUTH *VAR_1, XDR *VAR_2, xdrproc_t VAR_3, caddr_t VAR_4)
{
 struct svc_rpc_gss_data *VAR_5;

 FUNC_1("in svcauth_gss_wrap()");

 VAR_5 = FUNC_0(VAR_1);

 if (!VAR_5->established || VAR_5->sec.svc == VAR_0) {
  return ((*VAR_3)(VAR_2, VAR_4));
 }
 return (FUNC_3(VAR_2, VAR_3, VAR_4,
     VAR_5->ctx, VAR_5->sec.qop,
     VAR_5->sec.svc, VAR_5->seq));
}
