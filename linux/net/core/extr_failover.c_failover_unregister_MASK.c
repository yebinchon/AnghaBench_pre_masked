
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int priv_flags; int name; } ;
struct failover {int list; int failover_dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*) ;
 int VAR_1 ;
 int FUNC_1 (struct failover*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct net_device*,char*,int ) ;
 struct net_device* FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

void FUNC_7(struct failover *VAR_2)
{
 struct net_device *VAR_3;

 VAR_3 = FUNC_4(VAR_2->failover_dev);

 FUNC_3(VAR_3, "failover master:%s unregistered\n",
      VAR_3->name);

 VAR_3->priv_flags &= ~VAR_0;
 FUNC_0(VAR_3);

 FUNC_5(&VAR_1);
 FUNC_2(&VAR_2->list);
 FUNC_6(&VAR_1);

 FUNC_1(VAR_2);
}
