
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct tcpnv {int nv_allow_cwnd_growth; int nv_last_snd_una; int nv_last_rtt; int nv_min_rtt; int nv_rtt_max_rate; int nv_eval_call_cnt; int nv_min_rtt_new; unsigned long nv_min_rtt_reset_jiffies; int nv_min_cwnd; int nv_rtt_cnt; scalar_t__ cwnd_growth_factor; scalar_t__ nv_no_cong_cnt; scalar_t__ nv_rtt_start_seq; scalar_t__ nv_catchup; } ;
struct tcp_sock {int snd_cwnd; int snd_una; int mss_cache; int snd_ssthresh; scalar_t__ snd_nxt; } ;
struct sock {int dummy; } ;
struct inet_connection_sock {scalar_t__ icsk_ca_state; } ;
struct ack_sample {int rtt_us; scalar_t__ in_flight; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (scalar_t__,int) ;
 scalar_t__ FUNC_1 (int,unsigned long long) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (unsigned char*,int) ;
 struct inet_connection_sock* FUNC_4 (struct sock*) ;
 struct tcpnv* FUNC_5 (struct sock*) ;
 unsigned long VAR_8 ;
 void* FUNC_6 (unsigned int,int) ;
 int FUNC_7 (scalar_t__,int) ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int FUNC_8 (struct tcpnv*,int) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 struct tcp_sock* FUNC_9 (struct sock*) ;
 scalar_t__ FUNC_10 (unsigned long,unsigned long) ;

__attribute__((used)) static void FUNC_11(struct sock *VAR_23, const struct ack_sample *VAR_24)
{
 const struct inet_connection_sock *VAR_25 = FUNC_4(VAR_23);
 struct tcp_sock *VAR_26 = FUNC_9(VAR_23);
 struct tcpnv *VAR_27 = FUNC_5(VAR_23);
 unsigned long VAR_28 = VAR_8;
 u64 VAR_29;
 u32 VAR_30, VAR_31, VAR_32;
 u32 VAR_33;
 u32 VAR_34 = 0;


 if (VAR_24->rtt_us < 0)
  return;


 if (VAR_25->icsk_ca_state != VAR_6 &&
     VAR_25->icsk_ca_state != VAR_5)
  return;


 if (VAR_27->nv_catchup && VAR_26->snd_cwnd >= VAR_14) {
  VAR_27->nv_catchup = 0;
  VAR_27->nv_allow_cwnd_growth = 0;
 }

 VAR_34 = VAR_26->snd_una - VAR_27->nv_last_snd_una;
 VAR_27->nv_last_snd_una = VAR_26->snd_una;

 if (VAR_24->in_flight == 0)
  return;


 if (VAR_18 > 0) {
  if (VAR_27->nv_last_rtt > 0) {
   VAR_33 = (((u64)VAR_24->rtt_us) * VAR_18 +
       ((u64)VAR_27->nv_last_rtt)
       * (256 - VAR_18)) >> 8;
  } else {
   VAR_33 = VAR_24->rtt_us;
   VAR_27->nv_min_rtt = VAR_33 << 1;
  }
  VAR_27->nv_last_rtt = VAR_33;
 } else {
  VAR_33 = VAR_24->rtt_us;
 }


 VAR_29 = ((u64)VAR_24->in_flight) * 80000;
 FUNC_2(VAR_29, VAR_33 ?: 1);
 VAR_30 = (u32)VAR_29;





 if (VAR_27->nv_rtt_max_rate < VAR_30)
  VAR_27->nv_rtt_max_rate = VAR_30;


 if (VAR_27->nv_eval_call_cnt < 255)
  VAR_27->nv_eval_call_cnt++;


 VAR_33 = FUNC_8(VAR_27, VAR_33);


 if (VAR_33 < VAR_27->nv_min_rtt)
  VAR_27->nv_min_rtt = VAR_33;


 if (VAR_33 < VAR_27->nv_min_rtt_new)
  VAR_27->nv_min_rtt_new = VAR_33;
 if (FUNC_10(VAR_28, VAR_27->nv_min_rtt_reset_jiffies)) {
  unsigned char VAR_35;

  VAR_27->nv_min_rtt = VAR_27->nv_min_rtt_new;
  VAR_27->nv_min_rtt_new = VAR_1;
  FUNC_3(&VAR_35, 1);
  VAR_27->nv_min_rtt_reset_jiffies =
   VAR_28 + ((VAR_17 * (384 + VAR_35) * VAR_0) >> 9);



  VAR_27->nv_min_cwnd = FUNC_6(VAR_27->nv_min_cwnd / 2, VAR_2);
 }


 if (FUNC_0(VAR_27->nv_rtt_start_seq, VAR_26->snd_una)) {
  VAR_27->nv_rtt_start_seq = VAR_26->snd_nxt;
  if (VAR_27->nv_rtt_cnt < 0xff)

   VAR_27->nv_rtt_cnt++;






  if (VAR_27->nv_eval_call_cnt == 1 &&
      VAR_34 >= (VAR_27->nv_min_cwnd - 1) * VAR_26->mss_cache &&
      VAR_27->nv_min_cwnd < (VAR_4 + 1)) {
   VAR_27->nv_min_cwnd = FUNC_7(VAR_27->nv_min_cwnd
           + VAR_3,
           VAR_4 + 1);
   VAR_27->nv_rtt_start_seq = VAR_26->snd_nxt +
    VAR_27->nv_min_cwnd * VAR_26->mss_cache;
   VAR_27->nv_eval_call_cnt = 0;
   VAR_27->nv_allow_cwnd_growth = 1;
   return;
  }





  VAR_32 = (u32)
   FUNC_1(((u64)VAR_27->nv_rtt_max_rate) * VAR_27->nv_min_rtt,
      80000ULL * VAR_26->mss_cache);
  VAR_31 = VAR_32 + VAR_15;





  if (VAR_26->snd_cwnd > VAR_31) {







   if (VAR_27->nv_rtt_cnt < VAR_19) {
    return;
   } else if (VAR_26->snd_ssthresh == VAR_7) {
    if (VAR_27->nv_eval_call_cnt <
        VAR_20)
     return;

   } else if (VAR_27->nv_eval_call_cnt <
       VAR_12) {
    if (VAR_27->nv_allow_cwnd_growth &&
        VAR_27->nv_rtt_cnt > VAR_22)
     VAR_27->nv_allow_cwnd_growth = 0;
    return;
   }


   VAR_27->nv_allow_cwnd_growth = 0;
   VAR_26->snd_ssthresh =
    (VAR_21 * VAR_31) >> 3;
   if (VAR_26->snd_cwnd - VAR_31 > 2) {

    int VAR_36;

    VAR_36 = FUNC_6(2U, ((VAR_26->snd_cwnd - VAR_31) *
            VAR_9) >> 7);
    VAR_26->snd_cwnd -= VAR_36;
   } else if (VAR_9 > 0) {
    VAR_26->snd_cwnd = VAR_31;
   }
   if (VAR_27->cwnd_growth_factor > 0)
    VAR_27->cwnd_growth_factor = 0;
   VAR_27->nv_no_cong_cnt = 0;
  } else if (VAR_26->snd_cwnd <= VAR_31 - VAR_16) {

   if (VAR_27->nv_eval_call_cnt < VAR_13)
    return;

   VAR_27->nv_allow_cwnd_growth = 1;
   VAR_27->nv_no_cong_cnt++;
   if (VAR_27->cwnd_growth_factor < 0 &&
       VAR_10 > 0 &&
       VAR_27->nv_no_cong_cnt > VAR_10) {
    VAR_27->cwnd_growth_factor++;
    VAR_27->nv_no_cong_cnt = 0;
   } else if (VAR_27->cwnd_growth_factor >= 0 &&
       VAR_11 > 0 &&
       VAR_27->nv_no_cong_cnt >
       VAR_11) {
    VAR_27->cwnd_growth_factor++;
    VAR_27->nv_no_cong_cnt = 0;
   }
  } else {

   return;
  }


  VAR_27->nv_eval_call_cnt = 0;
  VAR_27->nv_rtt_cnt = 0;
  VAR_27->nv_rtt_max_rate = 0;





  if (VAR_26->snd_cwnd < VAR_14)
   VAR_26->snd_cwnd = VAR_14;
 }
}
