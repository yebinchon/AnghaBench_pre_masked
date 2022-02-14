
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * res_pipe; } ;
typedef TYPE_1__ SeafWTMonitor ;


 int FUNC_0 (int ,int*,int) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void
FUNC_2 (SeafWTMonitor *VAR_0, int VAR_1)
{
    int VAR_2;

    VAR_2 = FUNC_0 (VAR_0->res_pipe[1], &VAR_1, sizeof(int));
    if (VAR_2 != sizeof(int))
        FUNC_1 ("[wt mon] fail to write command result.\n");
}
