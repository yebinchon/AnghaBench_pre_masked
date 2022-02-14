
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_20__ {scalar_t__ server_url; int peer_port; int peer_addr; int email; int token; } ;
struct TYPE_19__ {scalar_t__ state; int repo_id; int error; int is_clone; } ;
struct TYPE_18__ {int tasks; } ;
struct TYPE_17__ {int id; } ;
struct TYPE_16__ {int repo_mgr; } ;
typedef TYPE_1__ SeafileSession ;
typedef TYPE_2__ SeafRepo ;
typedef TYPE_3__ SeafCloneManager ;
typedef TYPE_4__ HttpTxTask ;
typedef TYPE_5__ CloneTask ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_5__*) ;
 TYPE_5__* FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 TYPE_2__* FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,TYPE_2__*,int ) ;
 int FUNC_5 (int ,int ,int ,scalar_t__) ;
 int FUNC_6 (int ,int ,int ,int ) ;
 int FUNC_7 (int ,TYPE_2__*,int ) ;
 int FUNC_8 (char*,int ) ;
 int FUNC_9 (TYPE_5__*,int ) ;
 int FUNC_10 (TYPE_5__*,int ) ;

__attribute__((used)) static void
FUNC_11 (SeafileSession *VAR_5,
                      HttpTxTask *VAR_6,
                      SeafCloneManager *VAR_7)
{
    CloneTask *VAR_8;


    if (!VAR_6->is_clone)
        return;

    VAR_8 = FUNC_1 (VAR_7->tasks, VAR_6->repo_id);
    FUNC_2 (VAR_8 != ((void*)0));

    if (VAR_6->state == VAR_1) {

        FUNC_9 (VAR_8, VAR_0);
        return;
    } else if (VAR_6->state == VAR_2) {
        FUNC_10 (VAR_8, VAR_6->error);
        return;
    }

    SeafRepo *VAR_9 = FUNC_3 (VAR_5->repo_mgr,
                                                 VAR_6->repo_id);
    if (VAR_9 == ((void*)0)) {
        FUNC_8 ("[Clone mgr] cannot find repo %s after fetched.\n",
                   VAR_6->repo_id);
        FUNC_10 (VAR_8, VAR_4);
        return;
    }

    FUNC_7 (VAR_5->repo_mgr, VAR_9, VAR_8->token);
    FUNC_4 (VAR_5->repo_mgr, VAR_9, VAR_8->email);
    FUNC_6 (VAR_5->repo_mgr, VAR_9->id,
                                           VAR_8->peer_addr, VAR_8->peer_port);
    if (VAR_8->server_url) {
        FUNC_5 (VAR_5->repo_mgr,
                                             VAR_9->id,
                                             VAR_3,
                                             VAR_8->server_url);
    }

    FUNC_0 (VAR_8);
}
