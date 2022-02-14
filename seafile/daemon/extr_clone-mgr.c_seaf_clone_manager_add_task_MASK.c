
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int json_t ;
struct TYPE_8__ {int text; } ;
typedef TYPE_1__ json_error_t ;
typedef int gboolean ;
struct TYPE_11__ {int repo_mgr; int sync_mgr; int started; } ;
struct TYPE_10__ {int * head; } ;
struct TYPE_9__ {scalar_t__ in_sync; } ;
typedef TYPE_2__ SyncInfo ;
typedef TYPE_3__ SeafRepo ;
typedef int SeafCloneManager ;
typedef int GError ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* FUNC_0 (int *,char const*,int,char const*,char const*,char const*,char const*,int,char const*,char*,char const*,char const*,char const*,char const*,int ,int **) ;
 int FUNC_1 (char const*,int,char const*,char*,int **) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int **,int ,int ,char*) ;
 char* FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int *,char const*) ;
 int FUNC_6 (char*,char const*) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (char const*,int ,TYPE_1__*) ;
 int * FUNC_9 (int *,char*) ;
 int FUNC_10 (int *) ;
 char* FUNC_11 (int *,char const*,int ,int **) ;
 TYPE_6__* VAR_4 ;
 int FUNC_12 (int *,char const*,int **) ;
 int FUNC_13 (char*) ;
 TYPE_3__* FUNC_14 (int ,char const*) ;
 int FUNC_15 (int ,char const*) ;
 int FUNC_16 (int ,char const*,int ) ;
 TYPE_2__* FUNC_17 (int ,char const*) ;
 int FUNC_18 (char*,...) ;
 scalar_t__ FUNC_19 (char const*,char const*,char const*,int,char*) ;

char *
FUNC_20 (SeafCloneManager *VAR_5,
                             const char *VAR_6,
                             int VAR_7,
                             const char *VAR_8,
                             const char *VAR_9,
                             const char *VAR_10,
                             const char *VAR_11,
                             const char *VAR_12,
                             int VAR_13,
                             const char *VAR_14,
                             const char *VAR_15,
                             const char *VAR_16,
                             const char *VAR_17,
                             const char *VAR_18,
                             const char *VAR_19,
                             GError **VAR_20)
{
    SeafRepo *VAR_21 = ((void*)0);
    char *VAR_22 = ((void*)0);
    char *VAR_23 = ((void*)0);
    gboolean VAR_24 = VAR_0;
    char *VAR_25 = ((void*)0);

    if (!VAR_4->started) {
        FUNC_13 ("System not started, skip adding clone task.\n");
        goto out;
    }
    if (VAR_19) {
        json_error_t VAR_26;
        json_t *VAR_27;

        VAR_27 = FUNC_8 (VAR_19, 0, &VAR_26);
        if (!VAR_27) {
            FUNC_18 ("Failed to load more sync info from json: %s.\n", VAR_26.text);
            goto out;
        }
        json_t *VAR_28 = FUNC_9 (VAR_27, "repo_salt");
        if (VAR_28)
            VAR_25 = FUNC_4 (FUNC_10 (VAR_28));
        FUNC_7 (VAR_27);
    }

    if (VAR_11 &&
        !FUNC_1 (VAR_12, VAR_13, VAR_14, VAR_25, VAR_20)) {
        goto out;
    }




    SyncInfo *VAR_29 = FUNC_17 (VAR_4->sync_mgr,
                                                           VAR_6);
    if (VAR_29 && VAR_29->in_sync) {
        FUNC_3 (VAR_20, VAR_1, VAR_3,
                     "Repo already exists");
        goto out;
    }

    VAR_21 = FUNC_14 (VAR_4->repo_mgr, VAR_6);

    if (VAR_21 != ((void*)0) && VAR_21->head != ((void*)0)) {
        FUNC_3 (VAR_20, VAR_1, VAR_3,
                     "Repo already exists");
        goto out;
    }

    if (FUNC_5 (VAR_5, VAR_6)) {
        FUNC_3 (VAR_20, VAR_1, VAR_3,
                     "Task is already in progress");
        goto out;
    }

    if (VAR_11 &&
        FUNC_19(VAR_6, VAR_11, VAR_12, VAR_13, VAR_25) < 0) {
        FUNC_3 (VAR_20, VAR_1, VAR_3,
                     "Incorrect password");
        goto out;
    }

    if (!FUNC_12 (VAR_5, VAR_15, VAR_20))
        goto out;




    VAR_22 = FUNC_11 (VAR_5, VAR_15, VAR_0, VAR_20);
    if (!VAR_22) {
        goto out;
    }




    VAR_24 = FUNC_6 (VAR_22, VAR_9);





    if (VAR_7 > 0)
        FUNC_15 (VAR_4->repo_mgr, VAR_6);


    if (!VAR_21)
        FUNC_16 (VAR_4->repo_mgr, VAR_6, VAR_0);

    VAR_23 = FUNC_0 (VAR_5, VAR_6, VAR_7,
                           VAR_8, VAR_9, VAR_10, VAR_11,
                           VAR_13, VAR_14,
                           VAR_22, VAR_16, VAR_17,
                           VAR_18, VAR_19,
                           VAR_24,
                           VAR_20);

out:
    FUNC_2 (VAR_22);
    FUNC_2 (VAR_25);

    return VAR_23;
}
