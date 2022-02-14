
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_xprt {int transport_lock; scalar_t__ snd_task; int pending; int task_cleanup; int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *,scalar_t__,int ) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int ,int *) ;
 int VAR_3 ;

void FUNC_6(struct rpc_xprt *VAR_4)
{

 FUNC_3(&VAR_4->transport_lock);
 FUNC_2(VAR_1, &VAR_4->state);

 if (FUNC_5(VAR_2, &VAR_4->state) == 0)
  FUNC_0(VAR_3, &VAR_4->task_cleanup);
 else if (VAR_4->snd_task)
  FUNC_1(&VAR_4->pending,
    VAR_4->snd_task, -VAR_0);
 FUNC_4(&VAR_4->transport_lock);
}
