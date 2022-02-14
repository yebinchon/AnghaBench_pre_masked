
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int started; } ;
struct TYPE_7__ {scalar_t__ state; } ;
struct TYPE_6__ {int tasks; } ;
typedef TYPE_1__ SeafCloneManager ;
typedef TYPE_2__ CloneTask ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_2__* FUNC_0 (int ,char const*) ;
 int FUNC_1 (int ,char const*) ;
 TYPE_4__* VAR_2 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;

int
FUNC_4 (SeafCloneManager *VAR_3,
                                const char *VAR_4)
{
    CloneTask *VAR_5;

    if (!VAR_2->started) {
        FUNC_2 ("System not started, skip removing clone task.\n");
        return -1;
    }

    VAR_5 = FUNC_0 (VAR_3->tasks, VAR_4);
    if (!VAR_5)
        return -1;

    if (VAR_5->state != VAR_1 &&
        VAR_5->state != VAR_0) {
        FUNC_3 ("[Clone mgr] cannot remove running task.\n");
        return -1;
    }



    FUNC_1 (VAR_3->tasks, VAR_4);

    return 0;
}
