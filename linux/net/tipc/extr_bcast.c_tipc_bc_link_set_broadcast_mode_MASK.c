
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tipc_bc_base {int force_bcast; int force_rcast; int rcast_support; int bcast_support; } ;
struct net {int dummy; } ;





 int VAR_0 ;
 int VAR_1 ;
 struct tipc_bc_base* FUNC_0 (struct net*) ;

__attribute__((used)) static int FUNC_1(struct net *VAR_2, u32 VAR_3)
{
 struct tipc_bc_base *VAR_4 = FUNC_0(VAR_2);

 switch (VAR_3) {
 case 130:
  if (!VAR_4->bcast_support)
   return -VAR_1;

  VAR_4->force_bcast = 1;
  VAR_4->force_rcast = 0;
  break;
 case 129:
  if (!VAR_4->rcast_support)
   return -VAR_1;

  VAR_4->force_bcast = 0;
  VAR_4->force_rcast = 1;
  break;
 case 128:
  if (!VAR_4->bcast_support || !VAR_4->rcast_support)
   return -VAR_1;

  VAR_4->force_bcast = 0;
  VAR_4->force_rcast = 0;
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
