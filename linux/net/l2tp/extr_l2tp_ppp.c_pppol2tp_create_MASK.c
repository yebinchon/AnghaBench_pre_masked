
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int * ops; int state; } ;
struct sock {int sk_destruct; int sk_type; int sk_state; int sk_family; int sk_protocol; int sk_backlog_rcv; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 struct sock* FUNC_0 (struct net*,int ,int ,int *,int) ;
 int FUNC_1 (struct socket*,struct sock*) ;

__attribute__((used)) static int FUNC_2(struct net *VAR_11, struct socket *VAR_12, int VAR_13)
{
 int VAR_14 = -VAR_0;
 struct sock *VAR_15;

 VAR_15 = FUNC_0(VAR_11, VAR_2, VAR_1, &VAR_10, VAR_13);
 if (!VAR_15)
  goto out;

 FUNC_1(VAR_12, VAR_15);

 VAR_12->state = VAR_6;
 VAR_12->ops = &VAR_8;

 VAR_15->sk_backlog_rcv = VAR_7;
 VAR_15->sk_protocol = VAR_4;
 VAR_15->sk_family = VAR_2;
 VAR_15->sk_state = VAR_3;
 VAR_15->sk_type = VAR_5;
 VAR_15->sk_destruct = VAR_9;

 VAR_14 = 0;

out:
 return VAR_14;
}
