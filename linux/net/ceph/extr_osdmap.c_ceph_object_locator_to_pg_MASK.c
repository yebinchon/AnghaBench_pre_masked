
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_pg_pool_info {int dummy; } ;
struct ceph_pg {int dummy; } ;
struct ceph_osdmap {int dummy; } ;
struct ceph_object_locator {int pool; } ;
struct ceph_object_id {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ceph_pg_pool_info*,struct ceph_object_id const*,struct ceph_object_locator const*,struct ceph_pg*) ;
 struct ceph_pg_pool_info* FUNC_1 (struct ceph_osdmap*,int ) ;

int FUNC_2(struct ceph_osdmap *VAR_1,
         const struct ceph_object_id *VAR_2,
         const struct ceph_object_locator *VAR_3,
         struct ceph_pg *VAR_4)
{
 struct ceph_pg_pool_info *VAR_5;

 VAR_5 = FUNC_1(VAR_1, VAR_3->pool);
 if (!VAR_5)
  return -VAR_0;

 FUNC_0(VAR_5, VAR_2, VAR_3, VAR_4);
 return 0;
}
