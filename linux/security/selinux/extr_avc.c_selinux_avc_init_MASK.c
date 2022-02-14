
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lru_hint; int active_nodes; int * slots_lock; int * slots; } ;
struct selinux_avc {TYPE_1__ avc_cache; int avc_cache_threshold; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 struct selinux_avc VAR_2 ;
 int FUNC_2 (int *) ;

void FUNC_3(struct selinux_avc **VAR_3)
{
 int VAR_4;

 VAR_2.avc_cache_threshold = VAR_1;
 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  FUNC_0(&VAR_2.avc_cache.slots[VAR_4]);
  FUNC_2(&VAR_2.avc_cache.slots_lock[VAR_4]);
 }
 FUNC_1(&VAR_2.avc_cache.active_nodes, 0);
 FUNC_1(&VAR_2.avc_cache.lru_hint, 0);
 *VAR_3 = &VAR_2;
}
