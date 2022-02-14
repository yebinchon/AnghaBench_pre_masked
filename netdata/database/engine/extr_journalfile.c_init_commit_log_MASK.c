
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int transaction_id; scalar_t__ buf_pos; int * buf; } ;
struct rrdengine_instance {TYPE_1__ commit_log; } ;



void FUNC_0(struct rrdengine_instance *VAR_0)
{
    VAR_0->commit_log.buf = ((void*)0);
    VAR_0->commit_log.buf_pos = 0;
    VAR_0->commit_log.transaction_id = 1;
}
