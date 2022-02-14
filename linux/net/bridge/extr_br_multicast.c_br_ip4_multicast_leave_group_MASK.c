
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bridge_mcast_own_query {int dummy; } ;
struct net_bridge_port {struct bridge_mcast_own_query ip4_own_query; } ;
struct net_bridge {int ip4_other_query; struct bridge_mcast_own_query ip4_own_query; } ;
struct TYPE_2__ {int ip4; } ;
struct br_ip {int vid; int proto; TYPE_1__ u; } ;
typedef int br_group ;
typedef int __u16 ;
typedef int __be32 ;


 int VAR_0 ;
 int FUNC_0 (struct net_bridge*,struct net_bridge_port*,struct br_ip*,int *,struct bridge_mcast_own_query*,unsigned char const*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct br_ip*,int ,int) ;

__attribute__((used)) static void FUNC_4(struct net_bridge *VAR_1,
      struct net_bridge_port *VAR_2,
      __be32 VAR_3,
      __u16 VAR_4,
      const unsigned char *VAR_5)
{
 struct br_ip VAR_6;
 struct bridge_mcast_own_query *VAR_7;

 if (FUNC_2(VAR_3))
  return;

 VAR_7 = VAR_2 ? &VAR_2->ip4_own_query : &VAR_1->ip4_own_query;

 FUNC_3(&VAR_6, 0, sizeof(VAR_6));
 VAR_6.u.ip4 = VAR_3;
 VAR_6.proto = FUNC_1(VAR_0);
 VAR_6.vid = VAR_4;

 FUNC_0(VAR_1, VAR_2, &VAR_6, &VAR_1->ip4_other_query,
     VAR_7, VAR_5);
}
