
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int gc_svc; } ;
struct TYPE_3__ {int svc; } ;
struct rpc_gss_data {TYPE_2__ gc; TYPE_1__ sec; int established; } ;
typedef int bool_t ;
typedef int AUTH ;


 struct rpc_gss_data* FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*) ;

bool_t
FUNC_2(AUTH *VAR_2, int VAR_3)
{
 struct rpc_gss_data *VAR_4;

 FUNC_1("in authgss_service()");

 if (!VAR_2)
  return(VAR_0);
 VAR_4 = FUNC_0(VAR_2);
 if (!VAR_4 || !VAR_4->established)
  return (VAR_0);
 VAR_4->sec.svc = VAR_3;
 VAR_4->gc.gc_svc = VAR_3;
 return (VAR_1);
}
