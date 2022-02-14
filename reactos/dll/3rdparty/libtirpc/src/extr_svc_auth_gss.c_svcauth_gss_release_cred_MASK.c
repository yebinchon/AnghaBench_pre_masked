
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bool_t ;
typedef scalar_t__ OM_uint32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__*,int **) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,scalar_t__,scalar_t__) ;

__attribute__((used)) static bool_t
FUNC_3(void)
{
 OM_uint32 VAR_4, VAR_5;

 FUNC_1("in svcauth_gss_release_cred()");

 VAR_4 = FUNC_0(&VAR_5, &VAR_3);

 if (VAR_4 != VAR_1) {
  FUNC_2("gss_release_cred", VAR_4, VAR_5);
  return (VAR_0);
 }

 VAR_3 = ((void*)0);

 return (VAR_2);
}
