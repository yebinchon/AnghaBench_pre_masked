
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_task {int * tk_callback; } ;
typedef int * rpc_action ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct rpc_task *VAR_0, rpc_action VAR_1)
{
 if (VAR_1 && !FUNC_0(VAR_0->tk_callback != ((void*)0)))
  VAR_0->tk_callback = VAR_1;
}
