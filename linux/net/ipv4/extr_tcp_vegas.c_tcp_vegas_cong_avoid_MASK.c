
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct vegas {int cntRTT; int minRTT; int baseRTT; int beg_snd_nxt; int doing_vegas_now; } ;
struct tcp_sock {int snd_cwnd; int snd_cwnd_clamp; void* snd_ssthresh; int snd_nxt; } ;
struct sock {int dummy; } ;


 scalar_t__ FUNC_0 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,int) ;
 int VAR_2 ;
 struct vegas* FUNC_2 (struct sock*) ;
 int FUNC_3 (int,int) ;
 void* FUNC_4 (struct sock*) ;
 scalar_t__ FUNC_5 (struct tcp_sock*) ;
 int FUNC_6 (struct sock*,int,int) ;
 struct tcp_sock* FUNC_7 (struct sock*) ;
 int FUNC_8 (struct tcp_sock*,int) ;
 void* FUNC_9 (struct tcp_sock*) ;

__attribute__((used)) static void FUNC_10(struct sock *VAR_3, u32 VAR_4, u32 VAR_5)
{
 struct tcp_sock *VAR_6 = FUNC_7(VAR_3);
 struct vegas *VAR_7 = FUNC_2(VAR_3);

 if (!VAR_7->doing_vegas_now) {
  FUNC_6(VAR_3, VAR_4, VAR_5);
  return;
 }

 if (FUNC_0(VAR_4, VAR_7->beg_snd_nxt)) {





  VAR_7->beg_snd_nxt = VAR_6->snd_nxt;
  if (VAR_7->cntRTT <= 2) {



   FUNC_6(VAR_3, VAR_4, VAR_5);
  } else {
   u32 VAR_8, VAR_9;
   u64 VAR_10;
   VAR_8 = VAR_7->minRTT;







   VAR_10 = (u64)VAR_6->snd_cwnd * VAR_7->baseRTT;
   FUNC_1(VAR_10, VAR_8);





   VAR_9 = VAR_6->snd_cwnd * (VAR_8-VAR_7->baseRTT) / VAR_7->baseRTT;

   if (VAR_9 > VAR_2 && FUNC_5(VAR_6)) {
    VAR_6->snd_cwnd = FUNC_3(VAR_6->snd_cwnd, (u32)VAR_10+1);
    VAR_6->snd_ssthresh = FUNC_9(VAR_6);

   } else if (FUNC_5(VAR_6)) {

    FUNC_8(VAR_6, VAR_5);
   } else {





    if (VAR_9 > VAR_1) {



     VAR_6->snd_cwnd--;
     VAR_6->snd_ssthresh
      = FUNC_9(VAR_6);
    } else if (VAR_9 < VAR_0) {



     VAR_6->snd_cwnd++;
    } else {



    }
   }

   if (VAR_6->snd_cwnd < 2)
    VAR_6->snd_cwnd = 2;
   else if (VAR_6->snd_cwnd > VAR_6->snd_cwnd_clamp)
    VAR_6->snd_cwnd = VAR_6->snd_cwnd_clamp;

   VAR_6->snd_ssthresh = FUNC_4(VAR_3);
  }


  VAR_7->cntRTT = 0;
  VAR_7->minRTT = 0x7fffffff;
 }

 else if (FUNC_5(VAR_6))
  FUNC_8(VAR_6, VAR_5);
}
