
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct index_state {int cache_nr; struct cache_entry** cache; } ;
struct TYPE_2__ {int sec; } ;
struct cache_entry {int ce_flags; TYPE_1__ ce_mtime; int ce_mode; int sha1; int name; } ;
typedef int gboolean ;
typedef int ChangeSet ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int ,int ,int ) ;
 int FUNC_1 (char*,int ) ;

__attribute__((used)) static gboolean
FUNC_2 (struct index_state *VAR_3, ChangeSet *VAR_4)
{
    struct cache_entry *VAR_5;
    int VAR_6;
    gboolean VAR_7 = VAR_2;

    for (VAR_6 = 0; VAR_6 < VAR_3->cache_nr; ++VAR_6) {
        VAR_5 = VAR_3->cache[VAR_6];

        if (!(VAR_5->ce_flags & VAR_0))
            continue;

        FUNC_1 ("checking %s in changeset.\n", VAR_5->name);

        if (!FUNC_0 (VAR_4, VAR_5->name,
                                   VAR_5->sha1, VAR_5->ce_mode, VAR_5->ce_mtime.sec))
            VAR_7 = VAR_1;
    }

    return VAR_7;
}
