
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_cmd {struct mp_cmd* queue_next; } ;
struct cmd_queue {struct mp_cmd* first; } ;



__attribute__((used)) static int FUNC_0(struct cmd_queue *VAR_0)
{
    int VAR_1 = 0;
    for (struct mp_cmd *VAR_2 = VAR_0->first; VAR_2; VAR_2 = VAR_2->queue_next)
        VAR_1++;
    return VAR_1;
}
