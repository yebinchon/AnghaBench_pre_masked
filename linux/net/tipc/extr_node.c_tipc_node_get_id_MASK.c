
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct tipc_node {int peer_id; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int ) ;
 struct tipc_node* FUNC_1 (struct net*,scalar_t__) ;
 int FUNC_2 (struct tipc_node*) ;
 scalar_t__ FUNC_3 (struct net*) ;
 int * FUNC_4 (struct net*) ;

bool FUNC_5(struct net *VAR_1, u32 VAR_2, u8 *VAR_3)
{
 u8 *VAR_4 = FUNC_4(VAR_1);
 struct tipc_node *VAR_5;

 if (!VAR_4)
  return 1;

 if (VAR_2 == FUNC_3(VAR_1)) {
  FUNC_0(VAR_3, VAR_4, VAR_0);
  return 1;
 }
 VAR_5 = FUNC_1(VAR_1, VAR_2);
 if (!VAR_5)
  return 0;

 FUNC_0(VAR_3, &VAR_5->peer_id, VAR_0);
 FUNC_2(VAR_5);
 return 1;
}
