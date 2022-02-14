
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int sqlite3_stmt ;
typedef int gboolean ;
struct TYPE_8__ {int is_corrupted; int id; TYPE_2__* manager; } ;
struct TYPE_7__ {TYPE_1__* seaf; } ;
struct TYPE_6__ {int branch_mgr; } ;
typedef TYPE_2__ SeafRepoManager ;
typedef TYPE_3__ SeafRepo ;
typedef int SeafBranch ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,TYPE_3__*,int *) ;
 int * FUNC_1 (int ,int ,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,int ) ;
 scalar_t__ FUNC_4 (int *,int ) ;

__attribute__((used)) static gboolean
FUNC_5 (sqlite3_stmt *VAR_2, void *VAR_3)
{
    SeafRepo *VAR_4 = VAR_3;
    SeafRepoManager *VAR_5 = VAR_4->manager;

    char *VAR_6 = (char *) FUNC_4 (VAR_2, 0);
    SeafBranch *VAR_7 =
        FUNC_1 (VAR_5->seaf->branch_mgr,
                                        VAR_4->id, VAR_6);
    if (VAR_7 == ((void*)0)) {
        FUNC_3 ("Broken branch name for repo %s\n", VAR_4->id);
        VAR_4->is_corrupted = VAR_1;
        return VAR_0;
    }
    FUNC_0 (VAR_5, VAR_4, VAR_7);
    FUNC_2 (VAR_7);


    return VAR_0;
}
