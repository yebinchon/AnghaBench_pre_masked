
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int gss_name_t ;
struct TYPE_3__ {char* value; int length; } ;
typedef TYPE_1__ gss_buffer_desc ;
typedef int gss_OID ;
typedef scalar_t__ bool_t ;
typedef scalar_t__ OM_uint32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__*,TYPE_1__*,int ,int *) ;
 int FUNC_1 (scalar_t__*,int *) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,scalar_t__,scalar_t__) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static bool_t
FUNC_6(char *VAR_4)
{
 gss_name_t VAR_5;
 gss_buffer_desc VAR_6;
 OM_uint32 VAR_7, VAR_8;

 FUNC_2("in svcauth_gss_import_name()");

 VAR_6.value = VAR_4;
 VAR_6.length = FUNC_4(VAR_4);

 VAR_7 = FUNC_0(&VAR_8, &VAR_6,
       (gss_OID)VAR_1, &VAR_5);

 if (VAR_7 != VAR_2) {
  FUNC_3("gss_import_name", VAR_7, VAR_8);
  return (VAR_0);
 }
 if (FUNC_5(VAR_5) != VAR_3) {
  FUNC_1(&VAR_8, &VAR_5);
  return (VAR_0);
 }
 return (VAR_3);
}
