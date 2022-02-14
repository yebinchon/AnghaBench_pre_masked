
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct index_state {scalar_t__ name_hash_initialized; } ;
struct cache_entry {int ce_flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct index_state*,struct cache_entry*) ;

void FUNC_1(struct index_state *VAR_1, struct cache_entry *VAR_2)
{
    VAR_2->ce_flags &= ~VAR_0;
    if (VAR_1->name_hash_initialized)
        FUNC_0(VAR_1, VAR_2);
}
