
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_12__ {int sync_mgr; } ;
struct TYPE_11__ {size_t state; int error; TYPE_3__* repo; TYPE_2__* mgr; TYPE_1__* info; } ;
struct TYPE_10__ {int worktree; int name; int id; } ;
struct TYPE_9__ {int n_running_tasks; } ;
struct TYPE_8__ {int in_sync; } ;
typedef TYPE_4__ SyncTask ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (int) ;
 TYPE_7__* VAR_4 ;
 int FUNC_1 (char*,int ,int ,int ,char const*) ;
 int FUNC_2 (int ,int ,int *,int) ;
 int FUNC_3 (int ,int ) ;
 char* FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int * VAR_5 ;
 int FUNC_6 (TYPE_4__*,size_t) ;

__attribute__((used)) static void
FUNC_7 (SyncTask *VAR_6, int VAR_7)
{
    FUNC_0 (VAR_7 >= 0 && VAR_7 < VAR_1);

    const char *VAR_8 = FUNC_4(VAR_7);
    int VAR_9 = FUNC_5(VAR_7);

    if (VAR_6->state != VAR_3) {
        FUNC_1 ("Repo '%s' sync state transition from %s to '%s': '%s'.\n",
                      VAR_6->repo->name,
                      VAR_5[VAR_6->state],
                      VAR_5[VAR_3],
                      VAR_8);
        VAR_6->state = VAR_3;
        VAR_6->error = VAR_7;
        VAR_6->info->in_sync = VAR_0;
        --(VAR_6->mgr->n_running_tasks);
        FUNC_6 (VAR_6, VAR_3);




        if (VAR_9 == VAR_2)
            FUNC_2 (VAR_6->repo->id, VAR_6->repo->name, ((void*)0), VAR_7);





    }
}
