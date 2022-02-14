
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tipc_net {int node_addr; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (struct net*) ;
 int FUNC_2 (struct net*,int ,int ,int ,int ,int ,int ) ;
 struct tipc_net* FUNC_3 (struct net*) ;
 int FUNC_4 (struct net*,int ) ;
 int FUNC_5 (struct net*) ;

__attribute__((used)) static void FUNC_6(struct net *VAR_2, u32 VAR_3)
{
 struct tipc_net *VAR_4 = FUNC_3(VAR_2);

 if (FUNC_0(&VAR_4->node_addr, 0, VAR_3))
  return;
 FUNC_4(VAR_2, VAR_3);
 FUNC_1(VAR_2);
 FUNC_5(VAR_2);
 FUNC_2(VAR_2, VAR_0, VAR_3, VAR_3,
        VAR_1, 0, VAR_3);
}
