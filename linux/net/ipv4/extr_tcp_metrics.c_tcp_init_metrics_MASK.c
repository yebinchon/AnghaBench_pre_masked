
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct tcp_sock {scalar_t__ snd_cwnd_clamp; scalar_t__ snd_ssthresh; scalar_t__ reordering; scalar_t__ srtt_us; int rttvar_us; int mdev_max_us; int mdev_us; } ;
struct tcp_metrics_block {int dummy; } ;
struct sock {int dummy; } ;
struct dst_entry {int dummy; } ;
struct TYPE_2__ {scalar_t__ icsk_rto; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 struct dst_entry* FUNC_0 (struct sock*) ;
 TYPE_1__* FUNC_1 (struct sock*) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int,int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (struct sock*) ;
 struct tcp_metrics_block* FUNC_7 (struct sock*,struct dst_entry*,int) ;
 scalar_t__ FUNC_8 (struct tcp_metrics_block*,int ) ;
 scalar_t__ FUNC_9 (struct tcp_metrics_block*,int ) ;
 int FUNC_10 (struct sock*) ;
 struct tcp_sock* FUNC_11 (struct sock*) ;

void FUNC_12(struct sock *VAR_8)
{
 struct dst_entry *VAR_9 = FUNC_0(VAR_8);
 struct tcp_sock *VAR_10 = FUNC_11(VAR_8);
 struct tcp_metrics_block *VAR_11;
 u32 VAR_12, VAR_13 = 0;

 FUNC_6(VAR_8);
 if (!VAR_9)
  goto reset;

 FUNC_4();
 VAR_11 = FUNC_7(VAR_8, VAR_9, 1);
 if (!VAR_11) {
  FUNC_5();
  goto reset;
 }

 if (FUNC_9(VAR_11, VAR_2))
  VAR_10->snd_cwnd_clamp = FUNC_8(VAR_11, VAR_2);

 VAR_12 = FUNC_8(VAR_11, VAR_5);
 if (VAR_12) {
  VAR_10->snd_ssthresh = VAR_12;
  if (VAR_10->snd_ssthresh > VAR_10->snd_cwnd_clamp)
   VAR_10->snd_ssthresh = VAR_10->snd_cwnd_clamp;
 } else {



  VAR_10->snd_ssthresh = VAR_1;
 }
 VAR_12 = FUNC_8(VAR_11, VAR_3);
 if (VAR_12 && VAR_10->reordering != VAR_12)
  VAR_10->reordering = VAR_12;

 VAR_13 = FUNC_8(VAR_11, VAR_4);
 FUNC_5();
reset:
 if (VAR_13 > VAR_10->srtt_us) {

  VAR_13 /= 8 * VAR_7 / VAR_0;
  FUNC_1(VAR_8)->icsk_rto = VAR_13 + FUNC_3(2 * VAR_13, FUNC_10(VAR_8));
 } else if (VAR_10->srtt_us == 0) {






  VAR_10->rttvar_us = FUNC_2(VAR_6);
  VAR_10->mdev_us = VAR_10->mdev_max_us = VAR_10->rttvar_us;

  FUNC_1(VAR_8)->icsk_rto = VAR_6;
 }
}
