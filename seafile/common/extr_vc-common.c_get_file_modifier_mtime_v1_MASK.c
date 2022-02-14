
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_9__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int gint64 ;
struct TYPE_14__ {int fs_mgr; int commit_mgr; } ;
struct TYPE_13__ {TYPE_1__* data; struct TYPE_13__* next; } ;
struct TYPE_12__ {int root_id; } ;
struct TYPE_11__ {TYPE_4__* entries; } ;
struct TYPE_10__ {char* name; char* modifier; int mtime; } ;
typedef TYPE_1__ SeafDirent ;
typedef TYPE_2__ SeafDir ;
typedef TYPE_3__ SeafCommit ;
typedef TYPE_4__ GList ;


 int FUNC_0 (char*) ;
 char* FUNC_1 (char const*) ;
 char* FUNC_2 (char const*) ;
 char* FUNC_3 (char*) ;
 TYPE_9__* VAR_0 ;
 TYPE_3__* FUNC_4 (int ,char const*,int,char const*) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_2__*) ;
 TYPE_2__* FUNC_7 (int ,char const*,int,int ,char*,int *) ;
 int FUNC_8 (char*,char const*,...) ;
 scalar_t__ FUNC_9 (char*,char*) ;

__attribute__((used)) static int
FUNC_10 (const char *VAR_1, const char *VAR_2, int VAR_3,
                            const char *VAR_4, const char *VAR_5,
                            char **VAR_6, gint64 *VAR_7)
{
    SeafCommit *VAR_8 = ((void*)0);
    SeafDir *VAR_9 = ((void*)0);
    SeafDirent *VAR_10 = ((void*)0);
    int VAR_11 = 0;

    VAR_8 = FUNC_4 (VAR_0->commit_mgr,
                                             VAR_1, VAR_3,
                                             VAR_4);
    if (!VAR_8) {
        FUNC_8 ("Failed to get commit %s.\n", VAR_4);
        return -1;
    }

    char *VAR_12 = FUNC_2 (VAR_5);
    if (FUNC_9(VAR_12, ".") == 0) {
        FUNC_0 (VAR_12);
        VAR_12 = FUNC_3("");
    }
    char *VAR_13 = FUNC_1 (VAR_5);

    VAR_9 = FUNC_7 (VAR_0->fs_mgr,
                                               VAR_2, VAR_3,
                                               VAR_8->root_id,
                                               VAR_12, ((void*)0));
    if (!VAR_9) {
        FUNC_8 ("dir %s doesn't exist in repo %s.\n", VAR_12, VAR_1);
        VAR_11 = -1;
        goto out;
    }

    GList *VAR_14;
    for (VAR_14 = VAR_9->entries; VAR_14; VAR_14 = VAR_14->next) {
        SeafDirent *VAR_15 = VAR_14->data;
        if (FUNC_9 (VAR_15->name, VAR_13) == 0) {
            VAR_10 = VAR_15;
            break;
        }
    }

    if (!VAR_10) {
        goto out;
    }

    *VAR_6 = FUNC_3(VAR_10->modifier);
    *VAR_7 = VAR_10->mtime;

out:
    FUNC_0 (VAR_12);
    FUNC_0 (VAR_13);
    FUNC_5 (VAR_8);
    FUNC_6 (VAR_9);

    return VAR_11;
}
