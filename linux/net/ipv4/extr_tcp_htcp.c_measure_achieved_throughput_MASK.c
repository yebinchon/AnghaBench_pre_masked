
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tcp_sock {int snd_cwnd; } ;
struct sock {int dummy; } ;
struct inet_connection_sock {int icsk_ca_state; } ;
struct htcp {int packetcount; int lasttime; int alpha; int minRTT; int minB; int maxB; int Bi; scalar_t__ pkts_acked; } ;
struct ack_sample {scalar_t__ rtt_us; scalar_t__ pkts_acked; } ;
typedef int __u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct htcp*) ;
 struct inet_connection_sock* FUNC_1 (struct sock*) ;
 struct htcp* FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*,int ) ;
 int VAR_4 ;
 struct tcp_sock* FUNC_4 (struct sock*) ;
 int VAR_5 ;
 int FUNC_5 (scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct sock *VAR_6,
     const struct ack_sample *VAR_7)
{
 const struct inet_connection_sock *VAR_8 = FUNC_1(VAR_6);
 const struct tcp_sock *VAR_9 = FUNC_4(VAR_6);
 struct htcp *VAR_10 = FUNC_2(VAR_6);
 u32 VAR_11 = VAR_4;

 if (VAR_8->icsk_ca_state == VAR_3)
  VAR_10->pkts_acked = VAR_7->pkts_acked;

 if (VAR_7->rtt_us > 0)
  FUNC_3(VAR_6, FUNC_5(VAR_7->rtt_us));

 if (!VAR_5)
  return;


 if (!((1 << VAR_8->icsk_ca_state) & (VAR_2 | VAR_1))) {
  VAR_10->packetcount = 0;
  VAR_10->lasttime = VAR_11;
  return;
 }

 VAR_10->packetcount += VAR_7->pkts_acked;

 if (VAR_10->packetcount >= VAR_9->snd_cwnd - (VAR_10->alpha >> 7 ? : 1) &&
     VAR_11 - VAR_10->lasttime >= VAR_10->minRTT &&
     VAR_10->minRTT > 0) {
  __u32 VAR_12 = VAR_10->packetcount * VAR_0 / (VAR_11 - VAR_10->lasttime);

  if (FUNC_0(VAR_10) <= 3) {

   VAR_10->minB = VAR_10->maxB = VAR_10->Bi = VAR_12;
  } else {
   VAR_10->Bi = (3 * VAR_10->Bi + VAR_12) / 4;
   if (VAR_10->Bi > VAR_10->maxB)
    VAR_10->maxB = VAR_10->Bi;
   if (VAR_10->minB > VAR_10->maxB)
    VAR_10->minB = VAR_10->maxB;
  }
  VAR_10->packetcount = 0;
  VAR_10->lasttime = VAR_11;
 }
}
