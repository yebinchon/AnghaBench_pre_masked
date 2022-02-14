
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {struct sock* sk; } ;
struct sock {scalar_t__ sk_state; } ;
struct msghdr {int msg_flags; } ;
struct l2cap_chan {int dummy; } ;
struct TYPE_2__ {struct l2cap_chan* chan; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,struct socket*,struct sock*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct sock*,int) ;
 int FUNC_2 (struct l2cap_chan*) ;
 int FUNC_3 (struct l2cap_chan*,struct msghdr*,size_t) ;
 int FUNC_4 (struct l2cap_chan*) ;
 TYPE_1__* FUNC_5 (struct sock*) ;
 int FUNC_6 (struct sock*) ;
 int FUNC_7 (struct sock*) ;
 int FUNC_8 (struct sock*) ;

__attribute__((used)) static int FUNC_9(struct socket *VAR_4, struct msghdr *VAR_5,
         size_t VAR_6)
{
 struct sock *VAR_7 = VAR_4->sk;
 struct l2cap_chan *VAR_8 = FUNC_5(VAR_7)->chan;
 int VAR_9;

 FUNC_0("sock %p, sk %p", VAR_4, VAR_7);

 VAR_9 = FUNC_8(VAR_7);
 if (VAR_9)
  return VAR_9;

 if (VAR_5->msg_flags & VAR_3)
  return -VAR_2;

 if (VAR_7->sk_state != VAR_0)
  return -VAR_1;

 FUNC_6(VAR_7);
 VAR_9 = FUNC_1(VAR_7, VAR_5->msg_flags);
 FUNC_7(VAR_7);
 if (VAR_9)
  return VAR_9;

 FUNC_2(VAR_8);
 VAR_9 = FUNC_3(VAR_8, VAR_5, VAR_6);
 FUNC_4(VAR_8);

 return VAR_9;
}
