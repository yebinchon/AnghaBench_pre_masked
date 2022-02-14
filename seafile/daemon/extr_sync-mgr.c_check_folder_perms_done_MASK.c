
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
struct TYPE_14__ {int repo_mgr; int sync_mgr; } ;
struct TYPE_13__ {TYPE_4__* data; struct TYPE_13__* next; } ;
struct TYPE_12__ {int timestamp; int repo_id; int group_perms; int user_perms; } ;
struct TYPE_11__ {TYPE_5__* results; int success; } ;
struct TYPE_10__ {scalar_t__ last_check_perms_time; int folder_perms_not_supported; int checking_folder_perms; } ;
struct TYPE_9__ {scalar_t__ in_sync; } ;
typedef TYPE_1__ SyncInfo ;
typedef TYPE_2__ HttpServerState ;
typedef TYPE_3__ HttpFolderPerms ;
typedef TYPE_4__ HttpFolderPermRes ;
typedef TYPE_5__ GList ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_0 (int ,int ) ;
 TYPE_6__* VAR_4 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4 (HttpFolderPerms *VAR_5, void *VAR_6)
{
    HttpServerState *VAR_7 = VAR_6;
    GList *VAR_8;
    HttpFolderPermRes *VAR_9;
    gint64 VAR_10 = (gint64)FUNC_3(((void*)0));

    VAR_7->checking_folder_perms = VAR_0;

    if (!VAR_5->success) {



        if (VAR_7->last_check_perms_time == 0)
            VAR_7->folder_perms_not_supported = VAR_3;
        VAR_7->last_check_perms_time = VAR_10;
        return;
    }

    SyncInfo *VAR_11;
    for (VAR_8 = VAR_5->results; VAR_8; VAR_8 = VAR_8->next) {
        VAR_9 = VAR_8->data;

        VAR_11 = FUNC_0 (VAR_4->sync_mgr, VAR_9->repo_id);
        if (VAR_11->in_sync)
            continue;

        FUNC_2 (VAR_4->repo_mgr, VAR_9->repo_id,
                                               VAR_2,
                                               VAR_9->user_perms);
        FUNC_2 (VAR_4->repo_mgr, VAR_9->repo_id,
                                               VAR_1,
                                               VAR_9->group_perms);
        FUNC_1 (VAR_4->repo_mgr,
                                                        VAR_9->repo_id,
                                                        VAR_9->timestamp);
    }

    VAR_7->last_check_perms_time = VAR_10;
}
