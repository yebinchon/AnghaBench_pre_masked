
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct ceph_pg_pool_info {int flags; int pgp_num_mask; int pgp_num; } ;
struct ceph_pg {scalar_t__ pool; int seed; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (int ,int ,int ) ;
 unsigned int FUNC_1 (int ,unsigned int,scalar_t__) ;

__attribute__((used)) static u32 FUNC_2(struct ceph_pg_pool_info *VAR_2,
    const struct ceph_pg *VAR_3)
{
 if (VAR_2->flags & VAR_0) {

  return FUNC_1(VAR_1,
          FUNC_0(VAR_3->seed,
            VAR_2->pgp_num,
            VAR_2->pgp_num_mask),
          VAR_3->pool);
 } else {






  return FUNC_0(VAR_3->seed, VAR_2->pgp_num,
           VAR_2->pgp_num_mask) +
         (unsigned)VAR_3->pool;
 }
}
