
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct calipso_map_cache_entry {struct calipso_map_cache_entry* key; scalar_t__ lsm_data; } ;


 int FUNC_0 (struct calipso_map_cache_entry*) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct calipso_map_cache_entry *VAR_0)
{
 if (VAR_0->lsm_data)
  FUNC_1(VAR_0->lsm_data);
 FUNC_0(VAR_0->key);
 FUNC_0(VAR_0);
}
