
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct netprio_map {int priomap_len; scalar_t__* priomap; } ;
struct net_device {int priomap; } ;
struct cgroup_subsys_state {TYPE_1__* cgroup; } ;
struct TYPE_2__ {int id; } ;


 int FUNC_0 (struct net_device*,int) ;
 struct netprio_map* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct cgroup_subsys_state *VAR_0,
       struct net_device *VAR_1, u32 VAR_2)
{
 struct netprio_map *VAR_3;
 int VAR_4 = VAR_0->cgroup->id;
 int VAR_5;


 VAR_3 = FUNC_1(VAR_1->priomap);
 if (!VAR_2 && (!VAR_3 || VAR_3->priomap_len <= VAR_4))
  return 0;

 VAR_5 = FUNC_0(VAR_1, VAR_4);
 if (VAR_5)
  return VAR_5;

 VAR_3 = FUNC_1(VAR_1->priomap);
 VAR_3->priomap[VAR_4] = VAR_2;
 return 0;
}
