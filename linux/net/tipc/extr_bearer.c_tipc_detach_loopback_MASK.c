
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tipc_net {int loopback_pt; } ;
struct net {int loopback_dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 struct tipc_net* FUNC_2 (struct net*) ;

void FUNC_3(struct net *VAR_0)
{
 struct tipc_net *VAR_1 = FUNC_2(VAR_0);

 FUNC_1(&VAR_1->loopback_pt);
 FUNC_0(VAR_0->loopback_dev);
}
