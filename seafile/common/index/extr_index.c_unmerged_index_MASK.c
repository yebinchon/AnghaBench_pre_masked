
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct index_state {int cache_nr; int * cache; } ;


 scalar_t__ FUNC_0 (int ) ;

int FUNC_1(const struct index_state *VAR_0)
{
    int VAR_1;
    for (VAR_1 = 0; VAR_1 < VAR_0->cache_nr; VAR_1++) {
        if (FUNC_0(VAR_0->cache[VAR_1]))
            return 1;
    }
    return 0;
}
