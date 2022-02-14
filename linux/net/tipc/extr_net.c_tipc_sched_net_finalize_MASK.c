
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tipc_net_work {int work; int addr; struct net* net; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 struct tipc_net_work* FUNC_1 (int,int ) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;

void FUNC_3(struct net *VAR_2, u32 VAR_3)
{
 struct tipc_net_work *VAR_4 = FUNC_1(sizeof(*VAR_4), VAR_0);

 if (!VAR_4)
  return;
 FUNC_0(&VAR_4->work, VAR_1);
 VAR_4->net = VAR_2;
 VAR_4->addr = VAR_3;
 FUNC_2(&VAR_4->work);
}
