
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_wait_queue {int dummy; } ;
struct rpc_task {int tk_pid; } ;


 int FUNC_0 (struct rpc_wait_queue*,struct rpc_task*,unsigned char) ;
 int FUNC_1 (char*,int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_2 (struct rpc_wait_queue*) ;
 int FUNC_3 (struct rpc_task*,struct rpc_wait_queue*) ;

__attribute__((used)) static void FUNC_4(struct rpc_wait_queue *VAR_1,
  struct rpc_task *VAR_2,
  unsigned char VAR_3)
{
 FUNC_1("RPC: %5u sleep_on(queue \"%s\" time %lu)\n",
   VAR_2->tk_pid, FUNC_2(VAR_1), VAR_0);

 FUNC_3(VAR_2, VAR_1);

 FUNC_0(VAR_1, VAR_2, VAR_3);

}
