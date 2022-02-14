
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int sk_refcnt; } ;
struct tipc_sock {int node; struct sock sk; } ;
struct tipc_net {int sk_rht; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct sock*) ;
 struct tipc_net* FUNC_2 (int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *,int ) ;
 int FUNC_5 (struct sock*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_6(struct tipc_sock *VAR_2)
{
 struct sock *VAR_3 = &VAR_2->sk;
 struct tipc_net *VAR_4 = FUNC_2(FUNC_5(VAR_3), VAR_0);

 if (!FUNC_4(&VAR_4->sk_rht, &VAR_2->node, VAR_1)) {
  FUNC_0(FUNC_3(&VAR_3->sk_refcnt) == 1);
  FUNC_1(VAR_3);
 }
}
