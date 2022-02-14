
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mp_cmd {int dummy; } ;
struct cmd_queue {int dummy; } ;
struct input_ctx {TYPE_1__* opts; struct cmd_queue cmd_queue; } ;
struct TYPE_2__ {scalar_t__ key_fifo_size; } ;


 scalar_t__ FUNC_0 (struct cmd_queue*) ;

__attribute__((used)) static bool FUNC_1(struct input_ctx *VAR_0, struct mp_cmd *VAR_1)
{
    struct cmd_queue *VAR_2 = &VAR_0->cmd_queue;
    return FUNC_0(VAR_2) >= VAR_0->opts->key_fifo_size;
}
