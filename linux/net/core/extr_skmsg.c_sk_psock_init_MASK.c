
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct sk_psock {int refcnt; int ingress_skb; int ingress_msg; int work; int link_lock; int link; int eval; struct sock* sk; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct sk_psock* FUNC_2 (int,int,int) ;
 int FUNC_3 (struct sock*,struct sk_psock*) ;
 int FUNC_4 (int *,int) ;
 int VAR_4 ;
 int FUNC_5 (struct sk_psock*,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct sock*) ;
 int FUNC_8 (int *) ;

struct sk_psock *FUNC_9(struct sock *VAR_5, int VAR_6)
{
 struct sk_psock *VAR_7 = FUNC_2(sizeof(*VAR_7),
           VAR_0 | VAR_2,
           VAR_6);
 if (!VAR_7)
  return ((void*)0);

 VAR_7->sk = VAR_5;
 VAR_7->eval = VAR_3;

 FUNC_0(&VAR_7->link);
 FUNC_8(&VAR_7->link_lock);

 FUNC_1(&VAR_7->work, VAR_4);
 FUNC_0(&VAR_7->ingress_msg);
 FUNC_6(&VAR_7->ingress_skb);

 FUNC_5(VAR_7, VAR_1);
 FUNC_4(&VAR_7->refcnt, 1);

 FUNC_3(VAR_5, VAR_7);
 FUNC_7(VAR_5);

 return VAR_7;
}
