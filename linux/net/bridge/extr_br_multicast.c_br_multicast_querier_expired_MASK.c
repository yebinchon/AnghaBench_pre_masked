
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_bridge {int multicast_lock; int dev; } ;
struct bridge_mcast_own_query {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_bridge*,struct bridge_mcast_own_query*) ;
 int FUNC_1 (struct net_bridge*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct net_bridge *VAR_1,
      struct bridge_mcast_own_query *VAR_2)
{
 FUNC_3(&VAR_1->multicast_lock);
 if (!FUNC_2(VAR_1->dev) || !FUNC_1(VAR_1, VAR_0))
  goto out;

 FUNC_0(VAR_1, VAR_2);

out:
 FUNC_4(&VAR_1->multicast_lock);
}
