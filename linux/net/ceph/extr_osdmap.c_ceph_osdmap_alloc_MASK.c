
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_osdmap {int pool_max; int crush_workspace_mutex; void* pg_upmap_items; void* pg_upmap; void* primary_temp; void* pg_temp; void* pg_pools; } ;


 int VAR_0 ;
 void* VAR_1 ;
 struct ceph_osdmap* FUNC_0 (int,int ) ;
 int FUNC_1 (int *) ;

struct ceph_osdmap *FUNC_2(void)
{
 struct ceph_osdmap *VAR_2;

 VAR_2 = FUNC_0(sizeof(*VAR_2), VAR_0);
 if (!VAR_2)
  return ((void*)0);

 VAR_2->pg_pools = VAR_1;
 VAR_2->pool_max = -1;
 VAR_2->pg_temp = VAR_1;
 VAR_2->primary_temp = VAR_1;
 VAR_2->pg_upmap = VAR_1;
 VAR_2->pg_upmap_items = VAR_1;
 FUNC_1(&VAR_2->crush_workspace_mutex);

 return VAR_2;
}
