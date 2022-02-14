
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_pg {scalar_t__ pool; scalar_t__ seed; } ;



int FUNC_0(const struct ceph_pg *VAR_0, const struct ceph_pg *VAR_1)
{
 if (VAR_0->pool < VAR_1->pool)
  return -1;
 if (VAR_0->pool > VAR_1->pool)
  return 1;
 if (VAR_0->seed < VAR_1->seed)
  return -1;
 if (VAR_0->seed > VAR_1->seed)
  return 1;

 return 0;
}
