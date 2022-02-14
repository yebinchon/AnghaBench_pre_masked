
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct gss_api_mech {int dummy; } ;


 struct gss_api_mech* FUNC_0 (int ) ;
 int FUNC_1 (char*,int ) ;

struct gss_api_mech *
FUNC_2(u32 VAR_0)
{
 struct gss_api_mech *VAR_1;

 VAR_1 = FUNC_0(VAR_0);

 if (!VAR_1) {
  FUNC_1("rpc-auth-gss-%u", VAR_0);
  VAR_1 = FUNC_0(VAR_0);
 }
 return VAR_1;
}
