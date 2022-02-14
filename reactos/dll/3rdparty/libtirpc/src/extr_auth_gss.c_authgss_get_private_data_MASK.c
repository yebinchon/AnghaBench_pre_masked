
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int gc_ctx; } ;
struct rpc_gss_data {int win; TYPE_1__ gc; int ctx; int established; } ;
struct authgss_private_data {int pd_seq_win; int pd_ctx_hndl; int pd_ctx; } ;
typedef int bool_t ;
typedef int AUTH ;


 struct rpc_gss_data* FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*) ;

bool_t
FUNC_2(AUTH *VAR_2, struct authgss_private_data *VAR_3)
{
 struct rpc_gss_data *VAR_4;

 FUNC_1("in authgss_get_private_data()");

 if (!VAR_2 || !VAR_3)
  return (VAR_0);

 VAR_4 = FUNC_0(VAR_2);

 if (!VAR_4 || !VAR_4->established)
  return (VAR_0);

 VAR_3->pd_ctx = VAR_4->ctx;
 VAR_3->pd_ctx_hndl = VAR_4->gc.gc_ctx;
 VAR_3->pd_seq_win = VAR_4->win;

 return (VAR_1);
}
