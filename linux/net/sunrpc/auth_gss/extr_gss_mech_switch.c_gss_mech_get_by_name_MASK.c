
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gss_api_mech {int dummy; } ;


 struct gss_api_mech* FUNC_0 (char const*) ;
 int FUNC_1 (char*,char const*) ;

struct gss_api_mech * FUNC_2(const char *VAR_0)
{
 struct gss_api_mech *VAR_1 = ((void*)0);

 VAR_1 = FUNC_0(VAR_0);
 if (!VAR_1) {
  FUNC_1("rpc-auth-gss-%s", VAR_0);
  VAR_1 = FUNC_0(VAR_0);
 }
 return VAR_1;
}
