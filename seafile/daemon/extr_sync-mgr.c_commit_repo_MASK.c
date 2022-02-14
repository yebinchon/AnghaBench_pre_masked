
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int job_mgr; } ;
struct TYPE_10__ {TYPE_1__* mgr; int commit_timer; } ;
struct TYPE_9__ {scalar_t__ commit_job_running; } ;
typedef TYPE_2__ SyncTask ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_7__* VAR_6 ;
 scalar_t__ FUNC_0 (int ,int ,int ,TYPE_2__*) ;
 int FUNC_1 (int ,TYPE_2__*,int) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (TYPE_2__*,int ) ;

__attribute__((used)) static void
FUNC_4 (SyncTask *VAR_7)
{



    if (VAR_7->mgr->commit_job_running) {
        VAR_7->commit_timer = FUNC_1 (VAR_3, VAR_7, 1000);
        return;
    }

    VAR_7->mgr->commit_job_running = VAR_2;

    FUNC_3 (VAR_7, VAR_1);

    if (FUNC_0 (VAR_6->job_mgr,
                                       VAR_4,
                                       VAR_5,
                                       VAR_7) < 0)
        FUNC_2 (VAR_7, VAR_0);
}
