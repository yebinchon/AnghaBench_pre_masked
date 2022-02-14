
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct index_state {int dummy; } ;
typedef int gboolean ;
struct TYPE_11__ {int filelock_mgr; } ;
struct TYPE_10__ {int id; int worktree; } ;
struct TYPE_9__ {int st_mode; } ;
typedef TYPE_1__ SeafStat ;
typedef TYPE_2__ SeafRepo ;
typedef int GList ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ,char const*,int *) ;
 char* FUNC_2 (int ,char const*,int *) ;
 int FUNC_3 (char*) ;
 TYPE_7__* VAR_2 ;
 int FUNC_4 (int ,int ,char const*) ;
 scalar_t__ FUNC_5 (char*,TYPE_1__*) ;
 int FUNC_6 (TYPE_2__*,char const*,TYPE_1__*,struct index_state*,int ) ;
 int FUNC_7 (TYPE_2__*,char const*,struct index_state*,int *,int ) ;

__attribute__((used)) static void
FUNC_8 (SeafRepo *VAR_3, const char *VAR_4,
                     struct index_state *VAR_5, GList *VAR_6)
{
    SeafStat VAR_7;
    gboolean VAR_8 = VAR_0;

    char *VAR_9 = FUNC_2 (VAR_3->worktree, VAR_4, ((void*)0));
    if (FUNC_5 (VAR_9, &VAR_7) < 0) {
        FUNC_3 (VAR_9);
        return;
    }

    if (FUNC_1 (VAR_3->worktree, VAR_4, VAR_6))
        VAR_8 = VAR_1;

    if (FUNC_0(VAR_7.st_mode)) {
        if (!FUNC_4(VAR_2->filelock_mgr,
                                                  VAR_3->id, VAR_4)) {
            FUNC_6 (VAR_3, VAR_4, &VAR_7, VAR_5, VAR_8);
        }
    } else {
        FUNC_7 (VAR_3, VAR_4, VAR_5, VAR_6, VAR_8);
    }

    FUNC_3 (VAR_9);
}
