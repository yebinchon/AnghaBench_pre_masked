
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_bridge_port {int dummy; } ;
struct net_bridge {int dummy; } ;
struct bridge_mcast_other_query {int dummy; } ;
struct br_ip {int dummy; } ;


 int FUNC_0 (struct net_bridge*,struct net_bridge_port*) ;
 int FUNC_1 (struct net_bridge*,struct net_bridge_port*,struct br_ip*) ;
 int FUNC_2 (struct net_bridge*,struct bridge_mcast_other_query*,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct net_bridge *VAR_0,
     struct net_bridge_port *VAR_1,
     struct bridge_mcast_other_query *VAR_2,
     struct br_ip *VAR_3,
     unsigned long VAR_4)
{
 if (!FUNC_1(VAR_0, VAR_1, VAR_3))
  return;

 FUNC_2(VAR_0, VAR_2, VAR_4);
 FUNC_0(VAR_0, VAR_1);
}
