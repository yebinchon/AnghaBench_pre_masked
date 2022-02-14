
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_13__ {int repo_mgr; } ;
struct TYPE_12__ {int repo_id; } ;
struct TYPE_11__ {TYPE_2__* data; struct TYPE_11__* next; } ;
struct TYPE_10__ {int timestamp; int repo_id; int group_perms; int user_perms; } ;
struct TYPE_9__ {TYPE_3__* results; int success; } ;
typedef int SeafRepo ;
typedef TYPE_1__ HttpFolderPerms ;
typedef TYPE_2__ HttpFolderPermRes ;
typedef TYPE_3__ GList ;
typedef TYPE_4__ CloneTask ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,TYPE_4__*) ;
 TYPE_6__* VAR_3 ;
 int * FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (TYPE_4__*,int ) ;

__attribute__((used)) static void
FUNC_6 (HttpFolderPerms *VAR_4, void *VAR_5)
{
    CloneTask *VAR_6 = VAR_5;
    GList *VAR_7;
    HttpFolderPermRes *VAR_8;

    SeafRepo *VAR_9 = FUNC_1 (VAR_3->repo_mgr,
                                                 VAR_6->repo_id);
    if (VAR_9 == ((void*)0)) {
        FUNC_4 ("[Clone mgr] cannot find repo %s after fetched.\n",
                   VAR_6->repo_id);
        FUNC_5 (VAR_6, VAR_2);
        return;
    }

    if (!VAR_4->success) {
        goto out;
    }

    for (VAR_7 = VAR_4->results; VAR_7; VAR_7 = VAR_7->next) {
        VAR_8 = VAR_7->data;

        FUNC_3 (VAR_3->repo_mgr, VAR_8->repo_id,
                                               VAR_1,
                                               VAR_8->user_perms);
        FUNC_3 (VAR_3->repo_mgr, VAR_8->repo_id,
                                               VAR_0,
                                               VAR_8->group_perms);
        FUNC_2 (VAR_3->repo_mgr,
                                                        VAR_8->repo_id,
                                                        VAR_8->timestamp);
    }

out:
    FUNC_0 (VAR_9, VAR_6);
}
