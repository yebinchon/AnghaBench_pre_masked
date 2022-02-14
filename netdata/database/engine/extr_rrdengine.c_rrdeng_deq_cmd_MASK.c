
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t head; size_t tail; struct rrdeng_cmd* cmd_array; } ;
struct rrdengine_worker_config {unsigned int queue_size; int cmd_mutex; int cmd_cond; TYPE_1__ cmd_queue; } ;
struct rrdeng_cmd {int opcode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

struct rrdeng_cmd FUNC_3(struct rrdengine_worker_config* VAR_2)
{
    struct rrdeng_cmd VAR_3;
    unsigned VAR_4;

    FUNC_1(&VAR_2->cmd_mutex);
    VAR_4 = VAR_2->queue_size;
    if (VAR_4 == 0) {
        VAR_3.opcode = VAR_1;
    } else {

        VAR_3 = VAR_2->cmd_queue.cmd_array[VAR_2->cmd_queue.head];
        if (VAR_4 == 1) {
            VAR_2->cmd_queue.head = VAR_2->cmd_queue.tail = 0;
        } else {
            VAR_2->cmd_queue.head = VAR_2->cmd_queue.head != VAR_0 - 1 ?
                                 VAR_2->cmd_queue.head + 1 : 0;
        }
        VAR_2->queue_size = VAR_4 - 1;


        FUNC_0(&VAR_2->cmd_cond);
    }
    FUNC_2(&VAR_2->cmd_mutex);

    return VAR_3;
}
