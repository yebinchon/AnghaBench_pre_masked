
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_12__ ;


struct TYPE_20__ {int commit_id; } ;
struct TYPE_19__ {int id; int name; } ;
struct TYPE_18__ {int head_commit; scalar_t__ deleted_on_relay; scalar_t__ repo_corrupted; int repo_id; } ;
struct TYPE_17__ {TYPE_2__* info; TYPE_3__* repo; } ;
struct TYPE_16__ {int job_mgr; int branch_mgr; } ;
typedef TYPE_1__ SyncTask ;
typedef TYPE_2__ SyncInfo ;
typedef TYPE_3__ SeafRepo ;
typedef TYPE_4__ SeafBranch ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,TYPE_3__*) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;
 TYPE_12__* VAR_5 ;
 TYPE_4__* FUNC_2 (int ,int ,char*) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (int ,int ,int ,TYPE_1__*) ;
 int FUNC_5 (char*,int ,int ) ;
 int FUNC_6 (char*,int ,int ) ;
 int FUNC_7 (TYPE_1__*,int ) ;
 int FUNC_8 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_9 (int ,int ) ;
 int FUNC_10 (TYPE_1__*,int ) ;

__attribute__((used)) static void
FUNC_11 (SyncTask *VAR_6)
{
    SyncInfo *VAR_7 = VAR_6->info;
    SeafRepo *VAR_8 = VAR_6->repo;
    SeafBranch *VAR_9 = ((void*)0), *VAR_10 = ((void*)0);

    VAR_10 = FUNC_2 (
        VAR_5->branch_mgr, VAR_7->repo_id, "local");
    if (!VAR_10) {
        FUNC_6 ("[sync-mgr] Branch local not found for repo %s(%.8s).\n",
                   VAR_8->name, VAR_8->id);
        FUNC_7 (VAR_6, VAR_0);
        return;
    }

    VAR_9 = FUNC_2 (
        VAR_5->branch_mgr, VAR_7->repo_id, "master");
    if (!VAR_9) {
        FUNC_6 ("[sync-mgr] Branch master not found for repo %s(%.8s).\n",
                   VAR_8->name, VAR_8->id);
        FUNC_7 (VAR_6, VAR_0);
        return;
    }

    if (VAR_7->repo_corrupted) {
        FUNC_7 (VAR_6, VAR_1);
    } else if (VAR_7->deleted_on_relay) {
        FUNC_0 (VAR_6, VAR_8);
    } else {

        if (FUNC_9 (VAR_10->commit_id, VAR_7->head_commit) == 0) {



            if (FUNC_1 (VAR_8)) {
                FUNC_5 ("Removing blocks for repo %s(%.8s).\n",
                              VAR_8->name, VAR_8->id);
                FUNC_4 (VAR_5->job_mgr,
                                               VAR_4,
                                               VAR_3,
                                               VAR_6);
            } else
                FUNC_10 (VAR_6, VAR_2);
        } else
            FUNC_8 (VAR_6, VAR_6->info->head_commit);
    }

    FUNC_3 (VAR_10);
    FUNC_3 (VAR_9);
}
