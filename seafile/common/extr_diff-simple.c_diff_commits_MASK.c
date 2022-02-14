
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int opt ;
typedef int gboolean ;
typedef int data ;
struct TYPE_14__ {int repo_mgr; } ;
struct TYPE_13__ {struct TYPE_13__* data; int dir_cb; int file_cb; int version; int store_id; int fold_dir_diff; int ** results; } ;
struct TYPE_12__ {char* root_id; int repo_id; } ;
struct TYPE_11__ {int version; int id; } ;
typedef TYPE_1__ SeafRepo ;
typedef TYPE_2__ SeafCommit ;
typedef int GList ;
typedef TYPE_3__ DiffOptions ;
typedef TYPE_3__ DiffData ;


 int FUNC_0 (int **) ;
 int FUNC_1 (int,char const**,TYPE_3__*) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (TYPE_3__*,int ,int) ;
 TYPE_6__* VAR_0 ;
 TYPE_1__* FUNC_4 (int ,int ) ;
 int FUNC_5 (char*,int ) ;
 int VAR_1 ;
 int VAR_2 ;

int
FUNC_6 (SeafCommit *VAR_3, SeafCommit *VAR_4, GList **VAR_5,
              gboolean VAR_6)
{
    SeafRepo *VAR_7 = ((void*)0);
    DiffOptions VAR_8;
    const char *VAR_9[2];

    VAR_7 = FUNC_4 (VAR_0->repo_mgr, VAR_3->repo_id);
    if (!VAR_7) {
        FUNC_5 ("Failed to get repo %s.\n", VAR_3->repo_id);
        return -1;
    }

    DiffData VAR_10;
    FUNC_3 (&VAR_10, 0, sizeof(VAR_10));
    VAR_10.results = VAR_5;
    VAR_10.fold_dir_diff = VAR_6;

    FUNC_3 (&VAR_8, 0, sizeof(VAR_8));
    FUNC_2 (VAR_8.store_id, VAR_7->id, 36);
    VAR_8.version = VAR_7->version;
    VAR_8.file_cb = VAR_2;
    VAR_8.dir_cb = VAR_1;
    VAR_8.data = &VAR_10;

    VAR_9[0] = VAR_3->root_id;
    VAR_9[1] = VAR_4->root_id;

    FUNC_1 (2, VAR_9, &VAR_8);
    FUNC_0 (VAR_5);

    return 0;
}
