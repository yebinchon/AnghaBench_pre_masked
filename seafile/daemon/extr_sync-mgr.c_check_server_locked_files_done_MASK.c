
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef void* gint64 ;
struct TYPE_14__ {int filelock_mgr; int sync_mgr; } ;
struct TYPE_13__ {TYPE_3__* data; struct TYPE_13__* next; } ;
struct TYPE_12__ {TYPE_5__* results; int success; } ;
struct TYPE_11__ {int timestamp; int repo_id; int locked_files; } ;
struct TYPE_10__ {scalar_t__ last_check_locked_files_time; int locked_files_not_supported; int checking_locked_files; } ;
struct TYPE_9__ {scalar_t__ in_sync; } ;
typedef TYPE_1__ SyncInfo ;
typedef TYPE_2__ HttpServerState ;
typedef TYPE_3__ HttpLockedFilesRes ;
typedef TYPE_4__ HttpLockedFiles ;
typedef TYPE_5__ GList ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int ,int ) ;
 TYPE_6__* VAR_2 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4 (HttpLockedFiles *VAR_3, void *VAR_4)
{
    HttpServerState *VAR_5 = VAR_4;
    GList *VAR_6;
    HttpLockedFilesRes *VAR_7;
    gint64 VAR_8 = (gint64)FUNC_3(((void*)0));

    VAR_5->checking_locked_files = VAR_0;

    if (!VAR_3->success) {



        if (VAR_5->last_check_locked_files_time == 0)
            VAR_5->locked_files_not_supported = VAR_1;
        VAR_5->last_check_locked_files_time = VAR_8;
        return;
    }

    SyncInfo *VAR_9;
    for (VAR_6 = VAR_3->results; VAR_6; VAR_6 = VAR_6->next) {
        VAR_7 = VAR_6->data;

        VAR_9 = FUNC_0 (VAR_2->sync_mgr, VAR_7->repo_id);
        if (VAR_9->in_sync)
            continue;

        FUNC_1 (VAR_2->filelock_mgr,
                                      VAR_7->repo_id,
                                      VAR_7->locked_files);

        FUNC_2 (VAR_2->filelock_mgr,
                                                VAR_7->repo_id,
                                                VAR_7->timestamp);
    }

    VAR_5->last_check_locked_files_time = VAR_8;
}
