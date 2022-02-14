
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct rpc_gss_sec {int dummy; } ;
typedef scalar_t__ gss_name_t ;
struct TYPE_4__ {char* value; int length; } ;
typedef TYPE_1__ gss_buffer_desc ;
typedef int gss_OID ;
struct TYPE_5__ {int cf_stat; } ;
typedef scalar_t__ OM_uint32 ;
typedef int CLIENT ;
typedef int AUTH ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int * FUNC_0 (int *,scalar_t__,struct rpc_gss_sec*) ;
 int FUNC_1 (int ,char*,scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__*,TYPE_1__*,int ,scalar_t__*) ;
 int FUNC_3 (scalar_t__*,scalar_t__*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,scalar_t__,scalar_t__) ;
 TYPE_2__ VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (char*) ;

AUTH *
FUNC_7(CLIENT *VAR_6, char *VAR_7, struct rpc_gss_sec *VAR_8)
{
 AUTH *VAR_9;
 OM_uint32 VAR_10 = 0, VAR_11 = 0;
 gss_buffer_desc VAR_12;
 gss_name_t VAR_13 = VAR_0;

 FUNC_4("in authgss_create_default()");


 VAR_12.value = VAR_7;
 VAR_12.length = FUNC_6(VAR_7);

 VAR_10 = FUNC_2(&VAR_11, &VAR_12,
  (gss_OID)VAR_1,
  &VAR_13);

 if (VAR_10 != VAR_2) {
  FUNC_5("gss_import_name", VAR_10, VAR_11);
  VAR_4.cf_stat = VAR_3;
  return (((void*)0));
 }

 VAR_9 = FUNC_0(VAR_6, VAR_13, VAR_8);

 if (VAR_13 != VAR_0) {



   FUNC_3(&VAR_11, &VAR_13);
 }

 return (VAR_9);
}
