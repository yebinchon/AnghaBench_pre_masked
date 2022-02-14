
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct index_state {int dummy; } ;
struct TYPE_6__ {int sec; } ;
struct cache_entry {int ce_flags; TYPE_1__ ce_mtime; } ;
typedef scalar_t__ gboolean ;
struct TYPE_8__ {int sync_mgr; } ;
struct TYPE_7__ {int mtime; int mode; int name; } ;
typedef scalar_t__ IgnoreReason ;
typedef int GHashTable ;
typedef TYPE_2__ DiffEntry ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (struct index_state*,struct cache_entry*,int) ;
 struct cache_entry* FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (char const*,int ,int ,struct cache_entry*,int *,int *) ;
 struct cache_entry* FUNC_3 (struct index_state*,int ,int ,int ) ;
 TYPE_3__* VAR_10 ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (int ,char const*,int ,int ,int ) ;
 int FUNC_7 (char const*,char const*,int ,int ) ;
 scalar_t__ FUNC_8 (int ,scalar_t__*) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static void
FUNC_10 (const char *VAR_11,
                     const char *VAR_12,
                     const char *VAR_13,
                     struct index_state *VAR_14,
                     DiffEntry *VAR_15,
                     GHashTable *VAR_16,
                     GHashTable *VAR_17)
{
    FUNC_4 ("Checkout empty dir %s.\n", VAR_15->name);

    struct cache_entry *VAR_18;
    gboolean VAR_19 = VAR_3;

    VAR_18 = FUNC_3 (VAR_14, VAR_15->name, FUNC_9(VAR_15->name), 0);
    if (!VAR_18) {
        VAR_18 = FUNC_1 (VAR_15);
        VAR_19 = VAR_9;
    }

    IgnoreReason VAR_20;
    if (FUNC_8 (VAR_15->name, &VAR_20)) {
        FUNC_5 ("Path %s is invalid on Windows, skip checkout\n",
                      VAR_15->name);
        if (VAR_20 == VAR_4)
            FUNC_7 (VAR_11, VAR_12, VAR_15->name,
                                               VAR_6);
        else if (VAR_20 == VAR_5)
            FUNC_7 (VAR_11, VAR_12, VAR_15->name,
                                               VAR_7);
        goto update_index;
    }

    FUNC_2 (VAR_13,
                        VAR_15->name,
                        VAR_15->mtime,
                        VAR_18,
                        VAR_16,
                        VAR_17);

    FUNC_6 (VAR_10->sync_mgr,
                                          VAR_11,
                                          VAR_15->name,
                                          VAR_15->mode,
                                          VAR_8);

update_index:
    if (VAR_19) {
        if (!(VAR_18->ce_flags & VAR_2)) {
            FUNC_0 (VAR_14, VAR_18,
                             (VAR_0|VAR_1));
        }
    } else
        VAR_18->ce_mtime.sec = VAR_15->mtime;
}
