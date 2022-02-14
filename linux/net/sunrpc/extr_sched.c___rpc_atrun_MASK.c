
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_task {int tk_status; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct rpc_task *VAR_1)
{
 if (VAR_1->tk_status == -VAR_0)
  VAR_1->tk_status = 0;
}
