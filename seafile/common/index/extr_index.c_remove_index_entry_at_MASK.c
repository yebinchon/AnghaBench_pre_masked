
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct index_state {int cache_changed; int cache_nr; struct cache_entry** cache; } ;
struct cache_entry {int dummy; } ;


 int FUNC_0 (struct cache_entry*) ;
 int FUNC_1 (struct cache_entry**,struct cache_entry**,int) ;
 int FUNC_2 (struct index_state*,struct cache_entry*) ;

int FUNC_3(struct index_state *VAR_0, int VAR_1)
{
    struct cache_entry *VAR_2 = VAR_0->cache[VAR_1];


    FUNC_2(VAR_0, VAR_2);
    FUNC_0 (VAR_2);
    VAR_0->cache_changed = 1;
    VAR_0->cache_nr--;
    if (VAR_1 >= VAR_0->cache_nr)
        return 0;
    FUNC_1(VAR_0->cache + VAR_1,
            VAR_0->cache + VAR_1 + 1,
            (VAR_0->cache_nr - VAR_1) * sizeof(struct cache_entry *));
    return 1;
}
