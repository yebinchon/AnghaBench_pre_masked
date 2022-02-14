
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct index_state {int initialized; int name_hash_initialized; void* i_name_hash; void* name_hash; int cache_alloc; int cache; int cache_nr; } ;
struct cache_entry {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int VAR_0 ;
 void* FUNC_2 (int ,int ,int ,int *) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_3 (struct index_state *VAR_3)
{
    VAR_3->cache_alloc = FUNC_0(VAR_3->cache_nr);
    VAR_3->cache = FUNC_1(VAR_3->cache_alloc, sizeof(struct cache_entry *));
    VAR_3->name_hash = FUNC_2 (VAR_2, VAR_1,
                                               VAR_0, ((void*)0));




    VAR_3->initialized = 1;
    VAR_3->name_hash_initialized = 1;
}
