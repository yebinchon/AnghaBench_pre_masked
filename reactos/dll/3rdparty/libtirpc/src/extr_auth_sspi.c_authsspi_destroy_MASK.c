
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_sspi_data {scalar_t__ name; struct rpc_sspi_data* sec; int cred; } ;
typedef struct rpc_sspi_data AUTH ;


 struct rpc_sspi_data* FUNC_0 (struct rpc_sspi_data*) ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (struct rpc_sspi_data*) ;
 int FUNC_3 (struct rpc_sspi_data*) ;
 int FUNC_4 (int *,scalar_t__*) ;
 int FUNC_5 (char*) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_6(AUTH *VAR_2)
{
 struct rpc_sspi_data *VAR_3;

 FUNC_5("in authgss_destroy()");

 VAR_3 = FUNC_0(VAR_2);
    if (VAR_3 == ((void*)0)) return;

 FUNC_2(VAR_2);





    FUNC_3(VAR_3->name);

    FUNC_1(&VAR_3->sec->cred);
    FUNC_3(VAR_3->sec);
 FUNC_3(VAR_3);
 FUNC_3(VAR_2);
}
