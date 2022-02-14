
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


typedef int gboolean ;
struct TYPE_22__ {int commit_mgr; } ;
struct TYPE_21__ {TYPE_1__* data; int next; } ;
struct TYPE_20__ {TYPE_3__* result; int * commit_hash; } ;
struct TYPE_19__ {int commit_id; int version; int repo_id; } ;
typedef TYPE_1__ SeafCommit ;
typedef TYPE_2__ MergeTraverseData ;
typedef TYPE_3__ GList ;
typedef int GHashTable ;


 int VAR_0 ;
 int * FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 TYPE_3__* FUNC_2 (TYPE_3__*,TYPE_1__*) ;
 TYPE_3__* FUNC_3 (TYPE_3__*,TYPE_3__*) ;
 int FUNC_4 (char*) ;
 TYPE_3__* FUNC_5 (TYPE_3__*) ;
 int VAR_1 ;
 TYPE_6__* VAR_2 ;
 int FUNC_6 (int ,int ,int ,int ,int ,TYPE_2__*,int ) ;
 int FUNC_7 (TYPE_1__*) ;

__attribute__((used)) static GList *
FUNC_8 (SeafCommit *VAR_3, int VAR_4, SeafCommit **VAR_5)
{
    GHashTable *VAR_6;
    GList *VAR_7 = ((void*)0);
    SeafCommit *VAR_8;
    int VAR_9;
    MergeTraverseData VAR_10;
    gboolean VAR_11;

    for (VAR_9 = 0; VAR_9 < VAR_4; VAR_9++) {
        if (VAR_3 == VAR_5[VAR_9])
            return FUNC_2 (VAR_7, VAR_3);
    }


    VAR_6 = FUNC_0 (VAR_3);
    if (!VAR_6) {
        FUNC_4 ("Failed to load commit hash.\n");
        return ((void*)0);
    }

    VAR_10.commit_hash = VAR_6;
    VAR_10.result = ((void*)0);

    for (VAR_9 = 0; VAR_9 < VAR_4; VAR_9++) {
        VAR_11 = FUNC_6 (VAR_2->commit_mgr,
                                                        VAR_5[VAR_9]->repo_id,
                                                        VAR_5[VAR_9]->version,
                                                        VAR_5[VAR_9]->commit_id,
                                                        VAR_1,
                                                        &VAR_10, VAR_0);
        if (!VAR_11)
            goto fail;
    }

    FUNC_1 (VAR_6);
    VAR_7 = VAR_10.result;

    if (!VAR_7 || !VAR_7->next)
        return VAR_7;


    VAR_7 = FUNC_5 (VAR_7);

    return VAR_7;

fail:
    VAR_7 = VAR_10.result;
    while (VAR_7) {
        VAR_8 = VAR_7->data;
        FUNC_7 (VAR_8);
        VAR_7 = FUNC_3 (VAR_7, VAR_7);
    }
    FUNC_1 (VAR_6);
    return ((void*)0);
}
