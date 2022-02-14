
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpcsec_gss_info {int service; int qop; int oid; } ;
struct gss_api_mech {int dummy; } ;
typedef int rpc_authflavor_t ;


 int VAR_0 ;
 struct gss_api_mech* FUNC_0 (int *) ;
 int FUNC_1 (struct gss_api_mech*) ;
 int FUNC_2 (struct gss_api_mech*,int ,int ) ;

rpc_authflavor_t FUNC_3(struct rpcsec_gss_info *VAR_1)
{
 rpc_authflavor_t VAR_2;
 struct gss_api_mech *VAR_3;

 VAR_3 = FUNC_0(&VAR_1->oid);
 if (VAR_3 == ((void*)0))
  return VAR_0;

 VAR_2 = FUNC_2(VAR_3, VAR_1->qop, VAR_1->service);

 FUNC_1(VAR_3);
 return VAR_2;
}
