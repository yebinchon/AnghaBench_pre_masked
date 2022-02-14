
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tipc_node {int dummy; } ;
struct net {int dummy; } ;
struct TYPE_2__ {int random; } ;


 TYPE_1__* FUNC_0 (struct net*) ;
 struct tipc_node* FUNC_1 (struct net*,int ) ;
 int FUNC_2 (struct tipc_node*) ;

__attribute__((used)) static u32 FUNC_3(struct net *VAR_0, u32 VAR_1)
{
 struct tipc_node *VAR_2;

 VAR_1 ^= FUNC_0(VAR_0)->random;
 while ((VAR_2 = FUNC_1(VAR_0, VAR_1))) {
  FUNC_2(VAR_2);
  VAR_1++;
 }
 return VAR_1;
}
