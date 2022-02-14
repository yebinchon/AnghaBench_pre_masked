
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct timer_list {int dummy; } ;
struct tcp_sock {scalar_t__ linger2; scalar_t__ packets_out; } ;
struct sock {int sk_state; } ;
struct inet_connection_sock {scalar_t__ icsk_user_timeout; scalar_t__ icsk_probes_out; } ;


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
 int FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sock*) ;
 struct sock* FUNC_2 (int ,struct timer_list*,int ) ;
 struct inet_connection_sock* FUNC_3 (struct sock*) ;
 int FUNC_4 (struct sock*,int) ;
 int FUNC_5 (struct tcp_sock*) ;
 scalar_t__ FUNC_6 (struct tcp_sock*) ;
 int FUNC_7 (struct tcp_sock*) ;
 int FUNC_8 (struct tcp_sock*) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (char*) ;
 struct sock* VAR_11 ;
 int FUNC_11 (struct sock*) ;
 int VAR_12 ;
 scalar_t__ FUNC_12 (struct sock*,int ) ;
 scalar_t__ FUNC_13 (struct sock*) ;
 int FUNC_14 (struct sock*) ;
 int FUNC_15 (struct sock*) ;
 int FUNC_16 (struct sock*) ;
 int FUNC_17 (struct tcp_sock*) ;
 int FUNC_18 (struct sock*,int ) ;
 struct tcp_sock* FUNC_19 (struct sock*) ;
 int FUNC_20 (struct sock*,int,int const) ;
 int FUNC_21 (struct sock*) ;
 int FUNC_22 (struct sock*) ;
 scalar_t__ FUNC_23 (struct sock*,int ) ;

__attribute__((used)) static void FUNC_24 (struct timer_list *VAR_13)
{
 struct sock *VAR_14 = FUNC_2(VAR_14, VAR_13, VAR_12);
 struct inet_connection_sock *VAR_15 = FUNC_3(VAR_14);
 struct tcp_sock *VAR_16 = FUNC_19(VAR_14);
 u32 VAR_17;


 FUNC_0(VAR_14);
 if (FUNC_13(VAR_14)) {

  FUNC_4 (VAR_14, VAR_1/20);
  goto out;
 }

 if (VAR_14->sk_state == VAR_8) {
  FUNC_10("Hmm... keepalive on a LISTEN ???\n");
  goto out;
 }

 FUNC_17(VAR_16);
 if (VAR_14->sk_state == VAR_7 && FUNC_12(VAR_14, VAR_3)) {
  if (VAR_16->linger2 >= 0) {
   const int VAR_18 = FUNC_16(VAR_14) - VAR_10;

   if (VAR_18 > 0) {
    FUNC_20(VAR_14, VAR_7, VAR_18);
    goto out;
   }
  }
  FUNC_18(VAR_14, VAR_0);
  goto death;
 }

 if (!FUNC_12(VAR_14, VAR_4) ||
     ((1 << VAR_14->sk_state) & (VAR_5 | VAR_6)))
  goto out;

 VAR_17 = FUNC_8(VAR_16);


 if (VAR_16->packets_out || !FUNC_22(VAR_14))
  goto resched;

 VAR_17 = FUNC_7(VAR_16);

 if (VAR_17 >= FUNC_8(VAR_16)) {



  if ((VAR_15->icsk_user_timeout != 0 &&
      VAR_17 >= FUNC_9(VAR_15->icsk_user_timeout) &&
      VAR_15->icsk_probes_out > 0) ||
      (VAR_15->icsk_user_timeout == 0 &&
      VAR_15->icsk_probes_out >= FUNC_6(VAR_16))) {
   FUNC_18(VAR_14, VAR_0);
   FUNC_21(VAR_14);
   goto out;
  }
  if (FUNC_23(VAR_14, VAR_2) <= 0) {
   VAR_15->icsk_probes_out++;
   VAR_17 = FUNC_5(VAR_16);
  } else {



   VAR_17 = VAR_9;
  }
 } else {

  VAR_17 = FUNC_8(VAR_16) - VAR_17;
 }

 FUNC_11(VAR_14);

resched:
 FUNC_4 (VAR_14, VAR_17);
 goto out;

death:
 FUNC_15(VAR_14);

out:
 FUNC_1(VAR_14);
 FUNC_14(VAR_14);
}
