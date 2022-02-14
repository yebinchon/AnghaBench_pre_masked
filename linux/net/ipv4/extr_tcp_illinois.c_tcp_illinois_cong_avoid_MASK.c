
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tcp_sock {int snd_cwnd_cnt; int snd_cwnd; scalar_t__ snd_cwnd_clamp; } ;
struct sock {int dummy; } ;
struct illinois {int acked; int alpha; int end_seq; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int ) ;
 struct illinois* FUNC_1 (struct sock*) ;
 int FUNC_2 (int,int) ;
 scalar_t__ FUNC_3 (struct tcp_sock*) ;
 int FUNC_4 (struct sock*) ;
 struct tcp_sock* FUNC_5 (struct sock*) ;
 int FUNC_6 (struct tcp_sock*,int) ;
 int FUNC_7 (struct sock*) ;

__attribute__((used)) static void FUNC_8(struct sock *VAR_1, u32 VAR_2, u32 VAR_3)
{
 struct tcp_sock *VAR_4 = FUNC_5(VAR_1);
 struct illinois *VAR_5 = FUNC_1(VAR_1);

 if (FUNC_0(VAR_2, VAR_5->end_seq))
  FUNC_7(VAR_1);


 if (!FUNC_4(VAR_1))
  return;


 if (FUNC_3(VAR_4))
  FUNC_6(VAR_4, VAR_3);

 else {
  u32 VAR_6;


  VAR_4->snd_cwnd_cnt += VAR_5->acked;
  VAR_5->acked = 1;




  VAR_6 = (VAR_4->snd_cwnd_cnt * VAR_5->alpha) >> VAR_0;
  if (VAR_6 >= VAR_4->snd_cwnd) {
   VAR_4->snd_cwnd = FUNC_2(VAR_4->snd_cwnd + VAR_6 / VAR_4->snd_cwnd,
        (u32)VAR_4->snd_cwnd_clamp);
   VAR_4->snd_cwnd_cnt = 0;
  }
 }
}
