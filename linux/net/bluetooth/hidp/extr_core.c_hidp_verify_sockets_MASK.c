
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct socket {int sk; } ;
struct l2cap_chan {int dst; int src; } ;
struct hidp_session {int dummy; } ;
struct TYPE_3__ {scalar_t__ sk_state; } ;
struct bt_sock {TYPE_1__ sk; } ;
struct TYPE_4__ {struct l2cap_chan* chan; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int *,int *) ;
 struct bt_sock* FUNC_1 (int ) ;
 struct hidp_session* FUNC_2 (int *) ;
 int FUNC_3 (struct hidp_session*) ;
 int FUNC_4 (struct socket*) ;
 TYPE_2__* FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct socket *VAR_5,
          struct socket *VAR_6)
{
 struct l2cap_chan *VAR_7, *VAR_8;
 struct bt_sock *VAR_9, *VAR_10;
 struct hidp_session *VAR_11;

 if (!FUNC_4(VAR_5) || !FUNC_4(VAR_6))
  return -VAR_3;

 VAR_7 = FUNC_5(VAR_5->sk)->chan;
 VAR_8 = FUNC_5(VAR_6->sk)->chan;

 if (FUNC_0(&VAR_7->src, &VAR_8->src) ||
     FUNC_0(&VAR_7->dst, &VAR_8->dst))
  return -VAR_4;

 VAR_9 = FUNC_1(VAR_5->sk);
 VAR_10 = FUNC_1(VAR_6->sk);

 if (VAR_9->sk.sk_state != VAR_0 ||
     VAR_10->sk.sk_state != VAR_0)
  return -VAR_1;


 VAR_11 = FUNC_2(&VAR_7->dst);
 if (VAR_11) {
  FUNC_3(VAR_11);
  return -VAR_2;
 }

 return 0;
}
