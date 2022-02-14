
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_task {scalar_t__ tk_status; int tk_xprt; int tk_runstate; int tk_action; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct rpc_task*) ;
 int FUNC_1 (struct rpc_task*) ;
 scalar_t__ FUNC_2 (struct rpc_task*) ;
 scalar_t__ FUNC_3 (int ,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct rpc_task*) ;
 int FUNC_6 (struct rpc_task*) ;
 int FUNC_7 (struct rpc_task*) ;

__attribute__((used)) static void
FUNC_8(struct rpc_task *VAR_3)
{
 if (FUNC_2(VAR_3)) {
  FUNC_1(VAR_3);
  return;
 }

 FUNC_0(VAR_3);

 VAR_3->tk_action = VAR_2;
 if (!FUNC_6(VAR_3))
  return;
 VAR_3->tk_status = 0;
 if (FUNC_3(VAR_1, &VAR_3->tk_runstate)) {
  if (!FUNC_4(VAR_3->tk_xprt)) {
   VAR_3->tk_status = -VAR_0;
   return;
  }
  FUNC_7(VAR_3);
 }
 FUNC_5(VAR_3);
}
