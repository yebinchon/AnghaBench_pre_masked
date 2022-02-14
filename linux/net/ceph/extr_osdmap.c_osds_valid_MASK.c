
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_osds {scalar_t__ size; int primary; scalar_t__* osds; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static bool FUNC_0(const struct ceph_osds *VAR_1)
{

 if (VAR_1->size > 0 && VAR_1->primary >= 0)
  return 1;


 if (!VAR_1->size && VAR_1->primary == -1)
  return 1;


 if (VAR_1->size > 0 && VAR_1->primary == -1) {
  int VAR_2;

  for (VAR_2 = 0; VAR_2 < VAR_1->size; VAR_2++) {
   if (VAR_1->osds[VAR_2] != VAR_0)
    break;
  }
  if (VAR_2 == VAR_1->size)
   return 1;
 }

 return 0;
}
