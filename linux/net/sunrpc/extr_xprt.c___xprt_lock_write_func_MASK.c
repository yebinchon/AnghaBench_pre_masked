
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_xprt {struct rpc_task* snd_task; } ;
struct rpc_task {int dummy; } ;



__attribute__((used)) static bool FUNC_0(struct rpc_task *VAR_0, void *VAR_1)
{
 struct rpc_xprt *VAR_2 = VAR_1;

 VAR_2->snd_task = VAR_0;
 return 1;
}
