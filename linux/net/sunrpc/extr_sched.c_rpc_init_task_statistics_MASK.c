
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_task {int tk_garb_retry; int tk_cred_retry; int tk_rebind_retry; int tk_start; } ;


 int FUNC_0 () ;

__attribute__((used)) static void
FUNC_1(struct rpc_task *VAR_0)
{

 VAR_0->tk_garb_retry = 2;
 VAR_0->tk_cred_retry = 2;
 VAR_0->tk_rebind_retry = 2;


 VAR_0->tk_start = FUNC_0();
}
