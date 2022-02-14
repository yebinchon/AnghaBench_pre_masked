
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int thread; } ;
struct rrdengine_instance {TYPE_1__ worker_config; } ;
struct rrdeng_cmd {int opcode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 struct rrdengine_instance VAR_2 ;
 int FUNC_1 (struct rrdengine_instance*) ;
 int FUNC_2 (struct rrdengine_instance*) ;
 int FUNC_3 (struct rrdengine_instance*) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (TYPE_1__*,struct rrdeng_cmd*) ;
 int VAR_3 ;
 scalar_t__ FUNC_6 (int *) ;

int FUNC_7(struct rrdengine_instance *VAR_4)
{
    struct rrdeng_cmd VAR_5;

    if (((void*)0) == VAR_4) {
        return 1;
    }


    VAR_5.opcode = VAR_1;
    FUNC_5(&VAR_4->worker_config, &VAR_5);

    FUNC_0(0 == FUNC_6(&VAR_4->worker_config.thread));

    FUNC_1(VAR_4);
    FUNC_2(VAR_4);

    if (VAR_4 != &VAR_2) {
        FUNC_3(VAR_4);
    }
    FUNC_4(&VAR_3, -VAR_0);
    return 0;
}
