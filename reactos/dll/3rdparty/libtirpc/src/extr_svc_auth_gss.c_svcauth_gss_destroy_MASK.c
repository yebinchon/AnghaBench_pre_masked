
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_rpc_gss_data {scalar_t__ client_name; int cname; int ctx; } ;
typedef int bool_t ;
typedef struct svc_rpc_gss_data SVCAUTH ;
typedef int OM_uint32 ;


 int VAR_0 ;
 struct svc_rpc_gss_data* FUNC_0 (struct svc_rpc_gss_data*) ;
 int VAR_1 ;
 int FUNC_1 (int *,int *,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,scalar_t__*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (struct svc_rpc_gss_data*,int) ;

bool_t
FUNC_6(SVCAUTH *VAR_2)
{
 struct svc_rpc_gss_data *VAR_3;
 OM_uint32 VAR_4;

 FUNC_4("in svcauth_gss_destroy()");

 VAR_3 = FUNC_0(VAR_2);

 FUNC_1(&VAR_4, &VAR_3->ctx, VAR_0);
 FUNC_2(&VAR_4, &VAR_3->cname);

 if (VAR_3->client_name)
  FUNC_3(&VAR_4, &VAR_3->client_name);

 FUNC_5(VAR_3, sizeof(*VAR_3));
 FUNC_5(VAR_2, sizeof(*VAR_2));

 return (VAR_1);
}
