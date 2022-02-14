
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tipc_net {scalar_t__ mon_threshold; } ;
struct tipc_monitor {scalar_t__ peer_cnt; } ;
struct net {int dummy; } ;


 struct tipc_net* FUNC_0 (struct net*) ;

__attribute__((used)) static inline bool FUNC_1(struct net *VAR_0, struct tipc_monitor *VAR_1)
{
 struct tipc_net *VAR_2 = FUNC_0(VAR_0);

 return VAR_1->peer_cnt > VAR_2->mon_threshold;
}
