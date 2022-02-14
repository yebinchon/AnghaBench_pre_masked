
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_bridge {unsigned long multicast_igmp_version; int multicast_lock; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

int FUNC_2(struct net_bridge *VAR_1, unsigned long VAR_2)
{

 switch (VAR_2) {
 case 2:
 case 3:
  break;
 default:
  return -VAR_0;
 }

 FUNC_0(&VAR_1->multicast_lock);
 VAR_1->multicast_igmp_version = VAR_2;
 FUNC_1(&VAR_1->multicast_lock);

 return 0;
}
