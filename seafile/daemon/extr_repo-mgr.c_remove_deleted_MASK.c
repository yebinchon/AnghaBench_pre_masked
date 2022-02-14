
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct index_state {unsigned int cache_nr; struct cache_entry** cache; } ;
struct TYPE_5__ {scalar_t__ sec; } ;
struct cache_entry {char* name; int ce_flags; TYPE_1__ ce_ctime; int ce_mode; } ;
typedef scalar_t__ gboolean ;
struct TYPE_7__ {int filelock_mgr; } ;
struct TYPE_6__ {int st_mode; } ;
typedef TYPE_2__ SeafStat ;
typedef int LockedFileSet ;
typedef int GList ;
typedef int ChangeSet ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_2 (struct cache_entry*) ;
 scalar_t__ FUNC_3 (int *,char*) ;
 scalar_t__ VAR_7 ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (char const*,char*,int *) ;
 int FUNC_6 (char*,int *) ;
 int FUNC_7 (char const*,scalar_t__,char*) ;
 int FUNC_8 (int *,int ,char*,scalar_t__,char const*) ;
 int FUNC_9 (struct index_state*) ;
 TYPE_4__* VAR_8 ;
 int FUNC_10 (char*,char*) ;
 scalar_t__ FUNC_11 (int ,char const*,char*) ;
 int FUNC_12 (char*,TYPE_2__*) ;
 int FUNC_13 (char*,int,char*,char const*,char*) ;
 scalar_t__ FUNC_14 (char*,char const*) ;
 int FUNC_15 (char*) ;
 scalar_t__ FUNC_16 (char*,char*,int) ;

__attribute__((used)) static void
FUNC_17 (struct index_state *VAR_9, const char *VAR_10, const char *VAR_11,
                GList *VAR_12, LockedFileSet *VAR_13,
                const char *VAR_14, gboolean VAR_15,
                ChangeSet *VAR_16)
{
    struct cache_entry **VAR_17 = VAR_9->cache;
    struct cache_entry *VAR_18;
    char VAR_19[VAR_5];
    unsigned int VAR_20;
    SeafStat VAR_21;
    int VAR_22;
    gboolean VAR_23;

    char *VAR_24 = FUNC_5 (VAR_11, "/", ((void*)0));
    int VAR_25 = FUNC_15(VAR_24);

    for (VAR_20 = 0; VAR_20 < VAR_9->cache_nr; ++VAR_20) {
        VAR_18 = VAR_17[VAR_20];

        if (!FUNC_7 (VAR_14, VAR_15, VAR_18->name))
            continue;

        if (FUNC_11 (VAR_8->filelock_mgr,
                                                  VAR_14, VAR_18->name)) {
            FUNC_10 ("Remove deleted: %s is locked on server, ignore.\n", VAR_18->name);
            continue;
        }

        if (VAR_11[0] != 0 && FUNC_14 (VAR_18->name, VAR_11) != 0 &&
            FUNC_16 (VAR_18->name, VAR_24, VAR_25) != 0)
            continue;

        FUNC_13 (VAR_19, VAR_5, "%s/%s", VAR_10, VAR_18->name);
        VAR_23 = VAR_4;
        VAR_22 = FUNC_12 (VAR_19, &VAR_21);
        if (VAR_22 < 0 && VAR_7 == VAR_3)
            VAR_23 = VAR_6;

        if (FUNC_0 (VAR_18->ce_mode)) {
            if (VAR_18->ce_ctime.sec != 0 || FUNC_2(VAR_18) != 0) {
                if (VAR_23 || (VAR_22 == 0 && !FUNC_0 (VAR_21.st_mode))) {

                    VAR_18->ce_flags |= VAR_0;
                    if (VAR_16)




                        FUNC_8 (VAR_16,
                                               VAR_2,
                                               VAR_18->name,
                                               VAR_6,
                                               VAR_11);
                } else if (!FUNC_6 (VAR_19, VAR_12)) {

                    VAR_18->ce_flags |= VAR_0;
                }
            }
        } else {




            if ((VAR_23 || (VAR_22 == 0 && !FUNC_1 (VAR_21.st_mode))) &&
                (VAR_18->ce_ctime.sec != 0 || FUNC_2(VAR_18) != 0) &&
                FUNC_3 (VAR_13, VAR_18->name))
            {
                VAR_17[VAR_20]->ce_flags |= VAR_0;
                if (VAR_16)
                    FUNC_8 (VAR_16,
                                           VAR_1,
                                           VAR_18->name,
                                           VAR_6,
                                           VAR_11);
            }
        }
    }

    FUNC_9 (VAR_9);

    FUNC_4 (VAR_24);
}
