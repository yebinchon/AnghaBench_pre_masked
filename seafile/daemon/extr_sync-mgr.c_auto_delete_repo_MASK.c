
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int mq_mgr; int repo_mgr; int sync_mgr; } ;
struct TYPE_9__ {int id; int name; } ;
struct TYPE_8__ {scalar_t__ in_sync; } ;
typedef TYPE_1__ SyncInfo ;
typedef int SeafSyncManager ;
typedef TYPE_2__ SeafRepo ;


 int FUNC_0 (char*) ;
 char* FUNC_1 (int ) ;
 TYPE_6__* VAR_0 ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int ,char*,char*) ;
 int FUNC_4 (int ,TYPE_2__*) ;
 int FUNC_5 (int ,TYPE_2__*) ;
 int FUNC_6 (int ,int ) ;
 TYPE_1__* FUNC_7 (int *,int ) ;

__attribute__((used)) static void
FUNC_8 (SeafSyncManager *VAR_1, SeafRepo *VAR_2)
{
    SyncInfo *VAR_3 = FUNC_7 (VAR_1, VAR_2->id);
    char *VAR_4 = FUNC_1 (VAR_2->name);

    FUNC_2 ("Auto deleted repo '%s'.\n", VAR_2->name);

    FUNC_6 (VAR_0->sync_mgr, VAR_2->id);

    if (VAR_3 != ((void*)0) && VAR_3->in_sync) {
        FUNC_5 (VAR_0->repo_mgr, VAR_2);
    } else {
        FUNC_4 (VAR_0->repo_mgr, VAR_2);
    }


    FUNC_3 (VAR_0->mq_mgr,
                                          "repo.removed",
                                          VAR_4);
    FUNC_0 (VAR_4);
}
