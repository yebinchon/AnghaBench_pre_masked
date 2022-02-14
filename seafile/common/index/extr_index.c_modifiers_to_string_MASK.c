
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct index_state {int cache_nr; struct cache_entry** cache; } ;
struct cache_entry {int ce_flags; int modifier; int name; int ce_mode; } ;
typedef int GString ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (char*,int ) ;

__attribute__((used)) static int
FUNC_3 (GString *VAR_1, struct index_state *VAR_2)
{
    int VAR_3;
    struct cache_entry *VAR_4;

    for (VAR_3 = 0; VAR_3 < VAR_2->cache_nr; ++VAR_3) {
        VAR_4 = VAR_2->cache[VAR_3];
        if (FUNC_0(VAR_4->ce_mode) || (VAR_4->ce_flags & VAR_0))
            continue;
        if (!VAR_4->modifier) {
            FUNC_2 ("BUG: index entry %s doesn't have modifier info.\n",
                       VAR_4->name);
            return -1;
        }
        FUNC_1 (VAR_1, "%s\n", VAR_4->modifier);
    }

    return 0;
}
