
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {scalar_t__ type; int state; int * ops; } ;
struct sock {int sk_protocol; int sk_state; } ;
struct net {int dummy; } ;


 int FUNC_0 (char*,struct socket*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int *,struct sock*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 struct sock* FUNC_2 (struct net*,int ,int ,int *,int) ;
 int FUNC_3 (struct socket*,struct sock*) ;
 int FUNC_4 (struct sock*,int ) ;

__attribute__((used)) static int FUNC_5(struct net *VAR_11, struct socket *VAR_12, int VAR_13,
       int VAR_14)
{
 struct sock *VAR_15;

 FUNC_0("sock %p", VAR_12);

 if (VAR_12->type != VAR_5)
  return -VAR_2;

 VAR_15 = FUNC_2(VAR_11, VAR_4, VAR_3, &VAR_8, VAR_14);
 if (!VAR_15)
  return -VAR_1;

 FUNC_3(VAR_12, VAR_15);

 VAR_12->ops = &VAR_10;

 VAR_12->state = VAR_7;

 FUNC_4(VAR_15, VAR_6);

 VAR_15->sk_protocol = VAR_13;
 VAR_15->sk_state = VAR_0;

 FUNC_1(&VAR_9, VAR_15);

 return 0;
}
