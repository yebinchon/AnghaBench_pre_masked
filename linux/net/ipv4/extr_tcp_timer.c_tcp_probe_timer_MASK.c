
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct tcp_sock {scalar_t__ packets_out; } ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct inet_connection_sock {int icsk_probes_out; scalar_t__ icsk_user_timeout; int icsk_backoff; } ;
struct TYPE_3__ {int sysctl_tcp_retries2; } ;
struct TYPE_4__ {TYPE_1__ ipv4; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct inet_connection_sock* FUNC_0 (struct sock*) ;
 scalar_t__ FUNC_1 (struct inet_connection_sock*,scalar_t__) ;
 scalar_t__ FUNC_2 (struct sock*,int ) ;
 TYPE_2__* FUNC_3 (struct sock*) ;
 scalar_t__ FUNC_4 (struct sock*,int,int ) ;
 int FUNC_5 (struct sock*,int const) ;
 scalar_t__ FUNC_6 (struct sock*,int) ;
 int FUNC_7 (struct sock*) ;
 struct sk_buff* FUNC_8 (struct sock*) ;
 int FUNC_9 (struct sock*) ;
 struct tcp_sock* FUNC_10 (struct sock*) ;
 int FUNC_11 (struct sock*) ;

__attribute__((used)) static void FUNC_12(struct sock *VAR_2)
{
 struct inet_connection_sock *VAR_3 = FUNC_0(VAR_2);
 struct sk_buff *VAR_4 = FUNC_8(VAR_2);
 struct tcp_sock *VAR_5 = FUNC_10(VAR_2);
 int VAR_6;

 if (VAR_5->packets_out || !VAR_4) {
  VAR_3->icsk_probes_out = 0;
  return;
 }
 if (VAR_3->icsk_user_timeout) {
  u32 VAR_7 = FUNC_4(VAR_2, VAR_3->icsk_probes_out,
      FUNC_7(VAR_2));

  if (VAR_7 >= VAR_3->icsk_user_timeout)
   goto abort;
 }

 VAR_6 = FUNC_3(VAR_2)->ipv4.sysctl_tcp_retries2;
 if (FUNC_2(VAR_2, VAR_0)) {
  const bool VAR_8 = FUNC_1(VAR_3, VAR_1) < VAR_1;

  VAR_6 = FUNC_5(VAR_2, VAR_8);
  if (!VAR_8 && VAR_3->icsk_backoff >= VAR_6)
   goto abort;
  if (FUNC_6(VAR_2, 1))
   return;
 }

 if (VAR_3->icsk_probes_out >= VAR_6) {
abort: FUNC_11(VAR_2);
 } else {

  FUNC_9(VAR_2);
 }
}
