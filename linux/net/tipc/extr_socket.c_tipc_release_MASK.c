
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int deferredq; } ;
struct tipc_sock {int rcu; scalar_t__ cong_link_cnt; int cong_links; TYPE_1__ mc_method; } ;
struct socket {struct sock* sk; } ;
struct sock {int sk_timer; int sk_shutdown; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct socket*,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct sock*) ;
 int FUNC_4 (struct sock*) ;
 int FUNC_5 (struct sock*,int *) ;
 int FUNC_6 (struct sock*) ;
 int FUNC_7 (int *) ;
 struct tipc_sock* FUNC_8 (struct sock*) ;
 int VAR_3 ;
 int FUNC_9 (struct tipc_sock*) ;
 int FUNC_10 (struct tipc_sock*) ;
 int FUNC_11 (struct tipc_sock*,int ,int *) ;
 int FUNC_12 (struct sock*,int *,int ,char*) ;

__attribute__((used)) static int FUNC_13(struct socket *VAR_4)
{
 struct sock *VAR_5 = VAR_4->sk;
 struct tipc_sock *VAR_6;





 if (VAR_5 == ((void*)0))
  return 0;

 VAR_6 = FUNC_8(VAR_5);
 FUNC_3(VAR_5);

 FUNC_12(VAR_5, ((void*)0), VAR_1, " ");
 FUNC_1(VAR_4, VAR_2);
 VAR_5->sk_shutdown = VAR_0;
 FUNC_9(VAR_6);
 FUNC_11(VAR_6, 0, ((void*)0));
 FUNC_0(&VAR_6->mc_method.deferredq);
 FUNC_5(VAR_5, &VAR_5->sk_timer);
 FUNC_10(VAR_6);

 FUNC_6(VAR_5);

 FUNC_4(VAR_5);
 FUNC_7(&VAR_6->cong_links);
 VAR_6->cong_link_cnt = 0;
 FUNC_2(&VAR_6->rcu, VAR_3);
 VAR_4->sk = ((void*)0);

 return 0;
}
