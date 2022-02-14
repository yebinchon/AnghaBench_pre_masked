
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_pg_pool_info {scalar_t__ was_full; } ;
struct ceph_osd_client {int osdmap; } ;
typedef int s64 ;


 int FUNC_0 (struct ceph_pg_pool_info*) ;
 struct ceph_pg_pool_info* FUNC_1 (int ,int ) ;

__attribute__((used)) static bool FUNC_2(struct ceph_osd_client *VAR_0, s64 VAR_1)
{
 struct ceph_pg_pool_info *VAR_2;

 VAR_2 = FUNC_1(VAR_0->osdmap, VAR_1);
 if (!VAR_2)
  return 0;

 return VAR_2->was_full && !FUNC_0(VAR_2);
}
