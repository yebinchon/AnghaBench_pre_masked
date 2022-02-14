
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int clone_mgr; } ;
struct TYPE_10__ {int worktree; int repo_name; int repo_id; int error; int state; } ;
struct TYPE_9__ {TYPE_2__* data; struct TYPE_9__* next; } ;
typedef int SeafileCloneTask ;
typedef TYPE_1__ GList ;
typedef int GError ;
typedef TYPE_2__ CloneTask ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (TYPE_1__*,int *) ;
 int * FUNC_3 (int ,char*,int ,char*,int ,char*,int ,char*,int ,char*,int ,int *) ;
 TYPE_5__* VAR_1 ;
 TYPE_1__* FUNC_4 (int ) ;

GList *
FUNC_5 (GError **VAR_2)
{
    GList *VAR_3, *VAR_4;
    GList *VAR_5 = ((void*)0);
    CloneTask *VAR_6;
    SeafileCloneTask *VAR_7;

    VAR_3 = FUNC_4 (VAR_1->clone_mgr);
    for (VAR_4 = VAR_3; VAR_4 != ((void*)0); VAR_4 = VAR_4->next) {
        VAR_6 = VAR_4->data;
        VAR_7 = FUNC_3 (VAR_0,
                          "state", FUNC_0(VAR_6->state),
                          "error", VAR_6->error,
                          "repo_id", VAR_6->repo_id,
                          "repo_name", VAR_6->repo_name,
                          "worktree", VAR_6->worktree,
                          ((void*)0));
        VAR_5 = FUNC_2 (VAR_5, VAR_7);
    }

    FUNC_1 (VAR_3);
    return VAR_5;
}
