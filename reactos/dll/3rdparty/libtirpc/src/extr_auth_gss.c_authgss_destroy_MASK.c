
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_gss_data {scalar_t__ name; } ;
typedef int OM_uint32 ;
typedef struct rpc_gss_data AUTH ;


 struct rpc_gss_data* FUNC_0 (struct rpc_gss_data*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct rpc_gss_data*) ;
 int FUNC_2 (int ,char*,scalar_t__) ;
 int FUNC_3 (struct rpc_gss_data*) ;
 int FUNC_4 (int *,scalar_t__*) ;
 int FUNC_5 (char*) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_6(AUTH *VAR_2)
{
 struct rpc_gss_data *VAR_3;
 OM_uint32 VAR_4;

 FUNC_5("in authgss_destroy()");

 VAR_3 = FUNC_0(VAR_2);

 FUNC_1(VAR_2);




 if (VAR_3->name != VAR_0)
  FUNC_4(&VAR_4, &VAR_3->name);

 FUNC_3(VAR_3);
 FUNC_3(VAR_2);
}
