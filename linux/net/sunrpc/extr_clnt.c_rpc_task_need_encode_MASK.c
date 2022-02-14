
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_task {int tk_flags; int tk_runstate; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int *) ;
 scalar_t__ FUNC_1 (struct rpc_task*) ;

__attribute__((used)) static int
FUNC_2(struct rpc_task *VAR_3)
{
 return FUNC_0(VAR_0, &VAR_3->tk_runstate) == 0 &&
  (!(VAR_3->tk_flags & VAR_2) ||
   !(VAR_3->tk_flags & VAR_1) ||
   FUNC_1(VAR_3));
}
