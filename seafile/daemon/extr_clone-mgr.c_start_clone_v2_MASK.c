
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_9__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_15__ {int repo_mgr; } ;
struct TYPE_14__ {scalar_t__ server_url; int peer_port; int peer_addr; int email; int token; int repo_id; int worktree; } ;
struct TYPE_13__ {int id; } ;
typedef TYPE_1__ SeafRepo ;
typedef int GError ;
typedef TYPE_2__ CloneTask ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (TYPE_2__*,int **) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ,int) ;
 int FUNC_3 (TYPE_1__*,TYPE_2__*) ;
 TYPE_9__* VAR_5 ;
 TYPE_1__* FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,TYPE_1__*,int ) ;
 int FUNC_6 (int ,int ,int ,scalar_t__) ;
 int FUNC_7 (int ,int ,int ,int ) ;
 int FUNC_8 (int ,TYPE_1__*,int ) ;
 int FUNC_9 (char*,int ) ;
 int FUNC_10 (TYPE_2__*,int ) ;
 int FUNC_11 (TYPE_2__*,int ) ;

__attribute__((used)) static void
FUNC_12 (CloneTask *VAR_6)
{
    GError *VAR_7 = ((void*)0);

    if (FUNC_1 (VAR_6->worktree, VAR_1) != 0 &&
        FUNC_2 (VAR_6->worktree, 0777) < 0) {
        FUNC_9 ("[clone mgr] Failed to create worktree %s.\n",
                      VAR_6->worktree);
        FUNC_11 (VAR_6, VAR_4);
        return;
    }

    SeafRepo *VAR_8 = FUNC_4 (VAR_5->repo_mgr, VAR_6->repo_id);
    if (VAR_8 != ((void*)0)) {
        FUNC_8 (VAR_5->repo_mgr, VAR_8, VAR_6->token);
        FUNC_5 (VAR_5->repo_mgr, VAR_8, VAR_6->email);
        FUNC_7 (VAR_5->repo_mgr, VAR_8->id,
                                               VAR_6->peer_addr, VAR_6->peer_port);
        if (VAR_6->server_url) {
            FUNC_6 (VAR_5->repo_mgr,
                                                 VAR_8->id,
                                                 VAR_2,
                                                 VAR_6->server_url);
        }

        FUNC_3 (VAR_8, VAR_6);
        return;
    }

    if (FUNC_0 (VAR_6, &VAR_7) == 0)
        FUNC_10 (VAR_6, VAR_0);
    else
        FUNC_11 (VAR_6, VAR_3);
}
