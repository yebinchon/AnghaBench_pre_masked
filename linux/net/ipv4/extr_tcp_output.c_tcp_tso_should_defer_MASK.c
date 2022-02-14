
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct tcp_sock {int tcp_clock_cache; int tcp_wstamp_ns; int snd_cwnd; int mss_cache; int snd_wnd; int srtt_us; } ;
struct sock {int dummy; } ;
struct sk_buff {int len; int tstamp; } ;
struct inet_connection_sock {scalar_t__ icsk_ca_state; } ;
typedef int s64 ;
struct TYPE_6__ {int seq; int tcp_flags; scalar_t__ eor; } ;
struct TYPE_4__ {int sysctl_tcp_tso_win_divisor; } ;
struct TYPE_5__ {TYPE_1__ ipv4; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_3__* FUNC_2 (struct sk_buff*) ;
 struct inet_connection_sock* FUNC_3 (struct sock*) ;
 int FUNC_4 (int,int) ;
 TYPE_2__* FUNC_5 (struct sock*) ;
 int FUNC_6 (struct tcp_sock*) ;
 int FUNC_7 (struct tcp_sock*) ;
 struct sk_buff* FUNC_8 (struct sock*) ;
 struct tcp_sock* FUNC_9 (struct sock*) ;
 int FUNC_10 (struct sk_buff*) ;
 int FUNC_11 (struct tcp_sock*) ;
 struct sk_buff* FUNC_12 (struct sock*) ;

__attribute__((used)) static bool FUNC_13(struct sock *VAR_4, struct sk_buff *VAR_5,
     bool *VAR_6,
     bool *VAR_7,
     u32 VAR_8)
{
 const struct inet_connection_sock *VAR_9 = FUNC_3(VAR_4);
 u32 VAR_10, VAR_11, VAR_12, VAR_13;
 struct tcp_sock *VAR_14 = FUNC_9(VAR_4);
 struct sk_buff *VAR_15;
 int VAR_16;
 s64 VAR_17;

 if (VAR_9->icsk_ca_state >= VAR_3)
  goto send_now;






 VAR_17 = VAR_14->tcp_clock_cache - VAR_14->tcp_wstamp_ns - VAR_0;
 if (VAR_17 > 0)
  goto send_now;

 VAR_13 = FUNC_7(VAR_14);

 FUNC_0(FUNC_10(VAR_5) <= 1);
 FUNC_0(VAR_14->snd_cwnd <= VAR_13);

 VAR_10 = FUNC_11(VAR_14) - FUNC_2(VAR_5)->seq;


 VAR_11 = (VAR_14->snd_cwnd - VAR_13) * VAR_14->mss_cache;

 VAR_12 = FUNC_4(VAR_10, VAR_11);


 if (VAR_12 >= VAR_8 * VAR_14->mss_cache)
  goto send_now;


 if ((VAR_5 != FUNC_12(VAR_4)) && (VAR_12 >= VAR_5->len))
  goto send_now;

 VAR_16 = FUNC_1(FUNC_5(VAR_4)->ipv4.sysctl_tcp_tso_win_divisor);
 if (VAR_16) {
  u32 VAR_18 = FUNC_4(VAR_14->snd_wnd, VAR_14->snd_cwnd * VAR_14->mss_cache);




  VAR_18 /= VAR_16;
  if (VAR_12 >= VAR_18)
   goto send_now;
 } else {





  if (VAR_12 > FUNC_6(VAR_14) * VAR_14->mss_cache)
   goto send_now;
 }


 VAR_15 = FUNC_8(VAR_4);
 if (!VAR_15)
  goto send_now;
 VAR_17 = VAR_14->tcp_clock_cache - VAR_15->tstamp;

 if ((s64)(VAR_17 - (u64)VAR_1 * (VAR_14->srtt_us >> 4)) < 0)
  goto send_now;







 if (VAR_11 < VAR_10) {
  if (VAR_11 <= VAR_5->len) {
   *VAR_6 = 1;
   return 1;
  }
 } else {
  if (VAR_10 <= VAR_5->len) {
   *VAR_7 = 1;
   return 1;
  }
 }


 if ((FUNC_2(VAR_5)->tcp_flags & VAR_2) ||
     FUNC_2(VAR_5)->eor)
  goto send_now;

 return 1;

send_now:
 return 0;
}
