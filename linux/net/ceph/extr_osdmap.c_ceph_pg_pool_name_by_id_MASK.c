
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct ceph_pg_pool_info {char const* name; } ;
struct ceph_osdmap {int pg_pools; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 struct ceph_pg_pool_info* FUNC_1 (int *,int) ;

const char *FUNC_2(struct ceph_osdmap *VAR_2, u64 VAR_3)
{
 struct ceph_pg_pool_info *VAR_4;

 if (VAR_3 == VAR_0)
  return ((void*)0);

 if (FUNC_0(VAR_3 > (u64) VAR_1))
  return ((void*)0);

 VAR_4 = FUNC_1(&VAR_2->pg_pools, (int) VAR_3);

 return VAR_4 ? VAR_4->name : ((void*)0);
}
