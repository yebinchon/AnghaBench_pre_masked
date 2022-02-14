
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tcp_sock {int last_oow_ack_time; } ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {int sysctl_tcp_challenge_ack_limit; } ;
struct net {TYPE_1__ ipv4; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct net*,int ) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int,int) ;
 scalar_t__ FUNC_3 (struct net*,int ,int *) ;
 int VAR_3 ;
 int FUNC_4 (int) ;
 struct net* FUNC_5 (struct sock*) ;
 int FUNC_6 (struct sock*) ;
 struct tcp_sock* FUNC_7 (struct sock*) ;

__attribute__((used)) static void FUNC_8(struct sock *VAR_4, const struct sk_buff *VAR_5)
{

 static u32 VAR_6;
 static unsigned int VAR_7;
 struct tcp_sock *VAR_8 = FUNC_7(VAR_4);
 struct net *VAR_9 = FUNC_5(VAR_4);
 u32 VAR_10, VAR_11;


 if (FUNC_3(VAR_9,
       VAR_1,
       &VAR_8->last_oow_ack_time))
  return;


 VAR_11 = VAR_3 / VAR_0;
 if (VAR_11 != VAR_6) {
  u32 VAR_12 = VAR_9->ipv4.sysctl_tcp_challenge_ack_limit;
  u32 VAR_13 = (VAR_12 + 1) >> 1;

  VAR_6 = VAR_11;
  FUNC_2(VAR_7, VAR_13 + FUNC_4(VAR_12));
 }
 VAR_10 = FUNC_1(VAR_7);
 if (VAR_10 > 0) {
  FUNC_2(VAR_7, VAR_10 - 1);
  FUNC_0(VAR_9, VAR_2);
  FUNC_6(VAR_4);
 }
}
