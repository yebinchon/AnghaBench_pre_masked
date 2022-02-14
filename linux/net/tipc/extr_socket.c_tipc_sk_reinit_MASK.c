
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tipc_msg {int dummy; } ;
struct tipc_sock {int sk; struct tipc_msg phdr; } ;
struct tipc_net {int sk_rht; } ;
struct rhashtable_iter {int dummy; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 struct tipc_sock* FUNC_0 (int ) ;
 int FUNC_1 (struct tipc_sock*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct tipc_msg*,int ) ;
 int FUNC_4 (struct tipc_msg*,int ) ;
 struct tipc_net* FUNC_5 (struct net*,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,struct rhashtable_iter*) ;
 int FUNC_8 (struct rhashtable_iter*) ;
 struct tipc_sock* FUNC_9 (struct rhashtable_iter*) ;
 int FUNC_10 (struct rhashtable_iter*) ;
 int FUNC_11 (struct rhashtable_iter*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int VAR_1 ;
 int FUNC_14 (struct net*) ;

void FUNC_15(struct net *VAR_2)
{
 struct tipc_net *VAR_3 = FUNC_5(VAR_2, VAR_1);
 struct rhashtable_iter VAR_4;
 struct tipc_sock *VAR_5;
 struct tipc_msg *VAR_6;

 FUNC_7(&VAR_3->sk_rht, &VAR_4);

 do {
  FUNC_10(&VAR_4);

  while ((VAR_5 = FUNC_9(&VAR_4)) && !FUNC_1(VAR_5)) {
   FUNC_12(&VAR_5->sk);
   FUNC_11(&VAR_4);
   FUNC_2(&VAR_5->sk);
   VAR_6 = &VAR_5->phdr;
   FUNC_4(VAR_6, FUNC_14(VAR_2));
   FUNC_3(VAR_6, FUNC_14(VAR_2));
   FUNC_6(&VAR_5->sk);
   FUNC_10(&VAR_4);
   FUNC_13(&VAR_5->sk);
  }

  FUNC_11(&VAR_4);
 } while (VAR_5 == FUNC_0(-VAR_0));

 FUNC_8(&VAR_4);
}
