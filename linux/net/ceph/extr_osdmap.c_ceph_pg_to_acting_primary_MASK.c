
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_pg_pool_info {int dummy; } ;
struct ceph_pg {int pool; } ;
struct ceph_osds {int primary; } ;
struct ceph_osdmap {int dummy; } ;


 struct ceph_pg_pool_info* FUNC_0 (struct ceph_osdmap*,int ) ;
 int FUNC_1 (struct ceph_osdmap*,struct ceph_pg_pool_info*,struct ceph_pg const*,struct ceph_osds*,struct ceph_osds*) ;

int FUNC_2(struct ceph_osdmap *VAR_0,
         const struct ceph_pg *VAR_1)
{
 struct ceph_pg_pool_info *VAR_2;
 struct ceph_osds VAR_3, VAR_4;

 VAR_2 = FUNC_0(VAR_0, VAR_1->pool);
 if (!VAR_2)
  return -1;

 FUNC_1(VAR_0, VAR_2, VAR_1, &VAR_3, &VAR_4);
 return VAR_4.primary;
}
