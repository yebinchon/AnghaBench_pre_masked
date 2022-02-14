
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_wait_queue {int priority; unsigned int nr; } ;



__attribute__((used)) static void FUNC_0(struct rpc_wait_queue *VAR_0, int VAR_1)
{
 if (VAR_0->priority != VAR_1) {
  VAR_0->priority = VAR_1;
  VAR_0->nr = 1U << VAR_1;
 }
}
