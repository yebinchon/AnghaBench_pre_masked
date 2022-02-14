
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {int commit_mgr; } ;
struct TYPE_11__ {char const* parent_id; scalar_t__ second_parent_id; } ;
struct TYPE_10__ {int version; int id; } ;
typedef TYPE_1__ SeafRepo ;
typedef TYPE_2__ SeafCommit ;
typedef int GList ;
typedef int GDestroyNotify ;


 int FUNC_0 (TYPE_2__*,TYPE_2__*,int **,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (TYPE_2__*,int **,int) ;
 int FUNC_2 (int *,int ) ;
 char* FUNC_3 (char*) ;
 TYPE_6__* VAR_1 ;
 TYPE_2__* FUNC_4 (int ,int ,int ,char const*) ;
 int FUNC_5 (TYPE_2__*) ;

GList *
FUNC_6 (SeafRepo *VAR_2, const char *VAR_3, const char *VAR_4, int VAR_5, char **VAR_6)
{
    SeafCommit *VAR_7 = ((void*)0), *VAR_8 = ((void*)0);
    int VAR_9 = 0;
    GList *VAR_10 = ((void*)0);

    VAR_8 = FUNC_4 (VAR_1->commit_mgr,
                                         VAR_2->id, VAR_2->version,
                                         VAR_4);
    if (!VAR_8) {
        *VAR_6 = FUNC_3("Can't find new commit");
        return ((void*)0);
    }

    if (VAR_3 == ((void*)0) || VAR_3[0] == '\0') {
        if (VAR_8->parent_id && VAR_8->second_parent_id) {
            VAR_9 = FUNC_1 (VAR_8, &VAR_10, VAR_5);
            FUNC_5 (VAR_8);
            if (VAR_9 < 0) {
                *VAR_6 = FUNC_3("Failed to do diff");
                FUNC_2 (VAR_10, (GDestroyNotify)VAR_0);
                return ((void*)0);
            }
            return VAR_10;
        }

        if (!VAR_8->parent_id) {
            FUNC_5 (VAR_8);
            return ((void*)0);
        }
        VAR_7 = FUNC_4 (VAR_1->commit_mgr,
                                             VAR_2->id, VAR_2->version,
                                             VAR_8->parent_id);
    } else {
        VAR_7 = FUNC_4 (VAR_1->commit_mgr,
                                             VAR_2->id, VAR_2->version, VAR_3);
    }

    if (!VAR_7) {
        *VAR_6 = FUNC_3("Can't find old commit");
        FUNC_5 (VAR_8);
        return ((void*)0);
    }


    VAR_9 = FUNC_0 (VAR_7, VAR_8, &VAR_10, VAR_5);
    if (VAR_9 < 0) {
        FUNC_2 (VAR_10, (GDestroyNotify)VAR_0);
        VAR_10 = ((void*)0);
        *VAR_6 = FUNC_3("Failed to do diff");
    }

    FUNC_5 (VAR_7);
    FUNC_5 (VAR_8);

    return VAR_10;
}
