
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int (* xdrproc_t ) (int *,int ) ;
typedef int u_int ;
struct rpc_sspi_data {TYPE_1__* sec; int ctx; int established; } ;
typedef int caddr_t ;
typedef int bool_t ;
typedef int XDR ;
struct TYPE_2__ {scalar_t__ svc; int qop; } ;
typedef int AUTH ;


 struct rpc_sspi_data* FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int (*) (int *,int ),int ,int *,int ,scalar_t__,int ) ;

bool_t
FUNC_4(AUTH *VAR_1, XDR *VAR_2, xdrproc_t VAR_3, caddr_t VAR_4, u_int VAR_5)
{
 struct rpc_sspi_data *VAR_6;

 FUNC_1("in authgss_unwrap()");

 VAR_6 = FUNC_0(VAR_1);

 if (!VAR_6->established || VAR_6->sec->svc == VAR_0) {
  return ((*VAR_3)(VAR_2, VAR_4));
 }
 return (FUNC_3(VAR_2, VAR_3, VAR_4,
     &VAR_6->ctx, VAR_6->sec->qop,
     VAR_6->sec->svc, VAR_5));
}
