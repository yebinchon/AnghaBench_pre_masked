
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int fs_mgr; int commit_mgr; } ;
struct TYPE_6__ {char const* root_id; int commit_id; scalar_t__ second_parent_id; int version; int repo_id; scalar_t__ parent_id; } ;
typedef TYPE_1__ SeafCommit ;
typedef int GError ;


 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int **,int ,int ,char*) ;
 int FUNC_2 (char*,scalar_t__) ;
 int FUNC_3 (char*,int ,int) ;
 TYPE_4__* VAR_3 ;
 TYPE_1__* FUNC_4 (int ,int ,int ,scalar_t__) ;
 int FUNC_5 (TYPE_1__*) ;
 char* FUNC_6 (int ,char const*,int,char const*,char const*,int *,int **) ;
 scalar_t__ FUNC_7 (char const*,char*) ;

__attribute__((used)) static int
FUNC_8 (SeafCommit *VAR_4,
                        const char *VAR_5,
                        const char *VAR_6,
                        int VAR_7,
                        const char *VAR_8,
                        const char *VAR_9,
                        char *VAR_10,
                        GError **VAR_11)
{
    SeafCommit *VAR_12 = ((void*)0), *VAR_13 = ((void*)0);
    char *VAR_14 = ((void*)0), *VAR_15 = ((void*)0);
    int VAR_16 = 0;

    VAR_12 = FUNC_4 (VAR_3->commit_mgr,
                                         VAR_4->repo_id,
                                         VAR_4->version,
                                         VAR_4->parent_id);
    if (!VAR_12) {
        FUNC_2 ("Failed to find commit %s.\n", VAR_4->parent_id);
        FUNC_1 (VAR_11, VAR_1, VAR_2, " ");
        return 0;
    }

    if (FUNC_7 (VAR_12->root_id, VAR_0) == 0) {
        FUNC_5 (VAR_12);
        return 1;
    }

    if (VAR_4->second_parent_id) {
        VAR_13 = FUNC_4 (VAR_3->commit_mgr,
                                             VAR_4->repo_id,
                                             VAR_4->version,
                                             VAR_4->second_parent_id);
        if (!VAR_13) {
            FUNC_2 ("Failed to find commit %s.\n", VAR_4->second_parent_id);
            FUNC_5 (VAR_12);
            FUNC_1 (VAR_11, VAR_1, VAR_2, " ");
            return 0;
        }
    }

    if (!VAR_13) {
        VAR_14 = FUNC_6 (VAR_3->fs_mgr,
                                                     VAR_6,
                                                     VAR_7,
                                                     VAR_12->root_id, VAR_8,
                                                     ((void*)0),
                                                     VAR_11);
        if (*VAR_11)
            goto out;
        if (!VAR_14 || FUNC_7 (VAR_9, VAR_14) != 0)
            VAR_16 = 1;
        else
            FUNC_3 (VAR_10, VAR_12->commit_id, 41);
    } else {
        VAR_14 = FUNC_6 (VAR_3->fs_mgr,
                                                     VAR_6,
                                                     VAR_7,
                                                     VAR_12->root_id, VAR_8,
                                                     ((void*)0), VAR_11);
        if (*VAR_11)
            goto out;
        VAR_15 = FUNC_6 (VAR_3->fs_mgr,
                                                     VAR_6,
                                                     VAR_7,
                                                     VAR_13->root_id, VAR_8,
                                                     ((void*)0), VAR_11);
        if (*VAR_11)
            goto out;

        if (VAR_14 && VAR_15) {
            if (FUNC_7(VAR_9, VAR_14) != 0 &&
                FUNC_7(VAR_9, VAR_15) != 0)
                VAR_16 = 1;
            else if (FUNC_7(VAR_9, VAR_14) == 0)
                FUNC_3 (VAR_10, VAR_12->commit_id, 41);
            else
                FUNC_3 (VAR_10, VAR_13->commit_id, 41);
        } else if (VAR_14 && !VAR_15) {
            if (FUNC_7(VAR_9, VAR_14) != 0)
                VAR_16 = 1;
            else
                FUNC_3 (VAR_10, VAR_12->commit_id, 41);
        } else if (!VAR_14 && VAR_15) {
            if (FUNC_7(VAR_9, VAR_15) != 0)
                VAR_16 = 1;
            else
                FUNC_3 (VAR_10, VAR_13->commit_id, 41);
        } else {
            VAR_16 = 1;
        }
    }

out:
    FUNC_0 (VAR_14);
    FUNC_0 (VAR_15);

    if (VAR_12)
        FUNC_5 (VAR_12);
    if (VAR_13)
        FUNC_5 (VAR_13);

    return VAR_16;
}
