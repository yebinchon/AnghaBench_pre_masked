
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef void* gpointer ;
typedef int gboolean ;
struct TYPE_13__ {int sync_mgr; } ;
struct TYPE_12__ {int mode; int name; int sha1; } ;
struct TYPE_11__ {char* repo_id; TYPE_1__* http_task; int * finished_tasks; } ;
struct TYPE_10__ {int result; scalar_t__ skip_fetch; TYPE_4__* de; } ;
struct TYPE_9__ {int is_clone; } ;
typedef int GAsyncQueue ;
typedef TYPE_2__ FileTxTask ;
typedef TYPE_3__ FileTxData ;
typedef TYPE_4__ DiffEntry ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_1 (int *,TYPE_2__*) ;
 int FUNC_2 (int ,char*,int) ;
 TYPE_5__* VAR_4 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,char*,int ,int ,int ) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static void
FUNC_6 (gpointer VAR_5, gpointer VAR_6)
{
    FileTxTask *VAR_7 = VAR_5;
    FileTxData *VAR_8 = VAR_6;
    GAsyncQueue *VAR_9 = VAR_8->finished_tasks;
    DiffEntry *VAR_10 = VAR_7->de;
    char *VAR_11 = VAR_8->repo_id;
    char VAR_12[41];
    gboolean VAR_13 = VAR_8->http_task->is_clone;
    int VAR_14 = VAR_1;

    if (VAR_7->skip_fetch)
        goto out;

    FUNC_2 (VAR_10->sha1, VAR_12, 20);



    if (!VAR_13)
        FUNC_4 (VAR_4->sync_mgr,
                                              VAR_11,
                                              VAR_10->name,
                                              VAR_10->mode,
                                              VAR_3);

    VAR_14 = FUNC_0 (VAR_8, VAR_7);




    if (VAR_14 == VAR_0) {
        FUNC_3 ("Transfer canceled.\n");
    } else if (VAR_14 == VAR_2) {
        FUNC_5 ("Transfer failed.\n");
    }

out:
    VAR_7->result = VAR_14;
    FUNC_1 (VAR_9, VAR_7);
}
