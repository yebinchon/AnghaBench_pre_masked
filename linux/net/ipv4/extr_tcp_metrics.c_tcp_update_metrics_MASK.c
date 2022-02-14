
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tcp_sock {unsigned long srtt_us; int mdev_us; int snd_cwnd; int snd_ssthresh; int reordering; } ;
struct tcp_metrics_block {int tcpm_stamp; } ;
struct sock {int dummy; } ;
struct TYPE_2__ {int sysctl_tcp_reordering; scalar_t__ sysctl_tcp_nometrics_save; } ;
struct net {TYPE_1__ ipv4; } ;
struct inet_connection_sock {scalar_t__ icsk_ca_state; scalar_t__ icsk_backoff; } ;
struct dst_entry {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct dst_entry* FUNC_0 (struct sock*) ;
 struct inet_connection_sock* FUNC_1 (struct sock*) ;
 int VAR_6 ;
 int FUNC_2 (int,int) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (struct sock*) ;
 struct net* FUNC_6 (struct sock*) ;
 struct tcp_metrics_block* FUNC_7 (struct sock*,struct dst_entry*,int) ;
 scalar_t__ FUNC_8 (struct tcp_sock*) ;
 int FUNC_9 (struct tcp_sock*) ;
 void* FUNC_10 (struct tcp_metrics_block*,int ) ;
 int FUNC_11 (struct tcp_metrics_block*,int ) ;
 int FUNC_12 (struct tcp_metrics_block*,int ,int) ;
 struct tcp_sock* FUNC_13 (struct sock*) ;

void FUNC_14(struct sock *VAR_7)
{
 const struct inet_connection_sock *VAR_8 = FUNC_1(VAR_7);
 struct dst_entry *VAR_9 = FUNC_0(VAR_7);
 struct tcp_sock *VAR_10 = FUNC_13(VAR_7);
 struct net *VAR_11 = FUNC_6(VAR_7);
 struct tcp_metrics_block *VAR_12;
 unsigned long VAR_13;
 u32 VAR_14;
 int VAR_15;

 FUNC_5(VAR_7);
 if (VAR_11->ipv4.sysctl_tcp_nometrics_save || !VAR_9)
  return;

 FUNC_3();
 if (VAR_8->icsk_backoff || !VAR_10->srtt_us) {




  VAR_12 = FUNC_7(VAR_7, VAR_9, 0);
  if (VAR_12 && !FUNC_11(VAR_12, VAR_3))
   FUNC_12(VAR_12, VAR_3, 0);
  goto out_unlock;
 } else
  VAR_12 = FUNC_7(VAR_7, VAR_9, 1);

 if (!VAR_12)
  goto out_unlock;

 VAR_13 = FUNC_10(VAR_12, VAR_3);
 VAR_15 = VAR_13 - VAR_10->srtt_us;





 if (!FUNC_11(VAR_12, VAR_3)) {
  if (VAR_15 <= 0)
   VAR_13 = VAR_10->srtt_us;
  else
   VAR_13 -= (VAR_15 >> 3);
  FUNC_12(VAR_12, VAR_3, VAR_13);
 }

 if (!FUNC_11(VAR_12, VAR_4)) {
  unsigned long VAR_16;

  if (VAR_15 < 0)
   VAR_15 = -VAR_15;


  VAR_15 >>= 1;
  if (VAR_15 < VAR_10->mdev_us)
   VAR_15 = VAR_10->mdev_us;

  VAR_16 = FUNC_10(VAR_12, VAR_4);
  if (VAR_15 >= VAR_16)
   VAR_16 = VAR_15;
  else
   VAR_16 -= (VAR_16 - VAR_15) >> 2;

  FUNC_12(VAR_12, VAR_4, VAR_16);
 }

 if (FUNC_8(VAR_10)) {

  if (!FUNC_11(VAR_12, VAR_5)) {
   VAR_14 = FUNC_10(VAR_12, VAR_5);
   if (VAR_14 && (VAR_10->snd_cwnd >> 1) > VAR_14)
    FUNC_12(VAR_12, VAR_5,
            VAR_10->snd_cwnd >> 1);
  }
  if (!FUNC_11(VAR_12, VAR_1)) {
   VAR_14 = FUNC_10(VAR_12, VAR_1);
   if (VAR_10->snd_cwnd > VAR_14)
    FUNC_12(VAR_12, VAR_1,
            VAR_10->snd_cwnd);
  }
 } else if (!FUNC_9(VAR_10) &&
     VAR_8->icsk_ca_state == VAR_0) {

  if (!FUNC_11(VAR_12, VAR_5))
   FUNC_12(VAR_12, VAR_5,
           FUNC_2(VAR_10->snd_cwnd >> 1, VAR_10->snd_ssthresh));
  if (!FUNC_11(VAR_12, VAR_1)) {
   VAR_14 = FUNC_10(VAR_12, VAR_1);
   FUNC_12(VAR_12, VAR_1, (VAR_14 + VAR_10->snd_cwnd) >> 1);
  }
 } else {



  if (!FUNC_11(VAR_12, VAR_1)) {
   VAR_14 = FUNC_10(VAR_12, VAR_1);
   FUNC_12(VAR_12, VAR_1,
           (VAR_14 + VAR_10->snd_ssthresh) >> 1);
  }
  if (!FUNC_11(VAR_12, VAR_5)) {
   VAR_14 = FUNC_10(VAR_12, VAR_5);
   if (VAR_14 && VAR_10->snd_ssthresh > VAR_14)
    FUNC_12(VAR_12, VAR_5,
            VAR_10->snd_ssthresh);
  }
  if (!FUNC_11(VAR_12, VAR_2)) {
   VAR_14 = FUNC_10(VAR_12, VAR_2);
   if (VAR_14 < VAR_10->reordering &&
       VAR_10->reordering != VAR_11->ipv4.sysctl_tcp_reordering)
    FUNC_12(VAR_12, VAR_2,
            VAR_10->reordering);
  }
 }
 VAR_12->tcpm_stamp = VAR_6;
out_unlock:
 FUNC_4();
}
