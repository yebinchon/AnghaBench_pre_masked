
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ceph_monmap {int num_mon; TYPE_1__* mon_inst; } ;
struct ceph_entity_addr {int dummy; } ;
struct TYPE_2__ {int addr; } ;


 scalar_t__ FUNC_0 (struct ceph_entity_addr*,int *,int) ;

int FUNC_1(struct ceph_monmap *VAR_0, struct ceph_entity_addr *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->num_mon; VAR_2++)
  if (FUNC_0(VAR_1, &VAR_0->mon_inst[VAR_2].addr, sizeof(*VAR_1)) == 0)
   return 1;
 return 0;
}
