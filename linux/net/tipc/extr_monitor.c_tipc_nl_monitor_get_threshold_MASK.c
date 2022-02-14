
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tipc_net {int mon_threshold; } ;
struct net {int dummy; } ;


 struct tipc_net* FUNC_0 (struct net*) ;

int FUNC_1(struct net *VAR_0)
{
 struct tipc_net *VAR_1 = FUNC_0(VAR_0);

 return VAR_1->mon_threshold;
}
