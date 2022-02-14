
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {scalar_t__ type; struct sock* sk; } ;
struct sock {scalar_t__ sk_state; int sk_max_ack_backlog; scalar_t__ sk_ack_backlog; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct sock*) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (struct sock*) ;

__attribute__((used)) static int FUNC_3(struct socket *VAR_5, int VAR_6)
{
 struct sock *VAR_7 = VAR_5->sk;
 int VAR_8 = 0;

 FUNC_1("sk %p backlog %d\n", VAR_7, VAR_6);

 FUNC_0(VAR_7);

 if ((VAR_5->type != VAR_3 && VAR_5->type != VAR_4) ||
     VAR_7->sk_state != VAR_1) {
  VAR_8 = -VAR_0;
  goto error;
 }

 VAR_7->sk_max_ack_backlog = VAR_6;
 VAR_7->sk_ack_backlog = 0;

 FUNC_1("Socket listening\n");
 VAR_7->sk_state = VAR_2;

error:
 FUNC_2(VAR_7);

 return VAR_8;
}
