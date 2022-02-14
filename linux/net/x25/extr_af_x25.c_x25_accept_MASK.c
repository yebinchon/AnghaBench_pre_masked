
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int state; struct sock* sk; } ;
struct sock {scalar_t__ sk_type; scalar_t__ sk_state; int sk_ack_backlog; int sk_receive_queue; int sk_rcvtimeo; } ;
struct sk_buff {struct sock* sk; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*) ;
 struct sk_buff* FUNC_3 (int *) ;
 int FUNC_4 (struct sock*,struct socket*) ;
 int FUNC_5 (struct sock*,int ) ;

__attribute__((used)) static int FUNC_6(struct socket *VAR_5, struct socket *VAR_6, int VAR_7,
        bool VAR_8)
{
 struct sock *VAR_9 = VAR_5->sk;
 struct sock *VAR_10;
 struct sk_buff *VAR_11;
 int VAR_12 = -VAR_0;

 if (!VAR_9)
  goto out;

 VAR_12 = -VAR_1;
 if (VAR_9->sk_type != VAR_2)
  goto out;

 FUNC_1(VAR_9);
 VAR_12 = -VAR_0;
 if (VAR_9->sk_state != VAR_4)
  goto out2;

 VAR_12 = FUNC_5(VAR_9, VAR_9->sk_rcvtimeo);
 if (VAR_12)
  goto out2;
 VAR_11 = FUNC_3(&VAR_9->sk_receive_queue);
 VAR_12 = -VAR_0;
 if (!VAR_11->sk)
  goto out2;
 VAR_10 = VAR_11->sk;
 FUNC_4(VAR_10, VAR_6);


 VAR_11->sk = ((void*)0);
 FUNC_0(VAR_11);
 VAR_9->sk_ack_backlog--;
 VAR_6->state = VAR_3;
 VAR_12 = 0;
out2:
 FUNC_2(VAR_9);
out:
 return VAR_12;
}
