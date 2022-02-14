
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rb_root {int dummy; } ;
struct ceph_pg_pool_info {struct ceph_pg_pool_info* name; int node; } ;


 int FUNC_0 (struct ceph_pg_pool_info*) ;
 int FUNC_1 (int *,struct rb_root*) ;

__attribute__((used)) static void FUNC_2(struct rb_root *VAR_0, struct ceph_pg_pool_info *VAR_1)
{
 FUNC_1(&VAR_1->node, VAR_0);
 FUNC_0(VAR_1->name);
 FUNC_0(VAR_1);
}
