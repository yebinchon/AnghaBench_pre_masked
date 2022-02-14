
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tipc_bc_base {int rc_ratio; } ;
struct net {int dummy; } ;


 struct tipc_bc_base* FUNC_0 (struct net*) ;

u32 FUNC_1(struct net *VAR_0)
{
 struct tipc_bc_base *VAR_1 = FUNC_0(VAR_0);

 return VAR_1->rc_ratio;
}
