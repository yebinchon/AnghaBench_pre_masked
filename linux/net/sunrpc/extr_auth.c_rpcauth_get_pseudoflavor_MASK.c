
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpcsec_gss_info {int dummy; } ;
struct rpc_authops {int (* info2flavor ) (struct rpcsec_gss_info*) ;} ;
typedef int rpc_authflavor_t ;


 int VAR_0 ;
 struct rpc_authops* FUNC_0 (int ) ;
 int FUNC_1 (struct rpc_authops const*) ;
 int FUNC_2 (struct rpcsec_gss_info*) ;

rpc_authflavor_t
FUNC_3(rpc_authflavor_t VAR_1, struct rpcsec_gss_info *VAR_2)
{
 const struct rpc_authops *VAR_3 = FUNC_0(VAR_1);
 rpc_authflavor_t VAR_4;

 if (!VAR_3)
  return VAR_0;
 VAR_4 = VAR_1;
 if (VAR_3->info2flavor != ((void*)0))
  VAR_4 = VAR_3->info2flavor(VAR_2);

 FUNC_1(VAR_3);
 return VAR_4;
}
