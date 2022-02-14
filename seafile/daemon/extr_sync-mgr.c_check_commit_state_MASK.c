
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int commit_timer; TYPE_1__* mgr; } ;
struct TYPE_4__ {int commit_job_running; } ;
typedef TYPE_2__ SyncTask ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int
FUNC_2 (void *VAR_0)
{
    SyncTask *VAR_1 = VAR_0;

    if (!VAR_1->mgr->commit_job_running) {
        FUNC_1 (&VAR_1->commit_timer);
        FUNC_0 (VAR_1);
        return 0;
    }

    return 1;
}
