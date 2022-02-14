
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bool_t ;
typedef scalar_t__ OM_uint32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (scalar_t__*,int ,int ,int ,int ,int *,int *,int *) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,scalar_t__,scalar_t__) ;

__attribute__((used)) static bool_t
FUNC_3(void)
{
 OM_uint32 VAR_7, VAR_8;

 FUNC_1("in svcauth_gss_acquire_cred()");

 VAR_7 = FUNC_0(&VAR_8, VAR_6, 0,
        VAR_2, VAR_1,
        &VAR_5, ((void*)0), ((void*)0));

 if (VAR_7 != VAR_3) {
  FUNC_2("gss_acquire_cred", VAR_7, VAR_8);
  return (VAR_0);
 }
 return (VAR_4);
}
