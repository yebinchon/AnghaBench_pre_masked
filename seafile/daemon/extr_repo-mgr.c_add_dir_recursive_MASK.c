
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct stat {int st_mode; } ;
struct cache_entry {int dummy; } ;
typedef scalar_t__ gboolean ;
struct TYPE_8__ {int sync_mgr; } ;
struct TYPE_7__ {scalar_t__ changeset; scalar_t__ startup_scan; int is_repo_ro; } ;
struct TYPE_6__ {int ** remain_files; int istate; int repo_id; TYPE_2__* options; int total_size; int crypt; int modifier; int version; int ignore_list; int worktree; } ;
typedef scalar_t__ SyncStatus ;
typedef struct stat SeafStat ;
typedef int GDir ;
typedef TYPE_1__ AddParams ;
typedef TYPE_2__ AddOptions ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_10 ;
 int FUNC_2 (int ,char const*,struct stat*) ;
 int FUNC_3 (int ,int ,int ,int ,char*,char*,struct stat*,int ,int ,int **,TYPE_2__*) ;
 int FUNC_4 (scalar_t__,int ,unsigned char*,struct stat*,int *,char const*,int *) ;
 int VAR_11 ;
 char* FUNC_5 (int ,char*,int *) ;
 char* FUNC_6 (int ,char const*,char const*,int *) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (char const*,int ,int *) ;
 char* FUNC_9 (int *) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (int *,int ) ;
 int FUNC_12 (char const*) ;
 char* FUNC_13 (char const*,int,int ) ;
 struct cache_entry* FUNC_14 (int ,char const*,int ,int ) ;
 scalar_t__ FUNC_15 (int ,int ,char const*) ;
 TYPE_3__* VAR_12 ;
 int FUNC_16 (int ,int ,char const*,int ,scalar_t__) ;
 int FUNC_17 (char*,char const*,int ) ;
 scalar_t__ FUNC_18 (char const*,char const*,int ) ;
 scalar_t__ FUNC_19 (char*,struct stat*) ;
 int FUNC_20 (int ) ;
 int FUNC_21 (char const*) ;

__attribute__((used)) static int
FUNC_22 (const char *VAR_13, const char *VAR_14, SeafStat *VAR_15,
                   AddParams *VAR_16, gboolean VAR_17)
{
    AddOptions *VAR_18 = VAR_16->options;
    GDir *VAR_19;
    const char *VAR_20;
    char *VAR_21, *VAR_22;
    int VAR_23, VAR_24;
    gboolean VAR_25 = VAR_10;
    struct stat VAR_26;

    VAR_19 = FUNC_8 (VAR_14, 0, ((void*)0));
    if (!VAR_19) {
        FUNC_17 ("Failed to open dir %s: %s.\n", VAR_14, FUNC_20(VAR_11));

        FUNC_16 (VAR_12->sync_mgr,
                                              VAR_16->repo_id,
                                              VAR_13,
                                              VAR_8,
                                              VAR_4);

        return 0;
    }

    VAR_23 = 0;
    VAR_24 = 0;
    while ((VAR_20 = FUNC_9(VAR_19)) != ((void*)0)) {
        ++VAR_24;






        VAR_21 = FUNC_6 (VAR_3, VAR_13, VAR_20, ((void*)0));

        VAR_22 = FUNC_5 (VAR_16->worktree, VAR_21, ((void*)0));

        if (FUNC_19 (VAR_22, &VAR_26) < 0) {
            FUNC_17 ("Failed to stat %s: %s.\n", VAR_22, FUNC_20(VAR_11));
            FUNC_10 (VAR_21);
            FUNC_10 (VAR_22);
            continue;
        }

        if (VAR_17 || FUNC_18(VAR_14, VAR_20, VAR_16->ignore_list)) {
            if (VAR_18 && VAR_18->startup_scan) {
                if (FUNC_0(VAR_26.st_mode))
                    FUNC_22 (VAR_21, VAR_22, &VAR_26, VAR_16, VAR_10);
                else
                    FUNC_16 (VAR_12->sync_mgr,
                                                          VAR_16->repo_id,
                                                          VAR_21,
                                                          VAR_9,
                                                          VAR_5);
            }
            FUNC_10 (VAR_21);
            FUNC_10 (VAR_22);
            continue;
        }

        ++VAR_23;

        if (FUNC_0(VAR_26.st_mode))
            FUNC_22 (VAR_21, VAR_22, &VAR_26, VAR_16, VAR_1);
        else if (FUNC_1(VAR_26.st_mode))
            FUNC_3 (VAR_16->repo_id,
                      VAR_16->version,
                      VAR_16->modifier,
                      VAR_16->istate,
                      VAR_21,
                      VAR_22,
                      &VAR_26,
                      VAR_16->crypt,
                      VAR_16->total_size,
                      VAR_16->remain_files,
                      VAR_16->options);

        FUNC_10 (VAR_21);
        FUNC_10 (VAR_22);
    }
    FUNC_7 (VAR_19);

    if (VAR_17) {
        FUNC_16 (VAR_12->sync_mgr,
                                              VAR_16->repo_id,
                                              VAR_13,
                                              VAR_8,
                                              VAR_5);
        return 0;
    }

    if (VAR_18)
        VAR_25 = FUNC_15(VAR_16->repo_id,
                                       VAR_18->is_repo_ro, VAR_13);


    if (VAR_18 && VAR_18->startup_scan && VAR_24 == 0) {
        SyncStatus VAR_27;
        struct cache_entry *VAR_28 = FUNC_14 (VAR_16->istate, VAR_13,
                                                    FUNC_21(VAR_13), 0);
        if (!VAR_28)
            VAR_27 = VAR_7;
        else
            VAR_27 = VAR_6;


        if (VAR_27 == VAR_6 || VAR_25)
            FUNC_16 (VAR_12->sync_mgr,
                                                  VAR_16->repo_id,
                                                  VAR_13,
                                                  VAR_8,
                                                  VAR_27);
    }

    if (VAR_23 == 0 && VAR_13[0] != 0 && VAR_25) {
        if (!VAR_16->remain_files || *(VAR_16->remain_files) == ((void*)0)) {
            int VAR_29 = FUNC_2 (VAR_16->istate, VAR_13, VAR_15);
            if (VAR_29 == 1 && VAR_18 && VAR_18->changeset) {
                unsigned char VAR_30[20] = {0};
                FUNC_4 (VAR_18->changeset,
                                  VAR_0,
                                  VAR_30,
                                  VAR_15,
                                  ((void*)0),
                                  VAR_13,
                                  ((void*)0));
            }
        } else
            FUNC_11 (*(VAR_16->remain_files), FUNC_12(VAR_13));
    }

    return 0;
}
