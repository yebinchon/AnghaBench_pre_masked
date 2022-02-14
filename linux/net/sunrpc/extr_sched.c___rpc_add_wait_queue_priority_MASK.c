
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_wait_queue {unsigned char maxpriority; int * tasks; } ;
struct rpc_task {int dummy; } ;


 int FUNC_0 (int *,struct rpc_task*) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(struct rpc_wait_queue *VAR_0,
  struct rpc_task *VAR_1,
  unsigned char VAR_2)
{
 if (FUNC_1(VAR_2 > VAR_0->maxpriority))
  VAR_2 = VAR_0->maxpriority;
 FUNC_0(&VAR_0->tasks[VAR_2], VAR_1);
}
