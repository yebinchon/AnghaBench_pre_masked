
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int head_commit; int is_corrupt; int is_deleted; int error_code; int check_success; } ;
struct TYPE_8__ {int head_commit; int repo_corrupted; int deleted_on_relay; } ;
struct TYPE_7__ {TYPE_2__* info; } ;
typedef TYPE_1__ SyncTask ;
typedef TYPE_2__ SyncInfo ;
typedef TYPE_3__ HttpHeadCommit ;


 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_3 (HttpHeadCommit *VAR_0, void *VAR_1)
{
    SyncTask *VAR_2 = VAR_1;
    SyncInfo *VAR_3 = VAR_2->info;

    if (!VAR_0->check_success) {
        FUNC_1 (VAR_2, VAR_0->error_code);
        return;
    }

    VAR_3->deleted_on_relay = VAR_0->is_deleted;
    VAR_3->repo_corrupted = VAR_0->is_corrupt;
    FUNC_0 (VAR_3->head_commit, VAR_0->head_commit, 40);

    FUNC_2 (VAR_2);
}
