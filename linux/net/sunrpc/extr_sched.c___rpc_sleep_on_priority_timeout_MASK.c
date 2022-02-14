
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_wait_queue {int dummy; } ;
struct rpc_task {int tk_status; } ;


 int VAR_0 ;
 int FUNC_0 (struct rpc_wait_queue*,struct rpc_task*,unsigned long) ;
 int FUNC_1 (struct rpc_wait_queue*,struct rpc_task*,unsigned char) ;
 scalar_t__ FUNC_2 (unsigned long) ;

__attribute__((used)) static void FUNC_3(struct rpc_wait_queue *VAR_1,
  struct rpc_task *VAR_2, unsigned long VAR_3,
  unsigned char VAR_4)
{
 if (FUNC_2(VAR_3)) {
  FUNC_1(VAR_1, VAR_2, VAR_4);
  FUNC_0(VAR_1, VAR_2, VAR_3);
 } else
  VAR_2->tk_status = -VAR_0;
}
