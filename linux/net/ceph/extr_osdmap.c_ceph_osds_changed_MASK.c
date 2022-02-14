
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_osds {int dummy; } ;


 int FUNC_0 (struct ceph_osds const*,struct ceph_osds const*) ;
 scalar_t__ FUNC_1 (struct ceph_osds const*,struct ceph_osds const*) ;

bool FUNC_2(const struct ceph_osds *VAR_0,
         const struct ceph_osds *VAR_1,
         bool VAR_2)
{
 if (FUNC_1(VAR_0, VAR_1))
  return 1;

 if (VAR_2 && !FUNC_0(VAR_0, VAR_1))
  return 1;

 return 0;
}
