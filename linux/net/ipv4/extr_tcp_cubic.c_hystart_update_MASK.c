
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct tcp_sock {int snd_cwnd; int snd_ssthresh; } ;
struct sock {int dummy; } ;
struct bictcp {int found; scalar_t__ last_ack; scalar_t__ round_start; scalar_t__ delay_min; scalar_t__ sample_cnt; scalar_t__ curr_rtt; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 struct bictcp* FUNC_4 (struct sock*) ;
 int FUNC_5 (struct sock*) ;
 struct tcp_sock* FUNC_6 (struct sock*) ;

__attribute__((used)) static void FUNC_7(struct sock *VAR_9, u32 VAR_10)
{
 struct tcp_sock *VAR_11 = FUNC_6(VAR_9);
 struct bictcp *VAR_12 = FUNC_4(VAR_9);

 if (VAR_12->found & VAR_8)
  return;

 if (VAR_8 & VAR_0) {
  u32 VAR_13 = FUNC_3();


  if ((s32)(VAR_13 - VAR_12->last_ack) <= VAR_7) {
   VAR_12->last_ack = VAR_13;
   if ((s32)(VAR_13 - VAR_12->round_start) > VAR_12->delay_min >> 4) {
    VAR_12->found |= VAR_0;
    FUNC_2(FUNC_5(VAR_9),
           VAR_6);
    FUNC_1(FUNC_5(VAR_9),
           VAR_5,
           VAR_11->snd_cwnd);
    VAR_11->snd_ssthresh = VAR_11->snd_cwnd;
   }
  }
 }

 if (VAR_8 & VAR_1) {

  if (VAR_12->sample_cnt < VAR_2) {
   if (VAR_12->curr_rtt == 0 || VAR_12->curr_rtt > VAR_10)
    VAR_12->curr_rtt = VAR_10;

   VAR_12->sample_cnt++;
  } else {
   if (VAR_12->curr_rtt > VAR_12->delay_min +
       FUNC_0(VAR_12->delay_min >> 3)) {
    VAR_12->found |= VAR_1;
    FUNC_2(FUNC_5(VAR_9),
           VAR_4);
    FUNC_1(FUNC_5(VAR_9),
           VAR_3,
           VAR_11->snd_cwnd);
    VAR_11->snd_ssthresh = VAR_11->snd_cwnd;
   }
  }
 }
}
