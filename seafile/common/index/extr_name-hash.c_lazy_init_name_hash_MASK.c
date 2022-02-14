
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct index_state {int name_hash_initialized; int cache_nr; int * cache; } ;


 int FUNC_0 (struct index_state*,int ) ;

__attribute__((used)) static void FUNC_1(struct index_state *VAR_0)
{
    int VAR_1;

    if (VAR_0->name_hash_initialized)
        return;
    for (VAR_1 = 0; VAR_1 < VAR_0->cache_nr; VAR_1++)
        FUNC_0(VAR_0, VAR_0->cache[VAR_1]);
    VAR_0->name_hash_initialized = 1;
}
