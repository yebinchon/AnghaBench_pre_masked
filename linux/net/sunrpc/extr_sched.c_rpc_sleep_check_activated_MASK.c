
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_task {int tk_status; } ;


 int VAR_0 ;
 int FUNC_0 (struct rpc_task*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct rpc_task*) ;

__attribute__((used)) static bool FUNC_3(struct rpc_task *VAR_1)
{

 if (FUNC_1(!FUNC_0(VAR_1))) {
  VAR_1->tk_status = -VAR_0;
  FUNC_2(VAR_1);
  return 0;
 }
 return 1;
}
