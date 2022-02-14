
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t tail; struct rrdeng_cmd* cmd_array; } ;
struct rrdengine_worker_config {unsigned int queue_size; int async; int cmd_mutex; TYPE_1__ cmd_queue; int cmd_cond; } ;
struct rrdeng_cmd {int dummy; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct rrdengine_worker_config* VAR_1, struct rrdeng_cmd *VAR_2)
{
    unsigned VAR_3;


    FUNC_3(&VAR_1->cmd_mutex);
    while ((VAR_3 = VAR_1->queue_size) == VAR_0) {
        FUNC_2(&VAR_1->cmd_cond, &VAR_1->cmd_mutex);
    }
    FUNC_0(VAR_3 < VAR_0);

    VAR_1->cmd_queue.cmd_array[VAR_1->cmd_queue.tail] = *VAR_2;
    VAR_1->cmd_queue.tail = VAR_1->cmd_queue.tail != VAR_0 - 1 ?
                         VAR_1->cmd_queue.tail + 1 : 0;
    VAR_1->queue_size = VAR_3 + 1;
    FUNC_4(&VAR_1->cmd_mutex);


    FUNC_0(0 == FUNC_1(&VAR_1->async));
}
