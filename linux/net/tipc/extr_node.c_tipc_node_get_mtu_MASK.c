
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tipc_node {int* active_links; TYPE_1__* links; } ;
struct net {int dummy; } ;
struct TYPE_2__ {unsigned int mtu; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 struct tipc_node* FUNC_1 (struct net*,int) ;
 int FUNC_2 (struct tipc_node*) ;
 scalar_t__ FUNC_3 (int) ;

int FUNC_4(struct net *VAR_2, u32 VAR_3, u32 VAR_4)
{
 struct tipc_node *VAR_5;
 int VAR_6;
 unsigned int VAR_7 = VAR_1;

 VAR_5 = FUNC_1(VAR_2, VAR_3);
 if (FUNC_3(!VAR_5))
  return VAR_7;

 VAR_6 = VAR_5->active_links[VAR_4 & 1];
 if (FUNC_0(VAR_6 != VAR_0))
  VAR_7 = VAR_5->links[VAR_6].mtu;
 FUNC_2(VAR_5);
 return VAR_7;
}
