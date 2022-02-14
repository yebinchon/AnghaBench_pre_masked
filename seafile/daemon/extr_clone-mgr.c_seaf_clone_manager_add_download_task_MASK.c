
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
struct TYPE_11__ {int repo_mgr; int sync_mgr; int started; } ;
struct TYPE_10__ {int * head; } ;
struct TYPE_9__ {scalar_t__ in_sync; } ;
typedef TYPE_2__ SyncInfo ;
typedef TYPE_3__ SeafRepo ;
typedef int SeafCloneManager ;
typedef scalar_t__ IgnoreReason ;
typedef int GError ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 char* FUNC_0 (int *,char const*,int,char const*,char const*,char const*,char const*,int,char const*,char*,char const*,char const*,char const*,char const*,int ,int **) ;
 int FUNC_1 (char const*,int,char const*,char*,int **) ;
 char* FUNC_2 (char const*,char const*,int *) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int **,int ,int ,char*) ;
 char* FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int *,char const*) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (char const*,int ,TYPE_1__*) ;
 int * FUNC_9 (int *,char*) ;
 int FUNC_10 (int *) ;
 char* FUNC_11 (int *,char*,int **) ;
 TYPE_6__* VAR_6 ;
 int FUNC_12 (char*) ;
 TYPE_3__* FUNC_13 (int ,char const*) ;
 int FUNC_14 (int ,char const*) ;
 int FUNC_15 (int ,char const*,int ) ;
 TYPE_2__* FUNC_16 (int ,char const*) ;
 int FUNC_17 (char*,...) ;
 scalar_t__ FUNC_18 (char const*,char const*,char const*,int,char*) ;
 scalar_t__ FUNC_19 (char const*,scalar_t__*) ;

char *
FUNC_20 (SeafCloneManager *VAR_7,
                                      const char *VAR_8,
                                      int VAR_9,
                                      const char *VAR_10,
                                      const char *VAR_11,
                                      const char *VAR_12,
                                      const char *VAR_13,
                                      const char *VAR_14,
                                      int VAR_15,
                                      const char *VAR_16,
                                      const char *VAR_17,
                                      const char *VAR_18,
                                      const char *VAR_19,
                                      const char *VAR_20,
                                      const char *VAR_21,
                                      GError **VAR_22)
{
    SeafRepo *VAR_23 = ((void*)0);
    char *VAR_24 = ((void*)0);
    char *VAR_25 = ((void*)0);
    char *VAR_26 = ((void*)0);
    char *VAR_27 = ((void*)0);

    if (!VAR_6->started) {
        FUNC_12 ("System not started, skip adding clone task.\n");
        goto out;
    }
    if (VAR_21) {
         json_error_t VAR_28;
         json_t *VAR_29;

         VAR_29 = FUNC_8 (VAR_21, 0, &VAR_28);
         if (!VAR_29) {
             FUNC_17 ("Failed to load more sync info from json: %s.\n", VAR_28.text);
             goto out;
         }
         json_t *VAR_30 = FUNC_9 (VAR_29, "repo_salt");
         if (VAR_30)
             VAR_27 = FUNC_5 (FUNC_10 (VAR_30));
         FUNC_7 (VAR_29);
     }

    if (VAR_13 &&
        !FUNC_1 (VAR_14, VAR_15, VAR_16, VAR_27, VAR_22)) {
        goto out;
    }





    SyncInfo *VAR_31 = FUNC_16 (VAR_6->sync_mgr,
                                                           VAR_8);
    if (VAR_31 && VAR_31->in_sync) {
        FUNC_4 (VAR_22, VAR_2, VAR_4,
                     "Repo already exists");
        goto out;
    }

    VAR_23 = FUNC_13 (VAR_6->repo_mgr, VAR_8);

    if (VAR_23 != ((void*)0) && VAR_23->head != ((void*)0)) {
        FUNC_4 (VAR_22, VAR_2, VAR_4,
                     "Repo already exists");
        goto out;
    }

    if (FUNC_6 (VAR_7, VAR_8)) {
        FUNC_4 (VAR_22, VAR_2, VAR_4,
                     "Task is already in progress");
        goto out;
    }

    if (VAR_13 &&
        FUNC_18(VAR_8, VAR_13, VAR_14, VAR_15, VAR_27) < 0) {
        FUNC_4 (VAR_22, VAR_2, VAR_4,
                     "Incorrect password");
        goto out;
    }

    IgnoreReason VAR_32;
    if (FUNC_19 (VAR_11, &VAR_32)) {
        if (VAR_32 == VAR_1)
            FUNC_4 (VAR_22, VAR_2, VAR_3,
                         "Library name ends with space or period character");
        else
            FUNC_4 (VAR_22, VAR_2, VAR_3,
                         "Library name contains invalid characters such as ':', '*', '|', '?'");
        goto out;
    }

    VAR_24 = FUNC_2 (VAR_17, VAR_11, ((void*)0));

    VAR_25 = FUNC_11 (VAR_7, VAR_24, VAR_22);
    if (!VAR_25) {
        goto out;
    }





    if (VAR_9 > 0)
        FUNC_14 (VAR_6->repo_mgr, VAR_8);


    if (!VAR_23)
        FUNC_15 (VAR_6->repo_mgr, VAR_8, VAR_0);

    VAR_26 = FUNC_0 (VAR_7, VAR_8, VAR_9,
                           VAR_10, VAR_11, VAR_12, VAR_13,
                           VAR_15, VAR_16,
                           VAR_25, VAR_18, VAR_19,
                           VAR_20, VAR_21, VAR_5, VAR_22);

out:
    FUNC_3 (VAR_25);
    FUNC_3 (VAR_24);
    FUNC_3 (VAR_27);

    return VAR_26;
}
