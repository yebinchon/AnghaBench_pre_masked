
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct tipc_node {int capabilities; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 struct tipc_node* FUNC_0 (struct net*,int ) ;
 int FUNC_1 (struct tipc_node*) ;
 scalar_t__ FUNC_2 (int) ;

u16 FUNC_3(struct net *VAR_1, u32 VAR_2)
{
 struct tipc_node *VAR_3;
 u16 VAR_4;

 VAR_3 = FUNC_0(VAR_1, VAR_2);
 if (FUNC_2(!VAR_3))
  return VAR_0;
 VAR_4 = VAR_3->capabilities;
 FUNC_1(VAR_3);
 return VAR_4;
}
