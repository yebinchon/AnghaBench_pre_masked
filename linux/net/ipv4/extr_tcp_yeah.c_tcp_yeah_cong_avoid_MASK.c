
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct TYPE_2__ {int cntRTT; int minRTT; int baseRTT; int beg_snd_cwnd; int beg_snd_nxt; int beg_snd_una; } ;
struct yeah {int doing_reno_now; int pkts_acked; scalar_t__ reno_count; scalar_t__ fast_count; int lastQ; TYPE_1__ vegas; } ;
struct tcp_sock {void* snd_cwnd_cnt; int snd_cwnd; int snd_cwnd_clamp; int snd_ssthresh; int snd_nxt; } ;
struct sock {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (int,int ) ;
 int FUNC_1 (int,int) ;
 struct yeah* FUNC_2 (struct sock*) ;
 void* FUNC_3 (int,unsigned int) ;
 void* FUNC_4 (int,int) ;
 int FUNC_5 (struct tcp_sock*,int,int) ;
 scalar_t__ FUNC_6 (struct tcp_sock*) ;
 int FUNC_7 (struct sock*) ;
 struct tcp_sock* FUNC_8 (struct sock*) ;
 int FUNC_9 (struct tcp_sock*,int) ;

__attribute__((used)) static void FUNC_10(struct sock *VAR_6, u32 VAR_7, u32 VAR_8)
{
 struct tcp_sock *VAR_9 = FUNC_8(VAR_6);
 struct yeah *VAR_10 = FUNC_2(VAR_6);

 if (!FUNC_7(VAR_6))
  return;

 if (FUNC_6(VAR_9))
  FUNC_9(VAR_9, VAR_8);

 else if (!VAR_10->doing_reno_now) {


  VAR_9->snd_cwnd_cnt += VAR_10->pkts_acked;
  if (VAR_9->snd_cwnd_cnt > FUNC_4(VAR_9->snd_cwnd, VAR_0)) {
   if (VAR_9->snd_cwnd < VAR_9->snd_cwnd_clamp)
    VAR_9->snd_cwnd++;
   VAR_9->snd_cwnd_cnt = 0;
  }

  VAR_10->pkts_acked = 1;

 } else {

  FUNC_5(VAR_9, VAR_9->snd_cwnd, 1);
 }
 if (FUNC_0(VAR_7, VAR_10->vegas.beg_snd_nxt)) {
  if (VAR_10->vegas.cntRTT > 2) {
   u32 VAR_11, VAR_12;
   u64 VAR_13;
   VAR_11 = VAR_10->vegas.minRTT;




   VAR_13 = VAR_9->snd_cwnd;
   VAR_13 *= VAR_11 - VAR_10->vegas.baseRTT;
   FUNC_1(VAR_13, VAR_11);
   VAR_12 = VAR_13;

   if (VAR_12 > VAR_1 ||
       VAR_11 - VAR_10->vegas.baseRTT > (VAR_10->vegas.baseRTT / VAR_4)) {
    if (VAR_12 > VAR_1 &&
        VAR_9->snd_cwnd > VAR_10->reno_count) {
     u32 VAR_14 = FUNC_4(VAR_12 / VAR_3 ,
           VAR_9->snd_cwnd >> VAR_2);

     VAR_9->snd_cwnd -= VAR_14;

     VAR_9->snd_cwnd = FUNC_3(VAR_9->snd_cwnd,
          VAR_10->reno_count);

     VAR_9->snd_ssthresh = VAR_9->snd_cwnd;
    }

    if (VAR_10->reno_count <= 2)
     VAR_10->reno_count = FUNC_3(VAR_9->snd_cwnd>>1, 2U);
    else
     VAR_10->reno_count++;

    VAR_10->doing_reno_now = FUNC_4(VAR_10->doing_reno_now + 1,
          0xffffffU);
   } else {
    VAR_10->fast_count++;

    if (VAR_10->fast_count > VAR_5) {
     VAR_10->reno_count = 2;
     VAR_10->fast_count = 0;
    }

    VAR_10->doing_reno_now = 0;
   }

   VAR_10->lastQ = VAR_12;
  }




  VAR_10->vegas.beg_snd_una = VAR_10->vegas.beg_snd_nxt;
  VAR_10->vegas.beg_snd_nxt = VAR_9->snd_nxt;
  VAR_10->vegas.beg_snd_cwnd = VAR_9->snd_cwnd;


  VAR_10->vegas.cntRTT = 0;
  VAR_10->vegas.minRTT = 0x7fffffff;
 }
}
