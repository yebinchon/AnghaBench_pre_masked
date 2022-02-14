
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct netdev_adjacent {void* private; } ;
struct TYPE_2__ {int lower; } ;
struct net_device {TYPE_1__ adj_list; } ;


 struct netdev_adjacent* FUNC_0 (struct net_device*,int *) ;

void *FUNC_1(struct net_device *VAR_0,
       struct net_device *VAR_1)
{
 struct netdev_adjacent *VAR_2;

 if (!VAR_1)
  return ((void*)0);
 VAR_2 = FUNC_0(VAR_1, &VAR_0->adj_list.lower);
 if (!VAR_2)
  return ((void*)0);

 return VAR_2->private;
}
