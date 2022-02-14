
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int sk_callback_lock; } ;
struct TYPE_2__ {scalar_t__ skb_parser; } ;
struct sk_psock {int rcu; TYPE_1__ progs; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct sock*,int *) ;
 int FUNC_2 (struct sk_psock*,int ) ;
 int FUNC_3 (struct sk_psock*) ;
 int VAR_1 ;
 int FUNC_4 (struct sock*,struct sk_psock*) ;
 int FUNC_5 (struct sock*,struct sk_psock*) ;
 int FUNC_6 (struct sk_psock*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

void FUNC_9(struct sock *VAR_2, struct sk_psock *VAR_3)
{
 FUNC_3(VAR_3);
 FUNC_6(VAR_3);

 FUNC_7(&VAR_2->sk_callback_lock);
 FUNC_4(VAR_2, VAR_3);
 FUNC_1(VAR_2, ((void*)0));
 if (VAR_3->progs.skb_parser)
  FUNC_5(VAR_2, VAR_3);
 FUNC_8(&VAR_2->sk_callback_lock);
 FUNC_2(VAR_3, VAR_0);

 FUNC_0(&VAR_3->rcu, VAR_1);
}
