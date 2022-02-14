
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vsock_sock {int local_addr; } ;
struct socket {scalar_t__ type; scalar_t__ state; struct sock* sk; } ;
struct sock {int sk_max_ack_backlog; int sk_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (int *) ;
 struct vsock_sock* FUNC_3 (struct sock*) ;

__attribute__((used)) static int FUNC_4(struct socket *VAR_5, int VAR_6)
{
 int VAR_7;
 struct sock *VAR_8;
 struct vsock_sock *VAR_9;

 VAR_8 = VAR_5->sk;

 FUNC_0(VAR_8);

 if (VAR_5->type != VAR_2) {
  VAR_7 = -VAR_1;
  goto out;
 }

 if (VAR_5->state != VAR_3) {
  VAR_7 = -VAR_0;
  goto out;
 }

 VAR_9 = FUNC_3(VAR_8);

 if (!FUNC_2(&VAR_9->local_addr)) {
  VAR_7 = -VAR_0;
  goto out;
 }

 VAR_8->sk_max_ack_backlog = VAR_6;
 VAR_8->sk_state = VAR_4;

 VAR_7 = 0;

out:
 FUNC_1(VAR_8);
 return VAR_7;
}
