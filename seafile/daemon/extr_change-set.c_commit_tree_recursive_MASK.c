
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef TYPE_1__* gpointer ;
typedef int gint64 ;
struct TYPE_16__ {int fs_mgr; } ;
struct TYPE_15__ {int version; int dir_id; int dents; } ;
struct TYPE_14__ {char* dir_id; } ;
struct TYPE_13__ {int mtime; int id; TYPE_4__* subdir; } ;
typedef TYPE_2__ SeafDir ;
typedef int GHashTableIter ;
typedef TYPE_1__ ChangeSetDirent ;
typedef TYPE_4__ ChangeSetDir ;


 TYPE_2__* FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (int *,TYPE_1__**,TYPE_1__**) ;
 char* FUNC_4 (char*) ;
 int FUNC_5 (int ,char*,int) ;
 TYPE_7__* VAR_0 ;
 int FUNC_6 (TYPE_2__*) ;
 scalar_t__ FUNC_7 (int ,char const*,int ,TYPE_2__*) ;
 int FUNC_8 (int ,char const*,int ,char*) ;
 int FUNC_9 (char*,char*,char const*) ;

__attribute__((used)) static char *
FUNC_10 (const char *VAR_1, ChangeSetDir *VAR_2, gint64 *VAR_3)
{
    ChangeSetDirent *VAR_4;
    GHashTableIter VAR_5;
    gpointer VAR_6, VAR_7;
    char *VAR_8;
    gint64 VAR_9;
    gint64 VAR_10 = 0;
    SeafDir *VAR_11;
    char *VAR_12 = ((void*)0);

    FUNC_2 (&VAR_5, VAR_2->dents);
    while (FUNC_3 (&VAR_5, &VAR_6, &VAR_7)) {
        VAR_4 = VAR_7;
        if (VAR_4->subdir) {
            VAR_8 = FUNC_10 (VAR_1, VAR_4->subdir, &VAR_9);
            if (!VAR_8)
                return ((void*)0);

            FUNC_5 (VAR_4->id, VAR_8, 40);
            VAR_4->mtime = VAR_9;
            FUNC_1 (VAR_8);
        }
        if (VAR_10 < VAR_4->mtime)
            VAR_10 = VAR_4->mtime;
    }

    VAR_11 = FUNC_0 (VAR_2);

    FUNC_5 (VAR_2->dir_id, VAR_11->dir_id, 40);

    if (!FUNC_8 (VAR_0->fs_mgr,
                                        VAR_1, VAR_2->version,
                                        VAR_11->dir_id)) {
        if (FUNC_7 (VAR_0->fs_mgr, VAR_1, VAR_2->version, VAR_11) < 0) {
            FUNC_9 ("Failed to save dir object %s to repo %s.\n",
                          VAR_11->dir_id, VAR_1);
            goto out;
        }
    }

    VAR_12 = FUNC_4(VAR_11->dir_id);

out:
    if (VAR_12 != ((void*)0))
        *VAR_3 = VAR_10;

    FUNC_6 (VAR_11);
    return VAR_12;
}
