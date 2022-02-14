
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ gboolean ;
struct TYPE_13__ {int repo_mgr; int branch_mgr; } ;
struct TYPE_12__ {char* commit_id; } ;
struct TYPE_11__ {int last_sync_time; int server_url; int name; int id; } ;
typedef int SyncTask ;
typedef int SeafSyncManager ;
typedef TYPE_1__ SeafRepo ;
typedef TYPE_2__ SeafBranch ;


 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,TYPE_1__*,scalar_t__) ;
 int * FUNC_4 (int *,TYPE_1__*,scalar_t__,int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int *,TYPE_1__*,char*) ;
 TYPE_6__* VAR_3 ;
 TYPE_2__* FUNC_7 (int ,int ,char*) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (char*,int ,int ) ;
 char* FUNC_10 (int ,int ,int ) ;
 int FUNC_11 (char*,int ,int ) ;
 int FUNC_12 (int *,char*) ;
 int FUNC_13 (int *) ;
 scalar_t__ FUNC_14 (char*,char*) ;
 int FUNC_15 (int *) ;

__attribute__((used)) static int
FUNC_16 (SeafSyncManager *VAR_4, SeafRepo *VAR_5, gboolean VAR_6)
{
    SeafBranch *VAR_7, *VAR_8;
    SyncTask *VAR_9;
    int VAR_10 = 0;
    char *VAR_11 = ((void*)0);

    VAR_7 = FUNC_7 (VAR_3->branch_mgr, VAR_5->id, "master");
    if (!VAR_7) {
        FUNC_11 ("No master branch found for repo %s(%.8s).\n",
                      VAR_5->name, VAR_5->id);
        return -1;
    }
    VAR_8 = FUNC_7 (VAR_3->branch_mgr, VAR_5->id, "local");
    if (!VAR_8) {
        FUNC_11 ("No local branch found for repo %s(%.8s).\n",
                      VAR_5->name, VAR_5->id);
        return -1;
    }




    VAR_11 = FUNC_10 (VAR_3->repo_mgr,
                                                         VAR_5->id,
                                                         VAR_2);
    if (VAR_11 && FUNC_14 (VAR_11, VAR_0) != 0) {
        if (VAR_6 || FUNC_0 (VAR_4, VAR_5)) {
            VAR_9 = FUNC_4 (VAR_4, VAR_5, VAR_6, VAR_1);
            FUNC_12 (VAR_9, VAR_11);
        }
        goto out;
    }

    if (FUNC_14 (VAR_7->commit_id, VAR_8->commit_id) != 0) {
        if (VAR_6 || FUNC_0 (VAR_4, VAR_5)) {
            VAR_9 = FUNC_4 (VAR_4, VAR_5, VAR_6, VAR_1);
            FUNC_13 (VAR_9);
        }



        goto out;
    } else if (VAR_6) {
        VAR_9 = FUNC_4 (VAR_4, VAR_5, VAR_6, VAR_1);
        FUNC_2 (VAR_9);
        goto out;
    } else if (FUNC_3 (VAR_4, VAR_5, VAR_6))
        goto out;

    if (VAR_6 || FUNC_0 (VAR_4, VAR_5)) {



        if (!VAR_6 && !FUNC_6 (VAR_4, VAR_5, VAR_7->commit_id)) {
            FUNC_9 ("Repo %s is not changed on server %s.\n", VAR_5->name, VAR_5->server_url);
            VAR_5->last_sync_time = FUNC_15(((void*)0));
            goto out;
        }

        VAR_9 = FUNC_4 (VAR_4, VAR_5, VAR_6, VAR_1);
        FUNC_1 (VAR_9);
    }

out:
    FUNC_5 (VAR_11);
    FUNC_8 (VAR_7);
    FUNC_8 (VAR_8);
    return VAR_10;
}
