
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef scalar_t__ gboolean ;
struct TYPE_15__ {TYPE_1__* data; } ;
struct TYPE_14__ {scalar_t__ second_parent_id; scalar_t__ parent_id; int commit_id; } ;
typedef int SeafCommitManager ;
typedef TYPE_1__ SeafCommit ;
typedef TYPE_2__ GList ;
typedef int GHashTable ;
typedef int (* CommitTraverseFunc ) (TYPE_1__*,void*,scalar_t__*) ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int ,int ,int ,int *) ;
 int FUNC_2 (int *,char*,char*) ;
 TYPE_2__* FUNC_3 (TYPE_2__*,TYPE_2__*) ;
 TYPE_2__* FUNC_4 (TYPE_2__*,TYPE_1__*,int ,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 char* FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (TYPE_2__**,int *,char const*,int,scalar_t__,scalar_t__) ;
 TYPE_1__* FUNC_7 (int *,char const*,int,char const*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (char*,char const*) ;

gboolean
FUNC_10 (SeafCommitManager *VAR_6,
                                                     const char *VAR_7,
                                                     int VAR_8,
                                                     const char *VAR_9,
                                                     CommitTraverseFunc VAR_10,
                                                     int VAR_11,
                                                     void *VAR_12,
                                                     gboolean VAR_13)
{
    SeafCommit *VAR_14;
    GList *VAR_15 = ((void*)0);
    GHashTable *VAR_16;
    gboolean VAR_17 = VAR_1;


    VAR_16 = FUNC_1 (VAR_5, VAR_4, VAR_3, ((void*)0));

    VAR_14 = FUNC_7 (VAR_6, VAR_7, VAR_8, VAR_9);
    if (!VAR_14) {
        FUNC_9 ("Failed to find commit %s.\n", VAR_9);
        return VAR_0;
    }

    VAR_15 = FUNC_4 (VAR_15, VAR_14,
                                           VAR_2,
                                           ((void*)0));

    char *VAR_18 = FUNC_5 (VAR_14->commit_id);
    FUNC_2 (VAR_16, VAR_18, VAR_18);

    int VAR_19 = 0;
    while (VAR_15) {
        gboolean VAR_20 = VAR_0;
        VAR_14 = VAR_15->data;
        VAR_15 = FUNC_3 (VAR_15, VAR_15);

        if (!VAR_10 (VAR_14, VAR_12, &VAR_20)) {
            if (!VAR_13) {
                FUNC_8 (VAR_14);
                VAR_17 = VAR_0;
                goto out;
            }
        }


        if (VAR_11 > 0 && ++VAR_19 == VAR_11) {
            FUNC_8 (VAR_14);
            break;
        }

        if (VAR_20) {
            FUNC_8 (VAR_14);



            continue;
        }

        if (VAR_14->parent_id) {
            if (FUNC_6 (&VAR_15, VAR_16, VAR_7, VAR_8,
                                      VAR_14->parent_id, VAR_0) < 0) {
                if (!VAR_13) {
                    FUNC_8 (VAR_14);
                    VAR_17 = VAR_0;
                    goto out;
                }
            }
        }
        if (VAR_14->second_parent_id) {
            if (FUNC_6 (&VAR_15, VAR_16, VAR_7, VAR_8,
                                      VAR_14->second_parent_id, VAR_0) < 0) {
                if (!VAR_13) {
                    FUNC_8 (VAR_14);
                    VAR_17 = VAR_0;
                    goto out;
                }
            }
        }
        FUNC_8 (VAR_14);
    }

out:
    FUNC_0 (VAR_16);
    while (VAR_15) {
        VAR_14 = VAR_15->data;
        FUNC_8 (VAR_14);
        VAR_15 = FUNC_3 (VAR_15, VAR_15);
    }
    return VAR_17;
}
