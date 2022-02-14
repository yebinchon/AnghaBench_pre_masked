
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_cmd {struct mp_cmd* queue_next; } ;
struct cmd_queue {struct mp_cmd* first; } ;



__attribute__((used)) static struct mp_cmd *FUNC_0(struct cmd_queue *VAR_0)
{
    struct mp_cmd *VAR_1 = VAR_0->first;
    while (VAR_1 && VAR_1->queue_next)
        VAR_1 = VAR_1->queue_next;
    return VAR_1;
}
