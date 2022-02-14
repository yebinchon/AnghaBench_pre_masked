
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tipc_net {int sk_rht; } ;
struct net {int dummy; } ;


 struct tipc_net* FUNC_0 (struct net*,int ) ;
 int FUNC_1 (int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;

int FUNC_2(struct net *VAR_2)
{
 struct tipc_net *VAR_3 = FUNC_0(VAR_2, VAR_0);

 return FUNC_1(&VAR_3->sk_rht, &VAR_1);
}
