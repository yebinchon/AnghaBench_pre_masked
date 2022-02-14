
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tipc_bc_base {int rc_ratio; int rcast_support; int bcast_support; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct tipc_bc_base* FUNC_0 (struct net*) ;
 int FUNC_1 (struct net*) ;
 int FUNC_2 (struct net*) ;
 int FUNC_3 (struct net*) ;

__attribute__((used)) static int FUNC_4(struct net *VAR_2, u32 VAR_3)
{
 struct tipc_bc_base *VAR_4 = FUNC_0(VAR_2);

 if (!VAR_4->bcast_support || !VAR_4->rcast_support)
  return -VAR_1;

 if (VAR_3 > 100 || VAR_3 <= 0)
  return -VAR_0;

 VAR_4->rc_ratio = VAR_3;
 FUNC_1(VAR_2);
 FUNC_3(VAR_2);
 FUNC_2(VAR_2);

 return 0;
}
