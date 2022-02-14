
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tipc_net {int sk_rht; } ;
struct rhashtable_iter {int dummy; } ;
struct netlink_callback {long* args; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct rhashtable_iter* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,struct rhashtable_iter*) ;
 struct tipc_net* FUNC_2 (struct net*) ;

int FUNC_3(struct netlink_callback *VAR_2, struct net *VAR_3)
{

 struct rhashtable_iter *VAR_4 = (void *)VAR_2->args[4];
 struct tipc_net *VAR_5 = FUNC_2(VAR_3);

 if (!VAR_4) {
  VAR_4 = FUNC_0(sizeof(*VAR_4), VAR_1);
  if (!VAR_4)
   return -VAR_0;

  VAR_2->args[4] = (long)VAR_4;
 }

 FUNC_1(&VAR_5->sk_rht, VAR_4);
 return 0;
}
