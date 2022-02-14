
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {struct sock* sk; } ;
struct sock {int sk_state; } ;
struct pppol2tp_session {int rcu; int sk_lock; int sk; int __sk; } ;
struct l2tp_session {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int VAR_2 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct l2tp_session*) ;
 struct pppol2tp_session* FUNC_3 (struct l2tp_session*) ;
 int FUNC_4 (struct sock*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int VAR_3 ;
 struct l2tp_session* FUNC_8 (struct sock*) ;
 int FUNC_9 (struct sock*) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (struct sock*) ;
 scalar_t__ FUNC_12 (struct sock*,int ) ;
 int FUNC_13 (struct sock*) ;
 int FUNC_14 (struct sock*) ;

__attribute__((used)) static int FUNC_15(struct socket *VAR_4)
{
 struct sock *VAR_5 = VAR_4->sk;
 struct l2tp_session *VAR_6;
 int VAR_7;

 if (!VAR_5)
  return 0;

 VAR_7 = -VAR_0;
 FUNC_4(VAR_5);
 if (FUNC_12(VAR_5, VAR_2) != 0)
  goto error;

 FUNC_9(VAR_5);


 VAR_5->sk_state = VAR_1;
 FUNC_13(VAR_5);
 VAR_4->sk = ((void*)0);

 VAR_6 = FUNC_8(VAR_5);
 if (VAR_6) {
  struct pppol2tp_session *VAR_8;

  FUNC_2(VAR_6);

  VAR_8 = FUNC_3(VAR_6);
  FUNC_6(&VAR_8->sk_lock);
  VAR_8->__sk = FUNC_10(VAR_8->sk,
           FUNC_5(&VAR_8->sk_lock));
  FUNC_0(VAR_8->sk, ((void*)0));
  FUNC_7(&VAR_8->sk_lock);
  FUNC_1(&VAR_8->rcu, VAR_3);





 }

 FUNC_11(VAR_5);





 FUNC_14(VAR_5);

 return 0;

error:
 FUNC_11(VAR_5);
 return VAR_7;
}
