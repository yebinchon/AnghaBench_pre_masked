
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tipc_bc_base {int bc_threshold; int rc_ratio; } ;
struct net {int dummy; } ;


 struct tipc_bc_base* FUNC_0 (struct net*) ;
 int FUNC_1 (struct net*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct net *VAR_0)
{
 struct tipc_bc_base *VAR_1 = FUNC_0(VAR_0);
 int VAR_2 = FUNC_2(FUNC_1(VAR_0));

 VAR_1->bc_threshold = 1 + (VAR_2 * VAR_1->rc_ratio / 100);
}
