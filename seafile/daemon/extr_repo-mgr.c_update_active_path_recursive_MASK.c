
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct stat {int st_mode; } ;
struct index_state {int dummy; } ;
struct cache_entry {int dummy; } ;
typedef scalar_t__ gboolean ;
struct TYPE_9__ {int sync_mgr; } ;
struct TYPE_8__ {int message; } ;
struct TYPE_7__ {int id; int is_readonly; int worktree; } ;
typedef int SyncStatus ;
typedef TYPE_1__ SeafRepo ;
typedef int GList ;
typedef TYPE_2__ GError ;
typedef int GDir ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 char* FUNC_2 (int ,char const*,int *) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (char*,int ,TYPE_2__**) ;
 char* FUNC_5 (int *) ;
 int FUNC_6 (char*) ;
 char* FUNC_7 (char const*,char*,char*,int *) ;
 char* FUNC_8 (char const*,int,int ) ;
 struct cache_entry* FUNC_9 (struct index_state*,char const*,int ,int ) ;
 int FUNC_10 (int ,int ,char const*) ;
 TYPE_5__* VAR_8 ;
 int FUNC_11 (int ,int ,char const*,int ,int ) ;
 int FUNC_12 (char*,char*,int ) ;
 scalar_t__ FUNC_13 (char*,char*,int *) ;
 scalar_t__ FUNC_14 (char*,struct stat*) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (char const*) ;
 int FUNC_17 (TYPE_1__*,char*,struct stat*,struct index_state*,scalar_t__) ;

__attribute__((used)) static void
FUNC_18 (SeafRepo *VAR_9,
                              const char *VAR_10,
                              struct index_state *VAR_11,
                              GList *VAR_12,
                              gboolean VAR_13)
{
    GDir *VAR_14;
    GError *VAR_15 = ((void*)0);
    const char *VAR_16;
    char *VAR_17;
    char *VAR_18, *VAR_19, *VAR_20;
    struct stat VAR_21;
    gboolean VAR_22;

    VAR_18 = FUNC_2(VAR_9->worktree, VAR_10, ((void*)0));

    VAR_14 = FUNC_4 (VAR_18, 0, &VAR_15);
    if (!VAR_14) {
        FUNC_12 ("Failed to open dir %s: %s.\n", VAR_18, VAR_15->message);
        FUNC_6 (VAR_18);
        return;
    }

    int VAR_23 = 0;
    while ((VAR_16 = FUNC_5(VAR_14)) != ((void*)0)) {
        ++VAR_23;

        VAR_17 = FUNC_8 (VAR_16, -1, VAR_1);
        VAR_20 = FUNC_7 (VAR_10, "/", VAR_17, ((void*)0));
        VAR_19 = FUNC_7 (VAR_18, "/", VAR_17, ((void*)0));

        VAR_22 = VAR_0;
        if (VAR_13 || FUNC_13(VAR_18, VAR_17, VAR_12))
            VAR_22 = VAR_6;

        if (FUNC_14 (VAR_19, &VAR_21) < 0) {
            FUNC_12 ("Failed to stat %s: %s.\n", VAR_19, FUNC_15(VAR_7));
            FUNC_6 (VAR_17);
            FUNC_6 (VAR_20);
            FUNC_6 (VAR_19);
            continue;
        }

        if (FUNC_0(VAR_21.st_mode)) {
            FUNC_18 (VAR_9, VAR_20, VAR_11, VAR_12,
                                          VAR_22);
        } else if (FUNC_1(VAR_21.st_mode)) {
            FUNC_17 (VAR_9, VAR_20, &VAR_21, VAR_11,
                                VAR_22);
        }

        FUNC_6 (VAR_17);
        FUNC_6 (VAR_20);
        FUNC_6 (VAR_19);
    }

    FUNC_3 (VAR_14);

    FUNC_6 (VAR_18);




    if (!FUNC_10 (VAR_9->id, VAR_9->is_readonly, VAR_10))
        return;

    if (VAR_23 == 0 && VAR_10[0] != 0) {
        if (VAR_13) {
            FUNC_11 (VAR_8->sync_mgr,
                                                  VAR_9->id,
                                                  VAR_10,
                                                  VAR_5,
                                                  VAR_2);
        } else {

            SyncStatus VAR_24;
            struct cache_entry *VAR_25 = FUNC_9(VAR_11, VAR_10, FUNC_16(VAR_10), 0);
            if (!VAR_25)
                VAR_24 = VAR_4;
            else
                VAR_24 = VAR_3;
            FUNC_11 (VAR_8->sync_mgr,
                                                  VAR_9->id,
                                                  VAR_10,
                                                  VAR_5,
                                                  VAR_24);
        }
    }
}
