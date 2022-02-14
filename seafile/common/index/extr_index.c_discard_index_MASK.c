
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ nsec; scalar_t__ sec; } ;
struct index_state {int cache_nr; scalar_t__ initialized; int * alloc; int * cache; int i_name_hash; int name_hash; scalar_t__ name_hash_initialized; TYPE_1__ timestamp; scalar_t__ cache_changed; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;

int FUNC_3(struct index_state *VAR_0)
{
    int VAR_1;
    for (VAR_1 = 0; VAR_1 < VAR_0->cache_nr; ++VAR_1)
        FUNC_0 (VAR_0->cache[VAR_1]);

    VAR_0->cache_nr = 0;
    VAR_0->cache_changed = 0;
    VAR_0->timestamp.sec = 0;
    VAR_0->timestamp.nsec = 0;
    VAR_0->name_hash_initialized = 0;
    FUNC_2 (VAR_0->name_hash);





    FUNC_1(VAR_0->cache);
    VAR_0->alloc = ((void*)0);
    VAR_0->initialized = 0;


    return 0;
}
