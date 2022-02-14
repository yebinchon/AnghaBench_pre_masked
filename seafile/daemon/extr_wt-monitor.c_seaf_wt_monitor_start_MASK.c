
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int job_func; TYPE_1__* seaf; int res_pipe; int cmd_pipe; } ;
struct TYPE_5__ {int job_mgr; } ;
typedef TYPE_2__ SeafWTMonitor ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,int *,TYPE_2__*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int ) ;

int
FUNC_4 (SeafWTMonitor *VAR_1)
{
    if (FUNC_1 (VAR_1->cmd_pipe) < 0) {
        FUNC_2 ("[wt mon] failed to create command pipe: %s.\n",
                      FUNC_3(VAR_0));
        return -1;
    }

    if (FUNC_1 (VAR_1->res_pipe) < 0) {
        FUNC_2 ("[wt mon] failed to create result pipe: %s.\n",
                      FUNC_3(VAR_0));
        return -1;
    }

    if (FUNC_0 (VAR_1->seaf->job_mgr,
                                       VAR_1->job_func,
                                       ((void*)0), VAR_1) < 0) {
        FUNC_2 ("[wt mon] failed to start monitor thread.\n");
        return -1;
    }

    return 0;
}
