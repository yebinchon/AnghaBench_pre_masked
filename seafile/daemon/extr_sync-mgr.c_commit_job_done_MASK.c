
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_8__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct CommitResult {TYPE_2__* task; scalar_t__ changed; int success; } ;
struct TYPE_13__ {int repo_mgr; } ;
struct TYPE_12__ {scalar_t__ delete_pending; } ;
struct TYPE_11__ {scalar_t__ state; scalar_t__ is_initial_commit; scalar_t__ is_manual_sync; TYPE_1__* mgr; TYPE_3__* repo; } ;
struct TYPE_10__ {int commit_job_running; } ;
typedef TYPE_2__ SyncTask ;
typedef TYPE_3__ SeafRepo ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (struct CommitResult*) ;
 TYPE_8__* VAR_5 ;
 int FUNC_2 (int ,TYPE_3__*) ;
 int FUNC_3 (TYPE_2__*,int ) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,int ) ;

__attribute__((used)) static void
FUNC_6 (void *VAR_6)
{
    struct CommitResult *VAR_7 = VAR_6;
    SeafRepo *VAR_8 = VAR_7->task->repo;
    SyncTask *VAR_9 = VAR_7->task;

    VAR_7->task->mgr->commit_job_running = VAR_0;

    if (VAR_8->delete_pending) {
        FUNC_5 (VAR_7->task, VAR_2);
        FUNC_2 (VAR_5->repo_mgr, VAR_8);
        FUNC_1 (VAR_7);
        return;
    }

    if (VAR_7->task->state == VAR_3) {
        FUNC_5 (VAR_7->task, VAR_2);
        FUNC_1 (VAR_7);
        return;
    }

    if (!VAR_7->success) {
        FUNC_3 (VAR_7->task, VAR_1);
        FUNC_1 (VAR_7);
        return;
    }

    if (VAR_7->changed)
        FUNC_4 (VAR_7->task);
    else if (VAR_9->is_manual_sync || VAR_9->is_initial_commit)
        FUNC_0 (VAR_9);
    else
        FUNC_5 (VAR_9, VAR_4);

    FUNC_1 (VAR_7);
}
