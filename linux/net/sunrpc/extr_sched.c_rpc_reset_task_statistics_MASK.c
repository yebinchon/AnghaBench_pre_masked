
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_task {int tk_flags; scalar_t__ tk_timeouts; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rpc_task*) ;

__attribute__((used)) static void
FUNC_1(struct rpc_task *VAR_2)
{
 VAR_2->tk_timeouts = 0;
 VAR_2->tk_flags &= ~(VAR_0|VAR_1);
 FUNC_0(VAR_2);
}
