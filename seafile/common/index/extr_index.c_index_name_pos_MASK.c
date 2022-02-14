
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct index_state {int cache_nr; struct cache_entry** cache; } ;
struct cache_entry {int ce_flags; int name; } ;


 int FUNC_0 (char const*,int,int ,int ) ;

int FUNC_1(const struct index_state *VAR_0, const char *VAR_1, int VAR_2)
{
    int VAR_3, VAR_4;

    VAR_3 = 0;
    VAR_4 = VAR_0->cache_nr;
    while (VAR_4 > VAR_3) {
        int VAR_5 = (VAR_4 + VAR_3) >> 1;
        struct cache_entry *VAR_6 = VAR_0->cache[VAR_5];
        int VAR_7 = FUNC_0(VAR_1, VAR_2, VAR_6->name, VAR_6->ce_flags);
        if (!VAR_7)
            return VAR_5;
        if (VAR_7 < 0) {
            VAR_4 = VAR_5;
            continue;
        }
        VAR_3 = VAR_5+1;
    }
    return -VAR_3-1;
}
