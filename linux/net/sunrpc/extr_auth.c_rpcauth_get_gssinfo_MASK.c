
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpcsec_gss_info {int dummy; } ;
struct rpc_authops {int (* flavor2info ) (int ,struct rpcsec_gss_info*) ;} ;
typedef int rpc_authflavor_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct rpc_authops* FUNC_1 (int ) ;
 int FUNC_2 (struct rpc_authops const*) ;
 int FUNC_3 (int ,struct rpcsec_gss_info*) ;

int
FUNC_4(rpc_authflavor_t VAR_1, struct rpcsec_gss_info *VAR_2)
{
 rpc_authflavor_t VAR_3 = FUNC_0(VAR_1);
 const struct rpc_authops *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_1(VAR_3);
 if (VAR_4 == ((void*)0))
  return -VAR_0;

 VAR_5 = -VAR_0;
 if (VAR_4->flavor2info != ((void*)0))
  VAR_5 = VAR_4->flavor2info(VAR_1, VAR_2);

 FUNC_2(VAR_4);
 return VAR_5;
}
