
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int lock; } ;
typedef TYPE_1__ wait_queue_head_t ;
struct wait_bit_key {int dummy; } ;
struct rpc_task {int tk_count; int tk_runstate; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct wait_bit_key FUNC_0 (void*,int ) ;
 int FUNC_1 (TYPE_1__*,int ,struct wait_bit_key*) ;
 int FUNC_2 (int *) ;
 TYPE_1__* FUNC_3 (void*,int ) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (struct rpc_task*,int *) ;
 scalar_t__ FUNC_8 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_9(struct rpc_task *VAR_2)
{
 void *VAR_3 = &VAR_2->tk_runstate;
 wait_queue_head_t *VAR_4 = FUNC_3(VAR_3, VAR_0);
 struct wait_bit_key VAR_5 = FUNC_0(VAR_3, VAR_0);
 unsigned long VAR_6;
 int VAR_7;

 FUNC_7(VAR_2, ((void*)0));

 FUNC_5(&VAR_4->lock, VAR_6);
 FUNC_4(VAR_0, &VAR_2->tk_runstate);
 VAR_7 = FUNC_2(&VAR_2->tk_count);
 if (FUNC_8(VAR_4))
  FUNC_1(VAR_4, VAR_1, &VAR_5);
 FUNC_6(&VAR_4->lock, VAR_6);
 return VAR_7;
}
