
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_pg_pool_info {int pg_num_mask; int pgp_num_mask; scalar_t__ pgp_num; scalar_t__ pg_num; } ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct ceph_pg_pool_info *VAR_0)
{
 VAR_0->pg_num_mask = (1 << FUNC_0(VAR_0->pg_num-1)) - 1;
 VAR_0->pgp_num_mask = (1 << FUNC_0(VAR_0->pgp_num-1)) - 1;
}
