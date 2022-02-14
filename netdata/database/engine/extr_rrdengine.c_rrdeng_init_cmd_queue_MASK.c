
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ tail; scalar_t__ head; } ;
struct rrdengine_worker_config {int cmd_mutex; int cmd_cond; scalar_t__ queue_size; TYPE_1__ cmd_queue; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;

void FUNC_3(struct rrdengine_worker_config* VAR_0)
{
    VAR_0->cmd_queue.head = VAR_0->cmd_queue.tail = 0;
    VAR_0->queue_size = 0;
    FUNC_0(0 == FUNC_1(&VAR_0->cmd_cond));
    FUNC_0(0 == FUNC_2(&VAR_0->cmd_mutex));
}
