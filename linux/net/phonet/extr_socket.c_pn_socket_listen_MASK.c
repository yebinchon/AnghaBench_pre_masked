
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {scalar_t__ state; struct sock* sk; } ;
struct sock {scalar_t__ sk_state; int sk_max_ack_backlog; scalar_t__ sk_ack_backlog; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct sock*) ;
 scalar_t__ FUNC_1 (struct socket*) ;
 int FUNC_2 (struct sock*) ;

__attribute__((used)) static int FUNC_3(struct socket *VAR_4, int VAR_5)
{
 struct sock *VAR_6 = VAR_4->sk;
 int VAR_7 = 0;

 if (FUNC_1(VAR_4))
  return -VAR_1;

 FUNC_0(VAR_6);
 if (VAR_4->state != VAR_2) {
  VAR_7 = -VAR_0;
  goto out;
 }

 if (VAR_6->sk_state != VAR_3) {
  VAR_6->sk_state = VAR_3;
  VAR_6->sk_ack_backlog = 0;
 }
 VAR_6->sk_max_ack_backlog = VAR_5;
out:
 FUNC_2(VAR_6);
 return VAR_7;
}
