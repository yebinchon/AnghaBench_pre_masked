
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_bridge {unsigned long multicast_router; int multicast_lock; int multicast_router_timer; } ;


 int VAR_0 ;



 int FUNC_0 (struct net_bridge*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct net_bridge *VAR_1, unsigned long VAR_2)
{
 int VAR_3 = -VAR_0;

 FUNC_2(&VAR_1->multicast_lock);

 switch (VAR_2) {
 case 130:
 case 129:
  FUNC_0(VAR_1, VAR_2 == 129);
  FUNC_1(&VAR_1->multicast_router_timer);
  VAR_1->multicast_router = VAR_2;
  VAR_3 = 0;
  break;
 case 128:
  if (VAR_1->multicast_router != 128)
   FUNC_0(VAR_1, 0);
  VAR_1->multicast_router = VAR_2;
  VAR_3 = 0;
  break;
 }

 FUNC_3(&VAR_1->multicast_lock);

 return VAR_3;
}
