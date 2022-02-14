
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_osds {scalar_t__ primary; int size; } ;


 scalar_t__ FUNC_0 (scalar_t__,struct ceph_osds const*) ;

__attribute__((used)) static bool FUNC_1(const struct ceph_osds *VAR_0,
       const struct ceph_osds *VAR_1)
{
 if (!VAR_0->size && !VAR_1->size)
  return 0;

 if (!VAR_0->size ^ !VAR_1->size)
  return 1;

 if (VAR_0->primary != VAR_1->primary)
  return 1;

 if (FUNC_0(VAR_0->primary, VAR_0) !=
     FUNC_0(VAR_1->primary, VAR_1))
  return 1;

 return 0;
}
