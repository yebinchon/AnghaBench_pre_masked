
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct netprio_map {int priomap_len; int * priomap; } ;
struct net_device {int priomap; } ;
struct cgroup_subsys_state {TYPE_1__* cgroup; } ;
struct TYPE_2__ {int id; } ;


 struct netprio_map* FUNC_0 (int ) ;

__attribute__((used)) static u32 FUNC_1(struct cgroup_subsys_state *VAR_0, struct net_device *VAR_1)
{
 struct netprio_map *VAR_2 = FUNC_0(VAR_1->priomap);
 int VAR_3 = VAR_0->cgroup->id;

 if (VAR_2 && VAR_3 < VAR_2->priomap_len)
  return VAR_2->priomap[VAR_3];
 return 0;
}
