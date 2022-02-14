
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tipc_bc_base {scalar_t__ rcast_support; scalar_t__ bcast_support; scalar_t__ force_rcast; scalar_t__ force_bcast; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct tipc_bc_base* FUNC_0 (struct net*) ;

u32 FUNC_1(struct net *VAR_3)
{
 struct tipc_bc_base *VAR_4 = FUNC_0(VAR_3);

 if (VAR_4->force_bcast)
  return VAR_0;

 if (VAR_4->force_rcast)
  return VAR_1;

 if (VAR_4->bcast_support && VAR_4->rcast_support)
  return VAR_2;

 return 0;
}
