
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct net_bridge {int multicast_lock; } ;


 int FUNC_0 (struct net_bridge*) ;
 struct net_bridge* FUNC_1 (struct net_device const*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

bool FUNC_4(const struct net_device *VAR_0)
{
 struct net_bridge *VAR_1 = FUNC_1(VAR_0);
 bool VAR_2;

 FUNC_2(&VAR_1->multicast_lock);
 VAR_2 = FUNC_0(VAR_1);
 FUNC_3(&VAR_1->multicast_lock);
 return VAR_2;
}
