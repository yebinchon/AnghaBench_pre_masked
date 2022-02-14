
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef TYPE_1__* gpointer ;
typedef int gboolean ;
struct TYPE_16__ {int repo_mgr; } ;
struct TYPE_15__ {TYPE_2__* data; struct TYPE_15__* next; } ;
struct TYPE_14__ {int tasks; } ;
struct TYPE_13__ {int worktree; } ;
struct TYPE_12__ {scalar_t__ state; int worktree; } ;
typedef TYPE_2__ SeafRepo ;
typedef TYPE_3__ SeafCloneManager ;
typedef TYPE_4__ GList ;
typedef int GHashTableIter ;
typedef TYPE_1__ CloneTask ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int *,TYPE_1__**,TYPE_1__**) ;
 int FUNC_2 (TYPE_4__*) ;
 scalar_t__ FUNC_3 (char const*,int ) ;
 TYPE_7__* VAR_4 ;
 TYPE_4__* FUNC_4 (int ,int,int) ;

__attribute__((used)) static gboolean
FUNC_5 (SeafCloneManager *VAR_5, const char *VAR_6)
{
    GList *VAR_7, *VAR_8;
    SeafRepo *VAR_9;
    GHashTableIter VAR_10;
    gpointer VAR_11, VAR_12;
    CloneTask *VAR_13;

    VAR_7 = FUNC_4 (VAR_4->repo_mgr, -1, -1);
    for (VAR_8 = VAR_7; VAR_8 != ((void*)0); VAR_8 = VAR_8->next) {
        VAR_9 = VAR_8->data;
        if (FUNC_3 (VAR_6, VAR_9->worktree) == 0) {
            FUNC_2 (VAR_7);
            return VAR_3;
        }
    }
    FUNC_2 (VAR_7);

    FUNC_0 (&VAR_10, VAR_5->tasks);
    while (FUNC_1 (&VAR_10, &VAR_11, &VAR_12)) {
        VAR_13 = VAR_12;
        if (VAR_13->state == VAR_1 ||
            VAR_13->state == VAR_0)
            continue;
        if (FUNC_3 (VAR_6, VAR_13->worktree) == 0)
            return VAR_3;
    }

    return VAR_2;
}
