
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct index_state {unsigned int cache_nr; int cache_changed; struct cache_entry** cache; } ;
struct cache_entry {int ce_flags; } ;
typedef scalar_t__ gboolean ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct cache_entry*) ;
 int FUNC_1 (struct index_state*,struct cache_entry*) ;

void FUNC_2(struct index_state *VAR_3)
{
    struct cache_entry **VAR_4 = VAR_3->cache;
    unsigned int VAR_5, VAR_6;
    gboolean VAR_7 = VAR_1;

    for (VAR_5 = VAR_6 = 0; VAR_5 < VAR_3->cache_nr; VAR_5++) {
        if (VAR_4[VAR_5]->ce_flags & VAR_0) {
            FUNC_1(VAR_3, VAR_4[VAR_5]);
            FUNC_0 (VAR_4[VAR_5]);
            VAR_7 = VAR_2;
        } else {
            VAR_4[VAR_6++] = VAR_4[VAR_5];
        }
    }
    if (VAR_7) {
        VAR_3->cache_changed = 1;
        VAR_3->cache_nr = VAR_6;
    }
}
