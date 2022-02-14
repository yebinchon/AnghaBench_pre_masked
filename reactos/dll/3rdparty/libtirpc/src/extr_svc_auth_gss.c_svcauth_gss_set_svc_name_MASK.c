
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int gss_name_t ;
typedef int bool_t ;
typedef scalar_t__ OM_uint32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__*,int ,int **) ;
 scalar_t__ FUNC_1 (scalar_t__*,int **) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,scalar_t__,scalar_t__) ;

bool_t
FUNC_4(gss_name_t VAR_4)
{
 OM_uint32 VAR_5, VAR_6;

 FUNC_2("in svcauth_gss_set_svc_name()");

 if (VAR_3 != ((void*)0)) {
  VAR_5 = FUNC_1(&VAR_6, &VAR_3);

  if (VAR_5 != VAR_1) {
   FUNC_3("gss_release_name", VAR_5, VAR_6);
   return (VAR_0);
  }
  VAR_3 = ((void*)0);
 }
 VAR_5 = FUNC_0(&VAR_6, VAR_4, &VAR_3);

 if (VAR_5 != VAR_1) {
  FUNC_3("gss_duplicate_name", VAR_5, VAR_6);
  return (VAR_0);
 }

 return (VAR_2);
}
