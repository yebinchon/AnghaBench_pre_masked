
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct tipc_net {scalar_t__ mon_threshold; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct tipc_net* FUNC_0 (struct net*) ;

int FUNC_1(struct net *VAR_2, u32 VAR_3)
{
 struct tipc_net *VAR_4 = FUNC_0(VAR_2);

 if (VAR_3 > VAR_1)
  return -VAR_0;

 VAR_4->mon_threshold = VAR_3;

 return 0;
}
