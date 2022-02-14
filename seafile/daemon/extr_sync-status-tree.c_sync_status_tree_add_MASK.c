
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef size_t guint ;
struct TYPE_17__ {int sync_mgr; } ;
struct TYPE_16__ {int str; } ;
struct TYPE_15__ {int dirents; } ;
struct TYPE_14__ {TYPE_3__* subdir; int mode; } ;
struct TYPE_13__ {char* worktree; TYPE_3__* root; } ;
typedef TYPE_1__ SyncStatusTree ;
typedef TYPE_2__ SyncStatusDirent ;
typedef TYPE_3__ SyncStatusDir ;
typedef TYPE_4__ GString ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,TYPE_2__*) ;
 TYPE_2__* FUNC_2 (int ,char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char**) ;
 int FUNC_5 (TYPE_4__*,char*) ;
 int FUNC_6 (TYPE_4__*,int ) ;
 TYPE_4__* FUNC_7 (char*) ;
 char** FUNC_8 (char const*,char*,int ) ;
 size_t FUNC_9 (char**) ;
 TYPE_7__* VAR_2 ;
 int FUNC_10 (int ,int ) ;
 TYPE_2__* FUNC_11 (char*,int) ;

void
FUNC_12 (SyncStatusTree *VAR_3,
                      const char *VAR_4,
                      int VAR_5)
{
    char **VAR_6 = ((void*)0);
    guint VAR_7, VAR_8;
    char *VAR_9;
    SyncStatusDir *VAR_10 = VAR_3->root;
    SyncStatusDirent *VAR_11;
    GString *VAR_12;

    VAR_6 = FUNC_8 (VAR_4, "/", 0);
    if (!VAR_6)
        return;
    VAR_7 = FUNC_9 (VAR_6);

    VAR_12 = FUNC_7 ("");
    FUNC_5 (VAR_12, VAR_3->worktree);

    for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++) {
        VAR_9 = VAR_6[VAR_8];
        VAR_11 = FUNC_2 (VAR_10->dirents, VAR_9);
        FUNC_5 (VAR_12, "/");
        FUNC_5 (VAR_12, VAR_9);
        if (VAR_11) {
            if (FUNC_0(VAR_11->mode)) {
                if (VAR_8 == (VAR_7-1)) {
                    goto out;
                } else {
                    VAR_10 = VAR_11->subdir;
                }
            } else {
                goto out;
            }
        } else {
            if (VAR_8 == (VAR_7-1)) {
                VAR_11 = FUNC_11 (VAR_9, VAR_5);
                FUNC_1 (VAR_10->dirents, FUNC_3(VAR_9), VAR_11);
            } else {
                VAR_11 = FUNC_11 (VAR_9, VAR_0);
                FUNC_1 (VAR_10->dirents, FUNC_3(VAR_9), VAR_11);
                VAR_10 = VAR_11->subdir;
            }



        }
    }

out:
    FUNC_6 (VAR_12, VAR_1);
    FUNC_4 (VAR_6);
}
