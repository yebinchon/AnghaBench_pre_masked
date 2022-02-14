
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_8__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int opt ;
typedef int gboolean ;
typedef int data ;
struct TYPE_15__ {int commit_mgr; int repo_mgr; } ;
struct TYPE_14__ {struct TYPE_14__* data; int dir_cb; int file_cb; int version; int store_id; int fold_dir_diff; int ** results; } ;
struct TYPE_13__ {char* root_id; int * second_parent_id; int * parent_id; int repo_id; } ;
struct TYPE_12__ {int version; int id; } ;
typedef TYPE_1__ SeafRepo ;
typedef TYPE_2__ SeafCommit ;
typedef int GList ;
typedef TYPE_3__ DiffOptions ;
typedef TYPE_3__ DiffData ;


 int FUNC_0 (int **) ;
 int FUNC_1 (int,char const**,TYPE_3__*) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (TYPE_3__*,int ,int) ;
 TYPE_8__* VAR_0 ;
 TYPE_2__* FUNC_5 (int ,int ,int ,int *) ;
 int FUNC_6 (TYPE_2__*) ;
 TYPE_1__* FUNC_7 (int ,int ) ;
 int FUNC_8 (char*,int ,...) ;
 int VAR_1 ;
 int VAR_2 ;

int
FUNC_9 (SeafCommit *VAR_3, GList **VAR_4, gboolean VAR_5)
{
    SeafRepo *VAR_6 = ((void*)0);
    DiffOptions VAR_7;
    const char *VAR_8[3];
    SeafCommit *VAR_9, *VAR_10;

    FUNC_2 (*VAR_4 == ((void*)0), -1);
    FUNC_2 (VAR_3->parent_id != ((void*)0) &&
                          VAR_3->second_parent_id != ((void*)0),
                          -1);

    VAR_6 = FUNC_7 (VAR_0->repo_mgr, VAR_3->repo_id);
    if (!VAR_6) {
        FUNC_8 ("Failed to get repo %s.\n", VAR_3->repo_id);
        return -1;
    }

    VAR_9 = FUNC_5 (VAR_0->commit_mgr,
                                              VAR_6->id,
                                              VAR_6->version,
                                              VAR_3->parent_id);
    if (!VAR_9) {
        FUNC_8 ("failed to find commit %s:%s.\n", VAR_6->id, VAR_3->parent_id);
        return -1;
    }

    VAR_10 = FUNC_5 (VAR_0->commit_mgr,
                                              VAR_6->id,
                                              VAR_6->version,
                                              VAR_3->second_parent_id);
    if (!VAR_10) {
        FUNC_8 ("failed to find commit %s:%s.\n",
                      VAR_6->id, VAR_3->second_parent_id);
        FUNC_6 (VAR_9);
        return -1;
    }

    DiffData VAR_11;
    FUNC_4 (&VAR_11, 0, sizeof(VAR_11));
    VAR_11.results = VAR_4;
    VAR_11.fold_dir_diff = VAR_5;

    FUNC_4 (&VAR_7, 0, sizeof(VAR_7));
    FUNC_3 (VAR_7.store_id, VAR_6->id, 36);
    VAR_7.version = VAR_6->version;
    VAR_7.file_cb = VAR_2;
    VAR_7.dir_cb = VAR_1;
    VAR_7.data = &VAR_11;

    VAR_8[0] = VAR_3->root_id;
    VAR_8[1] = VAR_9->root_id;
    VAR_8[2] = VAR_10->root_id;

    int VAR_12 = FUNC_1 (3, VAR_8, &VAR_7);
    FUNC_0 (VAR_4);

    FUNC_6 (VAR_9);
    FUNC_6 (VAR_10);

    return VAR_12;
}
