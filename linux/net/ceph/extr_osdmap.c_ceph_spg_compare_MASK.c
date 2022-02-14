
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_spg {scalar_t__ shard; int pgid; } ;


 int FUNC_0 (int *,int *) ;

int FUNC_1(const struct ceph_spg *VAR_0, const struct ceph_spg *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_0(&VAR_0->pgid, &VAR_1->pgid);
 if (VAR_2)
  return VAR_2;

 if (VAR_0->shard < VAR_1->shard)
  return -1;
 if (VAR_0->shard > VAR_1->shard)
  return 1;

 return 0;
}
