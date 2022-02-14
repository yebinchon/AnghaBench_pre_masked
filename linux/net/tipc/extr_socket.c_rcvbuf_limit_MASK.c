
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tipc_sock {int peer_caps; } ;
struct tipc_msg {int dummy; } ;
struct sock {int sk_rcvbuf; } ;
struct sk_buff {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int FUNC_0 (int ) ;
 int VAR_1 ;
 struct tipc_msg* FUNC_1 (struct sk_buff*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct tipc_msg*) ;
 unsigned int FUNC_4 (struct tipc_msg*) ;
 int FUNC_5 (struct tipc_msg*) ;
 struct tipc_sock* FUNC_6 (struct sock*) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static unsigned int FUNC_8(struct sock *VAR_2, struct sk_buff *VAR_3)
{
 struct tipc_sock *VAR_4 = FUNC_6(VAR_2);
 struct tipc_msg *VAR_5 = FUNC_1(VAR_3);

 if (FUNC_7(FUNC_5(VAR_5)))
  return FUNC_0(VAR_2->sk_rcvbuf);

 if (FUNC_7(!FUNC_3(VAR_5)))
  return FUNC_0(VAR_2->sk_rcvbuf) << FUNC_4(VAR_5);

 if (FUNC_2(VAR_4->peer_caps & VAR_1))
  return FUNC_0(VAR_2->sk_rcvbuf);

 return VAR_0;
}
