
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_14__ {int commit_id; } ;
struct TYPE_13__ {int is_corrupted; int id; } ;
struct TYPE_12__ {TYPE_1__* seaf; } ;
struct TYPE_11__ {int commit_mgr; } ;
typedef TYPE_2__ SeafRepoManager ;
typedef TYPE_3__ SeafRepo ;
typedef int SeafCommit ;
typedef TYPE_4__ SeafBranch ;


 int VAR_0 ;
 int * FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_3__*,int *) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (TYPE_3__*,TYPE_4__*) ;

__attribute__((used)) static void
FUNC_5 (SeafRepoManager *VAR_1,
                  SeafRepo *VAR_2,
                  SeafBranch *VAR_3)
{
    SeafCommit *VAR_4;

    VAR_4 = FUNC_0 (VAR_1->seaf->commit_mgr,
                                                        VAR_2->id,
                                                        VAR_3->commit_id);
    if (!VAR_4) {
        FUNC_3 ("Commit %s is missing\n", VAR_3->commit_id);
        VAR_2->is_corrupted = VAR_0;
        return;
    }

    FUNC_4 (VAR_2, VAR_3);
    FUNC_2 (VAR_2, VAR_4);

    FUNC_1 (VAR_4);
}
