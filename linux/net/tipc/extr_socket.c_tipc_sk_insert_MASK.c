
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct sock {int dummy; } ;
struct tipc_sock {struct sock sk; int node; scalar_t__ portid; } ;
struct tipc_net {int sk_rht; } ;
struct net {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct tipc_net* FUNC_0 (struct net*,int ) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int *,int *,int ) ;
 int FUNC_3 (struct sock*) ;
 struct net* FUNC_4 (struct sock*) ;
 int FUNC_5 (struct sock*) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_6(struct tipc_sock *VAR_4)
{
 struct sock *VAR_5 = &VAR_4->sk;
 struct net *VAR_6 = FUNC_4(VAR_5);
 struct tipc_net *VAR_7 = FUNC_0(VAR_6, VAR_2);
 u32 VAR_8 = (VAR_0 - VAR_1) + 1;
 u32 VAR_9 = FUNC_1() % VAR_8 + VAR_1;

 while (VAR_8--) {
  VAR_9++;
  if ((VAR_9 < VAR_1) || (VAR_9 > VAR_0))
   VAR_9 = VAR_1;
  VAR_4->portid = VAR_9;
  FUNC_3(&VAR_4->sk);
  if (!FUNC_2(&VAR_7->sk_rht, &VAR_4->node,
         VAR_3))
   return 0;
  FUNC_5(&VAR_4->sk);
 }

 return -1;
}
