
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int ip_ptr; } ;
struct in_ifaddr {int dummy; } ;
struct in_device {int dead; int rcu_head; int arp_parms; int ifa_list; struct net_device* dev; } ;


 int FUNC_0 () ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct net_device*) ;
 int VAR_0 ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (struct in_device*) ;
 int VAR_1 ;
 int FUNC_5 (struct in_device*,int *,int ) ;
 int FUNC_6 (struct in_ifaddr*) ;
 int FUNC_7 (struct in_device*) ;
 int FUNC_8 (int *,int ) ;
 struct in_ifaddr* FUNC_9 (int ) ;

__attribute__((used)) static void FUNC_10(struct in_device *VAR_2)
{
 struct net_device *VAR_3;
 struct in_ifaddr *VAR_4;

 FUNC_0();

 VAR_3 = VAR_2->dev;

 VAR_2->dead = 1;

 FUNC_7(VAR_2);

 while ((VAR_4 = FUNC_9(VAR_2->ifa_list)) != ((void*)0)) {
  FUNC_5(VAR_2, &VAR_2->ifa_list, 0);
  FUNC_6(VAR_4);
 }

 FUNC_1(VAR_3->ip_ptr, ((void*)0));

 FUNC_4(VAR_2);
 FUNC_8(&VAR_0, VAR_2->arp_parms);
 FUNC_2(VAR_3);

 FUNC_3(&VAR_2->rcu_head, VAR_1);
}
