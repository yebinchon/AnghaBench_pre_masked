
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tipc_sock {int sk; } ;
struct tipc_net {int sk_rht; } ;
struct net {int dummy; } ;


 struct tipc_net* FUNC_0 (struct net*,int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 struct tipc_sock* FUNC_3 (int *,int *,int ) ;
 int FUNC_4 (int *) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static struct tipc_sock *FUNC_5(struct net *VAR_2, u32 VAR_3)
{
 struct tipc_net *VAR_4 = FUNC_0(VAR_2, VAR_0);
 struct tipc_sock *VAR_5;

 FUNC_1();
 VAR_5 = FUNC_3(&VAR_4->sk_rht, &VAR_3, VAR_1);
 if (VAR_5)
  FUNC_4(&VAR_5->sk);
 FUNC_2();

 return VAR_5;
}
