
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct index_state {int dummy; } ;
struct cache_entry {int dummy; } ;
typedef scalar_t__ gboolean ;
struct TYPE_5__ {int sync_mgr; } ;
struct TYPE_4__ {int id; int is_readonly; } ;
typedef scalar_t__ SyncStatus ;
typedef int SeafStat ;
typedef TYPE_1__ SeafRepo ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct cache_entry*,int *,int ) ;
 struct cache_entry* FUNC_1 (struct index_state*,char const*,int ,int ) ;
 scalar_t__ FUNC_2 (int ,int ,char const*) ;
 TYPE_3__* VAR_4 ;
 int FUNC_3 (int ,int ,char const*) ;
 int FUNC_4 (int ,int ,char const*,int ,scalar_t__) ;
 int FUNC_5 (char const*) ;

__attribute__((used)) static void
FUNC_6 (SeafRepo *VAR_5,
                    const char *VAR_6,
                    SeafStat *VAR_7,
                    struct index_state *VAR_8,
                    gboolean VAR_9)
{
    if (VAR_9) {
        FUNC_4 (VAR_4->sync_mgr,
                                              VAR_5->id,
                                              VAR_6,
                                              VAR_3,
                                              VAR_0);
    } else {
        SyncStatus VAR_10;
        gboolean VAR_11;

        struct cache_entry *VAR_12 = FUNC_1(VAR_8, VAR_6, FUNC_5(VAR_6), 0);
        if (!VAR_12 || FUNC_0(VAR_12, VAR_7, 0) != 0)
            VAR_10 = VAR_2;
        else
            VAR_10 = VAR_1;

        VAR_11 = FUNC_2 (VAR_5->id, VAR_5->is_readonly, VAR_6);

        if (!VAR_11 && VAR_10 == VAR_2)
            FUNC_3 (VAR_4->sync_mgr,
                                                  VAR_5->id,
                                                  VAR_6);
        else
            FUNC_4 (VAR_4->sync_mgr,
                                                  VAR_5->id,
                                                  VAR_6,
                                                  VAR_3,
                                                  VAR_10);
    }
}
