
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcp_sock {int dummy; } ;
struct sock {int sk_state; } ;
struct TYPE_2__ {int sysctl_tcp_syn_retries; int sysctl_tcp_retries1; int sysctl_tcp_retries2; } ;
struct net {TYPE_1__ ipv4; } ;
struct inet_connection_sock {int icsk_retransmits; scalar_t__ icsk_rto; int icsk_user_timeout; scalar_t__ icsk_syn_retries; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct tcp_sock*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (struct sock*) ;
 struct inet_connection_sock* FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*,int,int ) ;
 int FUNC_4 (struct sock*) ;
 scalar_t__ FUNC_5 (struct sock*,int ) ;
 struct net* FUNC_6 (struct sock*) ;
 int FUNC_7 (struct sock*,int ,int,scalar_t__,int) ;
 int FUNC_8 (struct sock*,int) ;
 int FUNC_9 (struct inet_connection_sock*,struct sock*) ;
 int FUNC_10 (struct sock*,int const) ;
 scalar_t__ FUNC_11 (struct sock*,int) ;
 struct tcp_sock* FUNC_12 (struct sock*) ;
 int FUNC_13 (struct sock*) ;

__attribute__((used)) static int FUNC_14(struct sock *VAR_6)
{
 struct inet_connection_sock *VAR_7 = FUNC_2(VAR_6);
 struct tcp_sock *VAR_8 = FUNC_12(VAR_6);
 struct net *VAR_9 = FUNC_6(VAR_6);
 bool VAR_10 = 0, VAR_11;
 int VAR_12;

 if ((1 << VAR_6->sk_state) & (VAR_4 | VAR_3)) {
  if (VAR_7->icsk_retransmits) {
   FUNC_1(VAR_6);
  } else {
   FUNC_4(VAR_6);
  }
  VAR_12 = VAR_7->icsk_syn_retries ? : VAR_9->ipv4.sysctl_tcp_syn_retries;
  VAR_10 = VAR_7->icsk_retransmits >= VAR_12;
 } else {
  if (FUNC_3(VAR_6, VAR_9->ipv4.sysctl_tcp_retries1, 0)) {

   FUNC_9(VAR_7, VAR_6);

   FUNC_1(VAR_6);
  } else {
   FUNC_4(VAR_6);
  }

  VAR_12 = VAR_9->ipv4.sysctl_tcp_retries2;
  if (FUNC_5(VAR_6, VAR_2)) {
   const bool VAR_13 = VAR_7->icsk_rto < VAR_5;

   VAR_12 = FUNC_10(VAR_6, VAR_13);
   VAR_11 = VAR_13 ||
    !FUNC_3(VAR_6, VAR_12, 0);

   if (FUNC_11(VAR_6, VAR_11))
    return 1;
  }
 }
 if (!VAR_10)
  VAR_10 = FUNC_3(VAR_6, VAR_12,
      VAR_7->icsk_user_timeout);
 FUNC_8(VAR_6, VAR_10);

 if (FUNC_0(VAR_8, VAR_1))
  FUNC_7(VAR_6, VAR_0,
      VAR_7->icsk_retransmits,
      VAR_7->icsk_rto, (int)VAR_10);

 if (VAR_10) {

  FUNC_13(VAR_6);
  return 1;
 }

 return 0;
}
