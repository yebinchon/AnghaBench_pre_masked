
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct netdev_adjacent {int ignore; } ;
struct TYPE_2__ {int upper; int lower; } ;
struct net_device {TYPE_1__ adj_list; } ;


 struct netdev_adjacent* FUNC_0 (struct net_device*,int *) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_0,
          struct net_device *VAR_1,
          bool VAR_2)
{
 struct netdev_adjacent *VAR_3;

 VAR_3 = FUNC_0(VAR_1, &VAR_0->adj_list.lower);
 if (VAR_3)
  VAR_3->ignore = VAR_2;

 VAR_3 = FUNC_0(VAR_0, &VAR_1->adj_list.upper);
 if (VAR_3)
  VAR_3->ignore = VAR_2;
}
