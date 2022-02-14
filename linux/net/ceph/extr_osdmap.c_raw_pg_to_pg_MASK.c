
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_pg_pool_info {int pg_num_mask; int pg_num; } ;
struct ceph_pg {int seed; int pool; } ;


 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct ceph_pg_pool_info *VAR_0,
    const struct ceph_pg *VAR_1,
    struct ceph_pg *VAR_2)
{
 VAR_2->pool = VAR_1->pool;
 VAR_2->seed = FUNC_0(VAR_1->seed, VAR_0->pg_num,
         VAR_0->pg_num_mask);
}
