
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct ceph_pg_pool_info {int dummy; } ;
struct ceph_osdmap {int pg_pools; } ;


 struct ceph_pg_pool_info* FUNC_0 (int *,int ) ;

struct ceph_pg_pool_info *FUNC_1(struct ceph_osdmap *VAR_0, u64 VAR_1)
{
 return FUNC_0(&VAR_0->pg_pools, VAR_1);
}
